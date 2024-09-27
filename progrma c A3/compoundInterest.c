#include<stdio.h>
#include<math.h>
int main(){
double p=1200, time=2,r=5.4;
double Amount = p*((pow((1+r/100),time)));
double ci = Amount-p;
printf("The value of CI IS: %lf",ci);
}