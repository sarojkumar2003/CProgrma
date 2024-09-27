#include<stdio.h>
int main(){
    int  a=5, b=10, temp;
    temp=a;
    a=b;
    b=temp;
    printf("This is a value: %d\n",a);
    printf("This is b value: %d\n",b);
    
}