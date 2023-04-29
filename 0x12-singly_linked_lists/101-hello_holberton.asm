section .data
	message: db "Hello, Holberton", 10
	format: db "%s", 0
	len: equ $ -message

section .text
	global _start
	extern printf

_start:
	mov rax, 1		; system call number for write
	mov rdi, format		; file descriptor for stdout
 	mov rsi, message	; pointer to message string
	mov rdx, len		; length of message string
	call printf		; call printf function
	
	mov rax, 60		; system call number for exit
	xor rdi, 0		; exit status code (0)
	syscall			; invoke system call
