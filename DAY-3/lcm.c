#include<stdio.h>
int gcd(int a, int b) {
    while(b!=0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
    int num1,num2,hcf,lcm;
    printf("enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    hcf = gcd(num1,num2);
    lcm=(num1*num2)/hcf;
    printf("lcm of %d and %d is: %d",num1,num2,lcm);
    return 0;   
}