section .data
    print_string db "Hello, Holberton", 10, 0 ; by the way 10 for new line
    my_name db "code author: Ahmed Magdy", 0; and 0 for the null to colse the string
    school_name db "ALX CO 1 BLENDED", 0;

section .text
    extern printf
    global main

main:
    sub rsp, 8; this align the stack to 16 bytes boundry need more search about it
    mov rdi, print_string;  this line Format string
    call printf;  Call printf function
    add rsp, 8; Restore the stack
    mov eax, 0; Return 0 from main
    ret; this to make the return
