section .data
    msg db "Hello World!", 10, 0

section .text
    global main

main:
    push rbp
    mov rax, 4
    mov rbx, 1
    mov rcx, msg
    mov rdx, 12
    int 0x80
    pop rbp
    mov rax, 0
    ret