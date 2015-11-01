#include <stdio.h>
#include <cs50.h>
#include <string.h>

void reverse(char*);

int main(void)
{
    printf("Enter string to reverse: ");
    char* input = GetString();
    printf("Reversing string \"%s\"...\n", input);

    reverse(input);
    printf("Reversed string: %s \n", input);
}

void reverse(char* str)
{
    int len = strlen(str);
    for (int i = 0, j = i + len - 1; i < j; i++, j--)
    {
        printf("i: %i str[i]: %c j: %i str[j]: %c \n",
            i, *(str+i), j, *(str+j));
        char temp = *(str + i);
        *(str + i) = *(str + j);
        *(str + j) = temp;
    }
}
