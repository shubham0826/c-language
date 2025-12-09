#include <stdio.h>
int main(){
     char character;
  printf("enter character:");
  scanf("%c",&character);
    switch (character) 
    {
        case 'r':
         printf("red");
         break;
        case 'b':
         printf("blue");
         break;
         case 'g':
         printf("green");
         break;
         case 'p':
        printf("pink");
        break;
        case 'o':
        printf("orange");
        break;
        default:
        printf("invalid");
        break;
        
    }
    return 0;

    }




