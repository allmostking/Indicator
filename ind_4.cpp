#include <stdio.h>

main() 
{

    char str[100], * q;
    int count;

    printf("Enter any string: ");
    gets(str);

    q = str;

    count = 0;

    while ( *q != '\0') 
    {
        count++;
        q++;
    }

    printf("The length of the string is: %d", count);
}
