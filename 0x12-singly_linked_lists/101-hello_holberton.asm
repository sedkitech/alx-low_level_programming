section .data
    message db 'Hello, Holberton', 10 ; message to print

section .text
    global _start

_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, message
    mov rdx, 16
    syscall

    mov rax, 60
    xor rdi, rdi
    syscall
