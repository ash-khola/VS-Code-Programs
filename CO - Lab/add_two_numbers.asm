dosseg
.model small
.stack 100h
.data
.code
main proc
         mov ah, 1
         int 21h
         mov dl, al
         mov ah, 1
         int 21h
         sub al, 48
         add dl, al
         mov ah, 2
         int 21h
         mov ah, 4ch
main endp
end main