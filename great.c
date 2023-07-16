#include<stdio.h>

int main(){
 int n1,n2,n3;

 printf("Enter the first number\n");
 scanf("%d",&n1);

 printf("Enter Second number\n");
 scanf("%d",&n2);

 printf("Enter Third number\n");
 scanf("%d",&n3);

 
 if((n1>n2) && (n1>n3)){
    printf("The first number is greater than all the Given Three number that is %d\n",n1);
 }
  else if((n2>n1) && (n2>n3)){
    printf("The Second number is greater than all the Given Three number that is %d\n",n2);
  }
  else{
    printf("The Third  number is greater than all the Given Three number that is %d\n",n3); 
  }


  return 0;
}
