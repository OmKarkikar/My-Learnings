#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a single character =");
    ch = getchar();
    printf("\n ascii code of entered character is %d\n", ch);
    printf("\n entered character is %c\n", ch);

    if (isalpha(ch)) {
        printf("entered character is an alphabet\n");
    }

    if (isdigit(ch)) {
        printf("entered character is didgit\n");
    }

    return 0;
}