#include<stdio.h>
int main (){
    int d, rem, i;
    int binary[32];
    printf("Enter a decimal number: ");
    scanf("%d", &d);
    for(i=0; d>0; d=d/2, i++){
        rem = d % 2;
        binary[i] = rem;
    }
    printf("Binary representation: ");
    for(int j = i - 1; j>=0; j--){
        printf("%d", binary[j]);
    }
    return 0;
}