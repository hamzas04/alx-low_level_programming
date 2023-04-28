section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0

section .text
    extern printf

global main
main:
    sub rsp, 8          ; Align stack to 16 bytes (multiple of 8)

    mov rdi, format     ; First argument: format string
    mov rsi, hello      ; Second argument: hello string
    xor eax, eax        ; Clear eax register (return value of printf)
    call printf         ; Call printf function

    add rsp, 8          ; Restore stack pointer

    mov eax, 0          ; Return 0
    ret
