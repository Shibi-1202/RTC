#include<stdio.h>
int main()
{
    char c;
    int up,lo;
    printf("Enter the character tou want to check :");
    scanf("%c",&c);

    up=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    lo=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');

    if (up||lo)
        printf("'%c' is a vowel",c);
    else
        printf("'%c' is not a vowel",c);
    return 0;
}
