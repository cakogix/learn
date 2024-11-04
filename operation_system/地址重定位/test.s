	.file	"test.c"
	.text
	.globl	A
	.bss
	.align 4
	.type	A, @object
	.size	A, 4
A:
	.zero	4
	.globl	B
	.align 4
	.type	B, @object
	.size	B, 4
B:
	.zero	4
	.globl	C
	.data
	.align 4
	.type	C, @object
	.size	C, 4
C:
	.long	2
	.local	D
	.comm	D,4,4
	.local	E
	.comm	E,4,4
	.align 4
	.type	F, @object
	.size	F, 4
F:
	.long	4
	.globl	G
	.section	.rodata
	.align 4
	.type	G, @object
	.size	G, 4
G:
	.long	5
	.globl	H
	.type	H, @object
	.size	H, 1
H:
	.byte	6
.LC0:
	.string	"12356"
.LC1:
	.string	"PID is:%d\n\n"
.LC2:
	.string	"int A = 0    A_addr = %p\n"
.LC3:
	.string	"int B = 0    B_addr = %p\n"
.LC4:
	.string	"int C = 2    C_addr = %p\n"
	.align 8
.LC5:
	.string	"static int D = 0    D_addr = %p\n"
	.align 8
.LC6:
	.string	"static int E = 0    E_addr = %p\n"
	.align 8
.LC7:
	.string	"static int F = 4    F_addr = %p\n"
	.align 8
.LC8:
	.string	"const int G = 5    G_addr = %p\n"
	.align 8
.LC9:
	.string	"const char H = 6    H_addr = %p\n"
.LC10:
	.string	"int a = 0    a_addr = %p\n"
.LC11:
	.string	"int b = 0    b_addr = %p\n"
.LC12:
	.string	"int c = 2    c_addr = %p\n"
	.align 8
.LC13:
	.string	"static int d = 0    d_addr = %p\n"
	.align 8
.LC14:
	.string	"static int e = 0    e_addr = %p\n"
	.align 8
.LC15:
	.string	"static int f = 4    f_addr = %p\n"
	.align 8
.LC16:
	.string	"const int g = 5    g_addr = %p\n"
	.align 8
.LC17:
	.string	"char1 = 'abcde'\t\tchar1_addr = %p\n"
	.align 8
.LC18:
	.string	"char char1[] = 'abcde'\t\tchar1_addr = %p\n"
	.align 8
.LC19:
	.string	"char *ptr = '1'\t\tptr\tchar1_addr = %p\n"
	.align 8
.LC20:
	.string	"value of the ptr\t\tptr_value = 0x%p\n"
.LC21:
	.string	"value of %p\t\tvalue_0x%p = %d\n"
	.align 8
.LC22:
	.string	"int *heap = malloc(sizeof(int)*4)\theap_addr = %p\n"
	.align 8
.LC23:
	.string	"int *heap = malloc(sizeof(int)*4)\t&heap_addr = %p\n"
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
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -44(%rbp)
	movl	$2, -40(%rbp)
	movl	$5, -36(%rbp)
	movl	$1684234849, -14(%rbp)
	movw	$101, -10(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, -32(%rbp)
	movl	$16, %edi
	call	malloc@PLT
	movq	%rax, -24(%rbp)
	call	getpid@PLT
	movl	%eax, %esi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	A(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	B(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	C(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	D(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	E(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	F(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	G(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	H(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$10, %edi
	call	putchar@PLT
	leaq	-48(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-44(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-40(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	d.2(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	e.1(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	f.0(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-36(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC16(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$10, %edi
	call	putchar@PLT
	leaq	-14(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC17(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-14(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC18(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC19(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	.LC20(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %ecx
	movq	-32(%rbp), %rdx
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC21(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC22(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC23(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	call	pause@PLT
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	free@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.local	d.2
	.comm	d.2,4,4
	.local	e.1
	.comm	e.1,4,4
	.data
	.align 4
	.type	f.0, @object
	.size	f.0, 4
f.0:
	.long	4
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
