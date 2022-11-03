dosseg
.model small
.stack 100h
.data
    q    db ?
    r    db ?
.code
main proc
         mov ax, 28
         mov bl, 6
         div bl
         mov q, al
         mov r, ah
         mov dl, q
         add dl, 48
         mov ah, 2
         int 21h
         mov dl,''
         mov ah, 2
         int 21h
         mov dl, r
         add dl, 48
         mov ah, 2
         int 21h
         mov ah, 4ch
         int 21h
main endp
end main
  