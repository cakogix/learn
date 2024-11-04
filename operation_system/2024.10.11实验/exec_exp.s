	.file	"thread.c"
	.text
	.globl	sum
	.bss
	.align 8
	.type	sum, @object
	.size	sum, 8
sum:
	.zero	8
	.globl	lock
	.align 32
	.type	lock, @object
	.size	lock, 40
lock:
	.zero	40
	.text
	.globl	thread
	.type	thread, @function
thread:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	leaq	lock(%rip), %rax
	movq	%rax, %rdi
	call	pthread_mutex_lock@PLT
	movq	sum(%rip), %rax
	addq	$1, %rax
	movq	%rax, sum(%rip)
	leaq	lock(%rip), %rax
	movq	%rax, %rdi
	call	pthread_mutex_unlock@PLT
	addl	$1, -4(%rbp)
.L2:
	cmpl	$9999, -4(%rbp)
	jle	.L3
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	thread, .-thread
	.section	.rodata
.LC0:
	.string	"before ...sum=%lu\n"
.LC1:
	.string	"cause:"
.LC2:
	.string	"creat pthread %d failed.\n"
.LC3:
	.string	"after.....sum=%lu\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$288, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	sum(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -284(%rbp)
	jmp	.L5
.L7:
	leaq	-272(%rbp), %rdx
	movl	-284(%rbp), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movl	$0, %ecx
	leaq	thread(%rip), %rdx
	movl	$0, %esi
	movq	%rax, %rdi
	call	pthread_create@PLT
	movl	%eax, -276(%rbp)
	cmpl	$0, -276(%rbp)
	je	.L6
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	perror@PLT
	movl	-284(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
.L6:
	addl	$1, -284(%rbp)
.L5:
	cmpl	$15, -284(%rbp)
	jle	.L7
	movl	$0, -280(%rbp)
	jmp	.L8
.L9:
	leaq	-144(%rbp), %rdx
	movl	-280(%rbp), %eax
	cltq
	salq	$3, %rax
	addq	%rax, %rdx
	movl	-280(%rbp), %eax
	cltq
	movq	-272(%rbp,%rax,8), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	pthread_join@PLT
	addl	$1, -280(%rbp)
.L8:
	cmpl	$15, -280(%rbp)
	jle	.L9
	movq	sum(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L11
	call	__stack_chk_fail@PLT
.L11:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
