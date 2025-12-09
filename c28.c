#include <stdio.h>
int main(){
    char c;
    int age;
    printf("enter char 'I'or'i'if you are indian :");
    scanf("%c",&c);
    if(c=='I'||c=='i')
    {
        printf("great ! enter your age:");
        scanf("%d",&age);
       
        if(age>=18)
        {
            printf("you are eligible for voting");
        }    
        else
        {
            printf("you are not eligible for voting");

        } 
    }       
    else
        {
            printf("you are not indian");
        }
    
    return 0;
}