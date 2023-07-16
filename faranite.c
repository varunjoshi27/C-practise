#include<stdio.h>

int main(){

    float a;

    printf("Enter the temperatue in faranite\n");
    scanf("%f",&a);

    printf("The temperature in celius is \n");
    printf("%f\n",5/9*(a-32));

    return 0;
}