#include <stdio.h>
int rev();
int main(){
    printf("Enter a sentence: ");
    rev();
}
int rev(){
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        rev();
        printf("%c", c);
    }
}
