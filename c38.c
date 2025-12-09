#include <stdio.h>
int main()
{
    char str[100];

    printf("enter name");

    // scanf("%s", str);

    fgets(str, sizeof(str), stdin);

    printf("the name is %s", str);

    return 0;
}
