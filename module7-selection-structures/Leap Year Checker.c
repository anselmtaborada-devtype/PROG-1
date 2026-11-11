#include <stdio.h>

int main(){

    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0 || year % 400 == 0)){
    printf(" '%d' IS a leap year.\n");
    }
    else{
        printf("'%d' is NOT a leap year.\n");
    }
    return 0;
}
