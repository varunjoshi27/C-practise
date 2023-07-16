#include<stdio.h>

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    if(n%2==0){
        printf("The given number is Even\n");
    }
    else{
        printf("The given number is odd\n");
    }

    return 0;
}