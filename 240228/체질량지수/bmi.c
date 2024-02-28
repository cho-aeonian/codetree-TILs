#include <stdio.h>

int main() {
    int cm, kg;
    scanf("%d %d",&cm,&kg);
    
    int bmi = kg * 100 * 100 / (cm*cm);

    printf("%d\n",bmi);
    if(bmi>=25) {
        printf("Obesity");
    }

    return 0;
}