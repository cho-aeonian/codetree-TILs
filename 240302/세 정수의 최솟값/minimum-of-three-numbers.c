#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int min = 0;
    if(a<=b && a<=c) {
        min=a;
    }
    else if (b<=a && b<=c) {
        min = b;
    }
    else {
        min = c;
    }
    printf("%d",min);
    return 0;
}