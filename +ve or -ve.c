#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number to check:");
    scanf("%d",&a);
    if(a>0){
        printf("%d is +ve",a);
    }
    else if (a==0){
        printf("%d is not +ve or -ve",a);
    }
    else{
        printf("%d is -ve",a);
    }
    return 0;
}
