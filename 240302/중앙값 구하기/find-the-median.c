#include <stdio.h>

int main() {
    int a, b, c, mid;
    scanf("%d %d %d", &a, &b, &c);
    
    if ((a >= b && a <= c) || (a >= c && a <= b))
        mid = a;
    else if ((b >= a && b <= c) || (b >= c && b <= a))
        mid = b;
    else
        mid = c;
    
    printf("%d", mid);
    
    return 0;
}