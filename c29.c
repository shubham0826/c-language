#include <stdio.h>
int main(){
    int num;
    
    printf("enter any num:");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("even/n");
    }
    else
    {
        printf("odd/n");
    }
    if(num>0)
    {
        printf("positive");
    }
    else if(num>=0)
    {
        printf("zero");
    }
    else
    {
        printf("negative");
    }
    return 0;
    }
