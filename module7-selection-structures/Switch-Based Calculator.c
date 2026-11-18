#include <stdio.h>

int findresult(int c, int d){
    switch(operation){

    case '*':
    printf("Result: %d * %d = %d\n" , c, d, c * d );
    break ;

    case '-':
    printf("Result: %d - %d = %d\n" , c, d, c - d );
    break ;

    case '+':
    printf("Result: %d + %d = %d\n" , c, d, c + d );
    break ;

    case '/':
        if(d == 0){
        printf("value must not be Zero.\n");
    }
    else if(c < d){
        printf(" Divisor must not be bigger than dividend.\n");
    }
    else{
    printf("Result: %d / %d = %d\n" , c, d, c / d );
    }
    break ;

    default:
     if(operation != '*','-','+','/'){
        printf("Error: ' %c' is an INVALID! operation.\n", operation);
        break ;
     }
}
    return 
}
int main(){

    char operation;
    int c, d;
   

    printf("Enter your first number: ");
    scanf("%d", &c);
    printf("Enter your second number: ");
    scanf("%d", &d);
    printf("Choose your operation (*, -, +, /): ");
    scanf(" %c", &operation);


return 0;
}
