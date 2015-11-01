#include <stdio.h>
#include <cs50.h>
#include <string.h>

void reverse(char*);

int main(void)
{
    printf("Enter string to reverse: ");
    char* input = GetString();
    printf("%s \n", input);
    int len = strlen(input);
    printf("%i \n", len);

    reverse(input);
    printf("%s \n", input);
}

void reverse(char* str)
{
    str+=8;
    *str = 'x';
    printf("ptr: %p string: %s char[0]: %c\n", &str, str, *str);
}
