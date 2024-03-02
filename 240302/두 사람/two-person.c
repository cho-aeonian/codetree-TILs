#include <stdio.h>

int main() {
    int aage,bage;
    char asex, bsex;
    scanf("%d %c\n",&aage,&asex);
    scanf("%d %c",&bage,&bsex);

    if(aage >= 19 && asex == 'M' || bage >= 19 && bsex == 'W') {
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}