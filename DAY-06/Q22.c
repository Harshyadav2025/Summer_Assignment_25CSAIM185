#include<stdio.h>
int main(){
    int b, d=0, rem, i=0;
    printf("Enter a binary number: ");
    scanf("%d", &b);
    while(b>0){
        rem = b % 10;
        d = d + rem * (1 << i);
        b = b / 10;
        i++;
    }
    printf("Decimal representation: %d", d);
    return 0;
}