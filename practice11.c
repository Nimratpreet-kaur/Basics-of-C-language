#include <stdio.h>
int main()
{
    // to check if character is upper cased or lower cased
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("LOWER CASED CHARACTER");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("UPPER CASED CHARACTER");
    }
    else
    {
        printf("NOT AN ENGLISH ALPHABET");
    }
    return 0;
}