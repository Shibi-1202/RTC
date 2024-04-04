#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("Enter Number one:");
    scanf("%d",&num1);
    printf("Enter Number two:");
    scanf("%d",&num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("Number1:%d\nNumber2:%d",num1,num2);
    return 0;
}
