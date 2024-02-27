#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    double c = a+b, d = a-b;
    printf("%.2f",c/d);
    return 0;
}