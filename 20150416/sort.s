	.file	"sort.c"
	.text
	.globl	sortnum
	.type	sortnum, @function
sortnum:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$0, -12(%rbp)
	jmp	.L2
.L6:
	movl	$0, -8(%rbp)
	jmp	.L3
.L5:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jle	.L4
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	%eax, (%rdx)
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	-4(%rbp), %eax
	movl	%eax, (%rdx)
.L4:
	addl	$1, -8(%rbp)
.L3:
	movl	-28(%rbp), %eax
	subl	$1, %eax
	cmpl	-8(%rbp), %eax
	jg	.L5
	addl	$1, -12(%rbp)
.L2:
	movl	-12(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L6
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	sortnum, .-sortnum
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
