#include<stdio.h>
int main()
{
    int i,a,p;
    printf("Enter the table you want:");
    scanf("%d",&a);
    for (i=1;i<=10;i++){
        p=a*i;
        printf("\n%d X %d = %d",a,i,p);
    }
    return 0;
}
