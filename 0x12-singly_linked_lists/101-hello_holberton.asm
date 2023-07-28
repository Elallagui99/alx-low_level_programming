section .data ;data section
	msg db "Hello, holberton", 0 ;define string var msg
	fmt db "%s", 10, 0 ;define string var fmt

section .text ;code section
	global main   ;the entry point
	extern printf ;declare function to call

main: ;the entry point program label
	push rdp ;set stack frame

	;start passing arguments to printf
	mov rdi, fmt ;format or the fist argument
	mov rsi, msg ;the argument to print
	mov rax, 0   ;move 0 into rax register

	;call printf function
	call printf

	;clean the stack nd return
	pop rdp ;restore stack
	mov rax,0 ;no error to return
	ret ;return
