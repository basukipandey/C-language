#include <stdio.h>
void main()
{
    char alphabet, vowel, consonant;
    printf("enter the alphabet ");
    scanf("%c", &alphabet);
    int digit;
    printf("enter the digit");
    scanf("%d", &digit);
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'o' || alphabet == 'i' || alphabet == 'u')
    {
        printf("vowel");
    }
    else if (alphabet == 'b' || alphabet == 'c' || alphabet == 'd' || alphabet == 'f' || alphabet == 'g' || alphabet == 'h' || alphabet == 'j' || alphabet == 'k' || alphabet == 'l' || alphabet == 'm' || alphabet == 'n' || alphabet == 'p' || alphabet == 'q' || alphabet == 'r' || alphabet == 's' || alphabet == 't' || alphabet == 'v' || alphabet == 'x' || alphabet == 'y' || alphabet == 'z')
    {
        printf("consonant");
    }
    else if (digit == 1 || digit == 2 || digit == 3 || digit == 5 || digit == 6 || digit == 7 || digit == 8 || digit == 9 || digit == 0)
    {
        printf(" number ");
    }
    else
    {
        printf("invalid input");
    }
}