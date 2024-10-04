#include<stdio.h>
int main(){
    float temp;
    printf("Enter the Temp: ");
    scanf("%f",&temp);
    if (temp<=0)
    {
        printf("This is Freezing Temp: ");
    }
    else if (temp<=10)
    {
        printf("This is very cold Temp");
    }
    else if(temp<=20)
    {
        printf("This is cold Temp");
    }
    else if(temp<=30)
    {
        printf("This is Normal Temp");
    }
    else if(temp<=30)
    {
        printf("This is Hot Temp");
    }
    else if(temp>=40)
    {
        printf("This is Very Hot Temp");
    } 
    else
    {
        printf("provide the corrct temp");
    }
    
    return 0;
        
}
