section .data
	msg db 'Hello, Holberton', 0xA
	len equ $ - msg

section .text
	global main

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, len
	syscall

	mov rax, 60
	mov rdi, 0
	syscall
