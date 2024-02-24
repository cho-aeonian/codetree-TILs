#include <stdio.h>
#include <math.h>

int main() {
    double feet, cm;
    scanf("%lf", &feet);
    
    cm = feet * 30.48;
    cm = round(cm * 10) / 10.0;
    
    printf("%.1f",cm);
    
    return 0;
}