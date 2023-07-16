#include<stdio.h>

int main(){

    int day;

    printf("Enter the day (1-7)\n");
    scanf("%d",&day);

    switch(day){
        case 1:
        printf("Monday\n");
        break;

        case 2:
        printf("Tuesday\n");
        break;

        case 3:
        printf("Wednesday\n");
        break;

        case 4:
        printf("Thursday\n");

        case 5:
        printf("Friday\n");
        break;

        case 6:
        printf("Saturday\n");

        case 7:
        printf("Sunday\n");
    }

    return 0;
}