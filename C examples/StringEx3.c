 #include <stdio.h>
 #include <string.h>

 const int TRUE = 1;
 const int FALSE = 0;

 int ispalin(char s[]) {
     int i;
     int len = strlen(s);
     i=0;
     while (i<len/2) {
         if (s[i] != s[len - 1 - i] ) {
             return FALSE;
         }
         i++;
     }
     return TRUE;
 }

 int main() {
     char s[20];

     printf("Enter some text");
     scanf("%s",s);
     if (ispalin(s) == TRUE) {
         printf("Given string is palindrome\n");
     } else{
         printf("Given strinng is not palindrome\n");
     }

     return 0;
 }