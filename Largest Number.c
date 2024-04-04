#include<stdio.h>
int main()
{
    int a1,a2,a3;
    printf("Enter First Number:");
    scanf("%d",&a1);
    printf("Enter Second Number :");
    scanf("%d",&a2);
    printf("Enter Third Number :");
    scanf("%d",&a3);
    if (a1>a2){
        if (a1>a3){
            printf("%d Is The Largest Number",a1);
        }
        else{
            printf("%d Is The Largest Number",a3);
        }
    }
    else{
        if (a2>a3){
            printf("%d Is The Largest Number",a2);
        }
        else{
            printf("%d Is The Largest Number",a3);
        }
    }
    return 0;
}
