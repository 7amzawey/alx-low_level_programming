section		.data
msg db 'Hello, Holberton', 0x0A, 0
section		.text
	extern printf
	global main
main:
	mov		rdi, msg
	xor		eax, eax
	call		printf
	xor edi, edi
	mov eax, 0x60
	syscall
