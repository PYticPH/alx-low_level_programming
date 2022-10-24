global    main
extern    printf
section   .text

main:
lea       rdi, [rel message]
lea       rsi, [rel message]

mov       al, 0
call      printf

lea       rdi, [rel fmti]

mov       rax, 0x3C
xor       rdi, rdi
syscall

section   .data
message:  db        "Hello, Holberton",10,0;
   fmti:  db        "%d",10,0
