#include <stdio.h>

int main(){

int day;

    printf("Choose a number between (1-7): ");
    scanf(" %d",&day);

switch(day){

    case 1:
    printf("day 1 is Monday.\n");
    break;

    case 2:
    printf("day 2 is Monday.\n");
    break;

    case 3:
    printf("day 3 is Wednesday.\n");
    break;

    case 4:
    printf("day 4 is Thursday.\n");
    break;

    case 5:
    printf("day 5 is Friday.\n");
    break;

    case 6:
    printf("day 6 is Saturday.\n");
    break;

    case 7:
    printf("day 7 is Sunday.\n");
    break;

    default:
    printf("ERROR: '%d' please choose just between the givin");
}
    return 0;
}
