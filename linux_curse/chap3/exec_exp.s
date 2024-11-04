	.file	"rj2205-04223150-\351\231\210\345\206\240\345\205\210-chap3-1.c"
	.text
	.section	.rodata
.LC0:
	.string	"/parent_semaphore"
.LC1:
	.string	"/child_semaphore"
.LC2:
	.string	"sem_open"
.LC3:
	.string	"fork failed"
.LC4:
	.string	"\345\255\220\350\277\233\347\250\213:(PID: %d) %d\n"
.LC5:
	.string	"\347\210\266\350\277\233\347\250\213:(PID: %d) %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$0, %ecx
	movl	$420, %edx
	movl	$64, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	sem_open@PLT
	movq	%rax, -16(%rbp)
	movl	$1, %ecx
	movl	$420, %edx
	movl	$64, %esi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	sem_open@PLT
	movq	%rax, -8(%rbp)
	cmpq	$0, -16(%rbp)
	je	.L2
	cmpq	$0, -8(%rbp)
	jne	.L3
.L2:
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	perror@PLT
	movl	$1, %eax
	jmp	.L4
.L3:
	call	fork@PLT
	movl	%eax, -20(%rbp)
	cmpl	$0, -20(%rbp)
	jns	.L5
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	perror@PLT
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	sem_close@PLT
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	sem_close@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	sem_unlink@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	sem_unlink@PLT
	movl	$1, %eax
	jmp	.L4
.L5:
	cmpl	$0, -20(%rbp)
	jne	.L6
	movl	$1, -28(%rbp)
	jmp	.L7
.L8:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	sem_wait@PLT
	call	getpid@PLT
	movl	%eax, %ecx
	movl	-28(%rbp), %eax
	movl	%eax, %edx
	movl	%ecx, %esi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	sem_post@PLT
	addl	$1, -28(%rbp)
.L7:
	cmpl	$5, -28(%rbp)
	jle	.L8
	jmp	.L9
.L6:
	movl	$1, -24(%rbp)
	jmp	.L10
.L11:
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	sem_wait@PLT
	call	getpid@PLT
	movl	%eax, %ecx
	movl	-24(%rbp), %eax
	movl	%eax, %edx
	movl	%ecx, %esi
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	sem_post@PLT
	addl	$1, -24(%rbp)
.L10:
	cmpl	$5, -24(%rbp)
	jle	.L11
	movl	$0, %edi
	call	wait@PLT
.L9:
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	sem_close@PLT
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	sem_close@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	sem_unlink@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	sem_unlink@PLT
	movl	$0, %eax
.L4:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
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
