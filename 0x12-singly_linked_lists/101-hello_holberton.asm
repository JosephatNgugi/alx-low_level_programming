section .data
	message db "Hello, Holberton", 10
	len equ $ -message

section .text

global _start
_start:
	mov rax, 1
	mov rdi, 1
 	mov rsi, message
	mov rdx, len
	syscall
