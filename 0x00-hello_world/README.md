Task 0:gcc -E $CFILE -o c   ; Usig gcc -E gives only preprocessing power to file CFILE and saves the output in c

Task 1: gcc -c $CFILE       ; It complies but doesnt link the file{We have to "export CFILE=main.something.

Task 1: gcc -S $CFILE      ; It compiles and link and saves in it the output file.

