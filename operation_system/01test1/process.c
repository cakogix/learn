#include <stdio.h> 
#include <sys/types.h>
#include <unistd.h> 
#include <signal.h>
#include <ctype.h> 
#include <stdlib.h>

/* 允许建立的子进程个数最大值 */
#define MAX_CHILD_NUMBER 10 

/* 子进程睡眠时间 */
#define SLEEP_INTERVAL 2 

int proc_number=0; /* 子进程的自编号，从0开始 */
void do_something(); 

int main(int argc, char* argv[])
{   
    /* 子进程个数 */
    int child_proc_number = MAX_CHILD_NUMBER; 
    int i, ch; 
    pid_t  child_pid; 
    pid_t pid[MAX_CHILD_NUMBER]={0}; /* 存放每个子进程的id */ 
    
    if (argc > 1) /* 命令行参数第一个参数表示子进程个数*/ 
    {
        child_proc_number = atoi(argv[1]); 
        child_proc_number= (child_proc_number > MAX_CHILD_NUMBER) ? MAX_CHILD_NUMBER :
                                                child_proc_number;
    } 
    
    for (i=0; i<child_proc_number; i++) { 
        child_pid = fork(); /* 创建子进程 */
        if (child_pid == 0) { /* 子进程 */
            proc_number = i; 
            do_something(); 
            exit(0); /* 子进程执行完毕后退出 */
        } else if (child_pid < 0) {
            perror("fork failed");
            exit(1);
        } else {
            pid[i] = child_pid; /* 父进程把子进程的id保存到pid[i] */
        }
        
    }
    
    /* 让用户选择杀死进程，数字表示杀死该进程，q退出 */
    while ((ch = getchar()) != 'q') { 
        if (isdigit(ch)) { 
            int pid_index = ch - '0';
            if (pid_index < child_proc_number) {
                kill(pid[pid_index], SIGTERM); /* 向pid[ch-'0']发信号SIGTERM，杀死该子进程 */
            }
        }
    } 
    
    /* 在这里填写代码，杀死本组的所有进程 */
    for (i = 0; i < child_proc_number; i++) {
        kill(pid[i], SIGTERM); /* 杀死所有子进程 */
    }
    return 0;
} 

void do_something(){ 
    for(;;)  {  
        printf("This is process No.%d and its pid is %d\n", proc_number, getpid() );
        sleep(SLEEP_INTERVAL); /* 主动阻塞两秒钟 */
    } 
}
