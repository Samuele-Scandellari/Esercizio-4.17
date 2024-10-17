#include <stdio.h>
int main() {
    int i;
    int n;
    int numeri;
    int somma=0;
    printf("Inserisci il numero di numeri che vuoi sommare: ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        printf("Inserisci il numero: ");
        scanf("%d", &numeri);
        if(numeri<0) {
            numeri = numeri * -1;
        }
        somma += numeri;
    }
    printf("La somma dei numeri assoluti e':｜%d｜", somma);
    return 0;
}