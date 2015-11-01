#include <stdio.h>
#include <cs50.h>
#include <string.h>

void reverse(char*);

int main(void)
{
    printf("\nEnter string to reverse: ");
    char* input = GetString();
    printf("\n\nReversing string \"%s\"...\n", input);
    reverse(input);
    printf(" Reversed string: %s \n\n", input);
}

void reverse(char* str)
{
    int len = strlen(str);
    for (int i = 0, j = i + len - 1; i < j; i++, j--)
    {
        char temp = *(str + i);
        *(str + i) = *(str + j);
        *(str + j) = temp;
    }
}
