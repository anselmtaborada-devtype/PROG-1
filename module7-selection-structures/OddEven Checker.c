#include <stdio.h>

int oddeven(int number){
    if( number % 2 == 0){
        printf("'%d' is EVEN.\n",number);
    }
    else{
        printf("'%d' is ODD.\n",number);
    }
    return number;
}

int main(){

    int number;

    printf("Please Enter a NUMBER: ");
    scanf("%d", &number);

    number = oddeven(number);
   
return 0;
}
