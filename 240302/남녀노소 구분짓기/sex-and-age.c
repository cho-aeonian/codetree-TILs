#include <stdio.h>

int main() {
    int sex, age;
    scanf("%d\n%d",&sex,&age);
    if(sex == 0) {
        if(age >= 19) {
            printf("MAN");
        }
    }
    if(sex==1) {
        if(age >= 19) {
            printf("WOMAN");
        }
    }
    if(sex==0) {
        if(age < 19) {
            printf("BOY");
        }
    }
    if(sex==1) {
        if(age < 19) {
            printf("GIRL");
        }
    }
    return 0;
}