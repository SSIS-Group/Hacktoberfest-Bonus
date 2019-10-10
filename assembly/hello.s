; Hello World in Assembly
; ld -m elf_i386 -s -o hello_world hello_world.o
section .text align=0

global _start

message db 'Hello world', 0x0a

len equ $ - message

_start:
    mov eax, 4 ;SYS_write
    mov ebx, 1 ;File descriptor number (1=stdout)
    mov ecx, message ;Poniter to a string.
    mov edx, len ; message length
    int 0x80

    mov eax, 1
    int 0x8
