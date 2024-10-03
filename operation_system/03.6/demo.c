#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/init.h>

static int __init print_task_struct(void) {
    struct task_struct *task;
    struct list_head *pos;
    int count = 0;

    printk(KERN_INFO "Starting to print task_struct fields...\n");

    list_for_each(pos, &init_task.tasks) {
        task = list_entry(pos, struct task_struct, tasks);

        printk(KERN_INFO "Process %d:\n", count++);
        printk(KERN_INFO "  PID: %d\n", task->pid);
        printk(KERN_INFO "  State: %ld\n", task->__state); // 使用__state代替state
        printk(KERN_INFO "  Priority: %d\n", task->prio);
        printk(KERN_INFO "  Static Priority: %d\n", task->static_prio);
        printk(KERN_INFO "  Policy: %d\n", task->policy);
        printk(KERN_INFO "  Parent PID: %d\n", task->parent->pid);
        printk(KERN_INFO "  Real Parent PID: %d\n", task->real_parent->pid);
        printk(KERN_INFO "  Process Flags: %x\n", task->flags);
        printk(KERN_INFO "  Thread Info Flags: %lx\n", (long)task_thread_info(task)->flags); // 确保类型匹配
        printk(KERN_INFO "  Total VM: %lu\n", task->mm ? task->mm->total_vm : 0);
        // 移除了对mm->rss的引用，因为它在新内核中不存在
        printk(KERN_INFO "  Comm: %s\n", task->comm);
        printk(KERN_INFO "------------------------------\n");
    }

    printk(KERN_INFO "Finished printing task_struct fields.\n");
    return 0;
}

static void __exit exit_print_task_struct(void) {
    printk(KERN_INFO "Exiting print_task_struct module.\n");
}

module_init(print_task_struct);
module_exit(exit_print_task_struct);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("A module to print task_struct fields");