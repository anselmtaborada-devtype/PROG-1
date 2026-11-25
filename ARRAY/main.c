#include <stdio.h>

int main(){

    int numberofWords= 10 ;
    char word[numberofWords];

    printf("ENTER YOUR WORD: ");
    scanf("%s", word);

    int len = 0 ;
    while (word[len] != '\0'){
        len ++;
    }

    printf("\nForward: ");
    for (int i = 0; i < len; i++) {
        printf("%c ", word[i]);
    }

    printf("\nReverse: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c ", word[i]);
    }

    int tail = len - 1;
    int palindrome = 1;
    for(int head = 0 ; head < len / 2 ; head ++){
        if (word[head] != word[tail]) {
        palindrome = 0;
        break;
    }
    tail--;
}

    if (palindrome){
        printf("\nPalindrome!!");
    } else {
        printf("\nNot_Palindrome!");
    }

return 0;

}
