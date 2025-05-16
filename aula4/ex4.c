#include <stdio.h>

int main(){
    int ph = 0;
    while(ph != -1){
        printf("\nQual o pH da substancia? ");
        scanf("%d", &ph);
        if (ph < 7 && ph != -1){printf ("\nSubstancia acida");}
        else if (ph == 7){printf ("\nSubstancia neutra");}
        else if (ph > 7){printf ("\nSubstancia basica");}
    }
}
