#include<stdio.h>
int main()
{
    int a,n,s=0;
    printf("Enter the range to find the sum of :");
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        s+=a;
        printf("%d",a);
    }
    printf("\nThe sum of N natural numbers are:%d",s);
}
