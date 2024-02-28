#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    if(n>=3000) {
        printf("book");
    }
    else if (2900 <= n && n >=1000) {
        printf("mask");
    }
    else {
        printf("no");
    }
    return 0;
}