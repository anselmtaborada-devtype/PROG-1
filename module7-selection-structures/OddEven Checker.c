include <stdio.h>

int main(){

    int number;

    printf("Please Enter a NUMBER: ");
    scanf("%d", &number);

    if( number % 2 == 0){
        printf("'%d' is EVEN.\n",number);
    }
    else{
        printf("'%d' is ODD.\n",number);
    }
return 0;
}
