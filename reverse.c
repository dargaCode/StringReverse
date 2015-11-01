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
    int len = strlen(str);
    for (int i = 0, j = i + len - 1; i < j; i++, j--)
    {

        printf("i: %i str[i]: %c j: %i str[j]: %c \n",
            i, *(str+i), j, *(str+j));
    }

    *str = 'x';
    printf("ptr: %p string: %s char[0]: %c\n", &str, str, *str);
}
