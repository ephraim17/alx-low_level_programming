#include <stdio.h>
/**
 * main - alphabet in lowercase, followed by a newline.
 *
 * Always return(0)
 */

int main (void) {
   char ch;

   for(ch = 'a' ; ch <= 'z' ; ch++) 
   {
      putchar(ch);
   }
   putchar('\n');
   
   return(0);
}

