#include<stdio.h>
main()
{
  int num1=1,num2=1,n,i=0,num3;

  printf("Enter the nth term you want : ");

  scanf("%d",&n);

  printf("%d ",num1);
  printf("%d ",num2);

  while(i<n)
  {
    num3=num1+num2;
    printf("%d ",num3);

    num1=num2;
    num2=num3;

    i+=1;
  }

}
