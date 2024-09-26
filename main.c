#include <stdio.h>

int main(void) {
    int num;
    printf("inserisci un numero: \n");
    scanf("%d",&num);
    if(num==0) {
        printf("il tuo numero e' neutro \n");
    }
    else if(num>0) {
        printf("il tuo numero e' positivo \n");
    }
    else {
        printf("il tuo numero e' negativo \n");
    }
    return 0;
}