#include<stdio.h>

// Largest number between two numbers
int main(){
    int number1;
    int number2;

    printf("Enter first number: ");
    scanf("%d",&number1);

    printf("Enter second number: ");
    scanf("%d",&number2);

    if(number1>number2){
        printf("%d is largest number",number1);
    }else{
        printf("%d is largest number",number2);
    }
    return 0; 
};
