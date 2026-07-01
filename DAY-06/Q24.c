#include<stdio.h>
int main(){
    int b, e, power=1;
    printf("enter the base");
    scanf("%d", &b);
    printf("enter the exponent");
    scanf("%d", &e);
    for (int i=0; i<e; i++){
        power = power * b;
    }
    printf("%d^%d=%d", b, e, power);
    return 0;
}