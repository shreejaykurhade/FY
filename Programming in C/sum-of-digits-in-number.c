#include<stdio.h>
#include<conio.h>
main()
{
    int num,sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    int number=num;
    while(num>0)
    {
        sum = sum + (num%10) ;
        num = num/10 ;
    }
    printf("The sum of digits of %d is %d",number,sum);
}
