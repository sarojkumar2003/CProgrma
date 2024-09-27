#include<stdio.h>
int main(){
    int a=5, b=10;
    a= a+b;
    b=a-b;
    a=a-b;
    printf("Value of a is: %d\n",a);
    printf("Value oif b is: %d",b);
}