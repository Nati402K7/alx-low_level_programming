section		.text
	global main
	extern printf

main:
	mov	edi, now
	mov	eax, 0
	call	printf


section		.data
	now db 'Hello, Holberton', 0xa, 0
