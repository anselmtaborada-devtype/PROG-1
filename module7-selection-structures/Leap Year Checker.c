#include <stdio.h>

int findyear(int year){
   if((year % 4 == 0 && year % 100 != 0 || year % 400 == 0)){
    printf(" '%d' IS a leap year.\n");
    }
    else{
        printf("'%d' is NOT a leap year.\n");
    } 
    return year;
}
int main(){

    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    year = findyear(year);
    return 0;
}
