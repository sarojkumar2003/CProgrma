#include<stdio.h>
int main(){
 int a=10, b=11, c=5;
if (a>b && a>c)
{
    printf("A is Grater: %d",a);
}
if (b>a && b>c){
    printf("B is greater: %d",b);
}
if(c>a && c>b){
    printf("C is greater: %d",c);
}
if(a==b && b==c){
    printf("Number is same!!");
}

}