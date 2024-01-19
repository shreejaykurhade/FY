#include<stdio.h>
main()
{
   int num1,num2,num3;
   printf("Enter 3 numbers : ");
   scanf("%d %d %d",&num1,&num2,&num3);
   (num1<num2)?((num1<num3)?printf("%d is smallest",num1):printf("%d is smallest",num3)):printf("%d is smallest",num2);
}
