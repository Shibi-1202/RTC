#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    if (a==b){
        printf("%d and %d are equal",a,b);
    }
    return 0;
}
