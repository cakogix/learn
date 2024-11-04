#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>
#include <string.h>

// 函数声明
void list_file_attributes(const char *filename);
void change_file_attribute(const char *filename);

int main(int argc, char *argv[]) {

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
    }

    const char *filename = argv[1];

    // 列出文件的属性
    list_file_attributes(filename);

    // 显示菜单
    int choice;
    do {
        printf("\nSelect attribute to change:\n");
        printf("1. Owner permissions\n");
        printf("2. Group permissions\n");
        printf("3. Other permissions\n");
        printf("4. Owner ID\n");
        printf("5. Group ID\n");
        printf("6. Modification time\n");
        printf("7. File name\n");
        printf("8. Quit\n");
        printf("Please choose one number: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            case 2:
            case 3:
                change_file_attribute(filename);
                break;
            case 4:
            case 5:
            case 6:
            case 7:
                change_file_name(filename);
                break;
            case 8:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}

void list_file_attributes(const char *filename) {
    struct stat file_stat;
    if (stat(filename, &file_stat) != 0) {
        perror("stat failed");
        exit(EXIT_FAILURE);
    }

    char permissions[12];
    sprintf(permissions, "%c%o", (S_ISDIR(file_stat.st_mode)) ? 'd' : '-', (file_stat.st_mode & 0777));

    struct passwd *pw = getpwuid(file_stat.st_uid);
    struct group *gr = getgrgid(file_stat.st_gid);

    char time_str[256];
    strftime(time_str, sizeof(time_str), "%b %d %H:%M", localtime(&file_stat.st_mtime));

    printf("%s %ld %s %s %5ld %s %s\n",
           permissions,
           file_stat.st_nlink,
           pw ? pw->pw_name : "unknown",
           gr ? gr->gr_name : "unknown",
           file_stat.st_size,
           time_str,
           filename);

    // 显示文件内容
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    printf("\n");
}

void change_file_attribute(const char *filename) {
    printf("\n");
}

void change_file_name(const char *oldname){
    printf("Enter new filename: ");
    char newname[100];
    scanf("%s", newname);
    if (rename(oldname, newname) != 0) {
        perror("Failed");
    }
}
