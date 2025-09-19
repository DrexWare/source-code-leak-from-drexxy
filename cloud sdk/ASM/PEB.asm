.code

__reset_registers proc
    mov r8, 0
    mov r9, 0
    mov r10, 0
    mov r11, 0
    mov r12, 0
    mov r13, 0
    mov r14, 0
    mov r15, 0
    mov rbp, 0
    mov rsi, 0
    mov rax, 0
    xor rax, rsi
    mov rdx, 0
    mov rbx, 0
    ; todo: can we somehow clear rsp?
    ; mov rsp, 0
    ret
__reset_registers endp

__exit_and_clear proc ; this is very fire, used for debugging and fake entrypointg
    jmp __reset_registers ; does this break my mental state? absolutely!
    mov rax, 0
    ret
__exit_and_clear endp

__destroy_peb_base proc
    mov r11, 6h
    mov r11, 30h
    mov rax, gs:[r11]
    jz __exit_and_clear
    xor r11, r11
    mov r11, 60h
    mov rax, gs:[r11]
    cmp rax, 69
    je __exit_and_clear
    mov qword ptr [rax+10h], 0
    ret
__destroy_peb_base endp

end
