#include<stdio.h>
int main()
{
    char str[10];
    int len = 0;
    printf("Enter a string : ");
    scanf("%s", str);
    char *text=str;
    while(*text!= '\0')
    {
        text++;
        len++;
    }
    printf("\nThe length of the string is : %d", len);
    return 0;
}
