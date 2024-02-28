#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n>=3000) {
        printf("book");
    }
    else if (n<=2900 && n>=1000) {
        printf("mask");
    }
    else if (1000>n && n>=500) {
        printf("pen");
    }
    else {
        printf("no");
    }
    return 0;
}