section .text                         ; segmento TEXT
global _start                         ; punto de entrada del ELF

_start:
    jmp short dummy                   ; 1. salto a un dummy con el call

imprimir_str:
    pop ecx                           ; ecx => "ganaste snakeguitar!A"
    mov al,4                          ; syscall write: #4
    xor ebx,ebx                       ; ebx = 0
    inc ebx                           ; stdout filedescriptor: #1
    xor edx,edx                       ; edx = 0
    mov dl,20                         ; longitud de "ganaste snakeguitar!": 20
    int 0x80                          ; write(1, string, 20)

    mov al,1                          ; syscall exit: #1
    dec ebx                           ; ebx = 0
    int 0x80                          ; exit(0)

dummy:
    call imprimir_str                 ; 2. llamo al código encargado de imprimir el mensaje
    db 'ganaste snakeguitar', 0x0a    ; antes de saltar apila dirección de "you win!\v"
                                      ; para retornar luego del call
