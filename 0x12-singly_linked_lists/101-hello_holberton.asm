section .data
    msg db 'Hello, Holberton', 10 ; '10' is the newline character

section .text
    global main
    extern printf

main:
    push rbp          ; Save base pointer
    mov rbp, rsp      ; Set base pointer

    mov rdi, msg      ; The address of the string to print (first argument to printf)
    xor rax, rax      ; Clear RAX register (printf is a variadic function)
    call printf       ; Call printf function to print the string

    mov rsp, rbp      ; Reset stack pointer
    pop rbp           ; Restore base pointer
    ret               ; Return from main

