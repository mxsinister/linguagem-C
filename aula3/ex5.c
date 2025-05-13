#include <stdio.h>

int main(){
    float n1;
    float n2;
    float n3;
    float media;
    int acimadamedia = 0;

    printf ("insira sua primeira nota: ");
    scanf ("%f", &n1);
    printf ("insira sua segunda nota: ");
    scanf ("%f", &n2);
    printf ("insira sua terceira nota: ");
    scanf ("%f", &n3);

    media = ((n1 + n2 + n3)/3);
    printf ("\nnota 1: %.2f\nnota 2: %.2f\nnota 3: %.2f\n", n1, n2, n3);

    printf ("media das notas: %.2f\n", media);

    if (n1 > media) {acimadamedia++;}
    if (n2 > media) {acimadamedia++;}
    if (n3 > media) {acimadamedia++;}

    printf ("notas acima da media: %d", acimadamedia);
    
}