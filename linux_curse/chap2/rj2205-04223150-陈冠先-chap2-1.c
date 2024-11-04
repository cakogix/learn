#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>

// 检查目录是否为空
int is_empty_dir(const char *path) {
    DIR *dir = opendir(path);
    if (dir == NULL) {
        return 0;
    }
    struct dirent *entry;
    //readdir(dir) return a dirent pointer
    while ((entry = readdir(dir)) != NULL) {
        //ignore . and ..
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue;
        }
        closedir(dir);
        return 0;
    }

    closedir(dir);
    return 1;
}

// 删除空目录
void delete_empty_directories(const char *path) {
    DIR *dir = opendir(path);
    if (dir == NULL) {
        perror("Failed to open directory");
        return;
    }
    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue;
        }

        //声明一个字符数组 fullPath 用于存储完整路径，然后使用 snprintf 函数将目录路径和当前条目的名称组合成完整路径。
        char fullPath[1024];
        snprintf(fullPath, sizeof(fullPath), "%s/%s", path, entry->d_name);
        //调用 is_empty_dir 函数检查 fullPath 指向的目录是否为空。同时检查 entry->d_type 是否为 DT_DIR，后者表示这是一个目录条目。
        if (is_empty_dir(fullPath) && entry->d_type == DT_DIR) {
            //如果 fullPath 指向的是一个空目录，那么使用 rmdir 函数将其删除，并打印一条消息表示已删除空目录。
            rmdir(fullPath);
            printf("Deleted empty directory: %s\n", fullPath);
        }
    }
    closedir(dir);
}

int main() {
    char directoryPath[1024];

    printf("Enter the directory path: ");
    //使用 scanf 函数读取用户输入的字符串并存储在 directoryPath 数组中。
    scanf("%s", directoryPath);
    //声明一个 struct stat 类型的变量 statbuf，这是一个用于存储文件或目录信息的结构体。
    struct stat statbuf;
    
    //调用 stat 函数来获取 directoryPath 指向的文件或目录的状态信息，并将其存储在 statbuf 中。stat 函数返回0表示成功，非0表示失败。S_ISDIR(statbuf.st_mode) 宏用于检查 statbuf.st_mode 字段是否表示一个目录。
    if (stat(directoryPath, &statbuf) != 0 || !S_ISDIR(statbuf.st_mode)) {
        fprintf(stderr, "The specified path is not a directory or does not exist.\n");
    }

    delete_empty_directories(directoryPath);
}
