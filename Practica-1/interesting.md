La diferencia entre definicion un string con "" y '', es que "" agrega \0 al final y '' no.
Banderas de Warnings para GCC:
gcc app.c -Wpedantic -Wextra -Wall -Werror
- Wall
    Wall agrega warnings basicos
- Wextra
    Wextra agrega warnings adicionales
- Wpedantic
    Wpendatic fuerza el cumplimiento estricto del estandaar
- Werror
    Werror convierte warnings en errores