#include <stdio.h>

int main() {
    int a1, a2;
    int b1, b2;
    scanf("%d %d\n",&a1,&a2);
    scanf("%d %d",&b1,&b2);
    if(a1>b1) {
        printf("A");
    }
    else if(b1>a1) {
        printf("B");
    }

    else if(a1==b1 && a2>b2) {
        printf("A");
    }
    else if(a1==b1 && b2>a2) {
        printf("B");
    }

    return 0;
}