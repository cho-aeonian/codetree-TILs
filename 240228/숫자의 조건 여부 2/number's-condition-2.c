#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a==5) {
        printf("A");
    }
    else if(a%2==0) {
        printf("B");
    }
    else {
        printf("");
    }
    return 0;
}