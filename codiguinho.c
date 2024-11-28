#include <stdio.h>
int main() {
    int x, y;
    float resultado;
    scanf ("%d %d", &x, &y);
    resultado = (x + x) / y;
    printf ("O resultado de (x + x)/y eh igual a %f\n", resultado);
return 0;
}