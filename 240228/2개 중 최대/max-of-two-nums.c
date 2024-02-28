#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    int maxnum = a>b ? a : b;

    printf("%d",maxnum);

    return 0;
}