#include<stdio.h>
int main(){
    int a, count=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    for ( ;a>0; a=a/2){
        if (a % 2 == 1)
        count++;
    }
    printf("Number of bits: %d", count);
    return 0;
}