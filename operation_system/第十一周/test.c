#include <stdio.h>
#include <unistd.h>

#define PAGE_SIZE 4096  // 假设页面大小为4KB
#define NUM_PAGES 100   // 假设有100个页面

// 模拟物理内存块
int physical_memory[NUM_PAGES / 10];  // 假设物理内存块只有10个

// 模拟页表
int page_table[NUM_PAGES];

// 模拟缺页异常处理
void page_fault_handler(int page_number) {
    printf("Page fault occurred for page %d\n", page_number);
    // 检查是否有空闲的物理内存块
    int free_block = -1;
    for (int i = 0; i < sizeof(physical_memory) / sizeof(physical_memory[0]); i++) {
        if (physical_memory[i] == 0) {
            free_block = i;
            break;
        }
    }

    if (free_block != -1) {
        // 分配物理内存块
        physical_memory[free_block] = page_number;
        printf("Allocated physical block %d for page %d\n", free_block, page_number);
    } else {
        printf("No free physical memory blocks available\n");
    }
}

// 模拟访问页面
void access_page(int page_number) {
    if (page_table[page_number] == 0) {
        // 缺页异常
        page_fault_handler(page_number);
        page_table[page_number] = 1;  // 标记为已加载
    }
    printf("Accessing page %d\n", page_number);
}

int main() {
    // 初始化页表
    for (int i = 0; i < NUM_PAGES; i++) {
        page_table[i] = 0;  // 初始时，所有页面都未加载
    }

    // 模拟访问页面
    access_page(10);  // 访问第10页
    access_page(20);  // 访问第20页
    access_page(10);  // 再次访问第10页

    return 0;
}