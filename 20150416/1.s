	.file	"Bubblesort.c"
	.section	.rodata
.LC0:
	.string	"Input 10 Number:"
.LC1:
	.string	"%d"
.LC2:
	.string	"%d "
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$0, -72(%rbp)
	jmp	.L2
.L3:
	movl	-72(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	-48(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	addl	$1, -72(%rbp)
.L2:
	cmpl	$9, -72(%rbp)
	jle	.L3
	movl	$0, -68(%rbp)
	jmp	.L4
.L5:
	movl	-68(%rbp), %eax
	cltq
	movl	-48(%rbp,%rax,4), %eax
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -68(%rbp)
.L4:
	cmpl	$9, -68(%rbp)
	jle	.L5
	movl	$10, %edi
	call	putchar
	movl	$0, -64(%rbp)
	jmp	.L6
.L10:
	movl	$0, -60(%rbp)
	jmp	.L7
.L9:
	movl	-60(%rbp), %eax
	cltq
	movl	-48(%rbp,%rax,4), %edx
	movl	-60(%rbp), %eax
	addl	$1, %eax
	cltq
	movl	-48(%rbp,%rax,4), %eax
	cmpl	%eax, %edx
	jle	.L8
	movl	-60(%rbp), %eax
	cltq
	movl	-48(%rbp,%rax,4), %eax
	movl	%eax, -52(%rbp)
	movl	-60(%rbp), %eax
	addl	$1, %eax
	cltq
	movl	-48(%rbp,%rax,4), %edx
	movl	-60(%rbp), %eax
	cltq
	movl	%edx, -48(%rbp,%rax,4)
	movl	-60(%rbp), %eax
	addl	$1, %eax
	cltq
	movl	-52(%rbp), %edx
	movl	%edx, -48(%rbp,%rax,4)
.L8:
	addl	$1, -60(%rbp)
.L7:
	movl	$9, %eax
	subl	-64(%rbp), %eax
	cmpl	-60(%rbp), %eax
	jg	.L9
	addl	$1, -64(%rbp)
.L6:
	cmpl	$9, -64(%rbp)
	jle	.L10
	movl	$0, -56(%rbp)
	jmp	.L11
.L12:
	movl	-56(%rbp), %eax
	cltq
	movl	-48(%rbp,%rax,4), %eax
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -56(%rbp)
.L11:
	cmpl	$9, -56(%rbp)
	jle	.L12
	movl	$10, %edi
	call	putchar
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
