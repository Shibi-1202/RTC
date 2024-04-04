#include<stdio.h>
int main()
{
    int es=0,os=0,i=1,n;
    printf("Enter the range to sum :");
    scanf("%d",&n);
    do {
        if (i%2==0){
            es = es + i;
            i++;
        }
        else{
            os = os + i;
            i++;
        }
    }while(i<=n);
    printf("The sum of even numbers are:%d\n",es);
    printf("The sum of odd numbers are:%d\n",os);
    return 0;
}
