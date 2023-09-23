section .data
    hello db "Hello, Holberton",10,0  ; Null-terminated string with newline

section .text
    global main

extern printf

main:
    push rbp
    mov rdi, hello   ; Format string
    call printf
    pop rbp
    ret

