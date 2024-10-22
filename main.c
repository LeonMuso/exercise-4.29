#include <stdio.h>

int main(void) {
    int num1, num2;
    int totale = 0;
    printf("inserisci i due numeri: ");
    scanf("%d%d", &num1, &num2);
    for (int i = 1; i <= num2; i++) {
        totale += num1;
    }
    printf("totale = %d\n", totale);
}
