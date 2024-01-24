#include<stdio.h>
main()
{
  long long int num0=0,num1=1,num2=1,n,i=0,num3;

  printf("Enter the nth term you want : ");

  scanf("%lld",&n);
  printf("%lld ",num0);
  printf("%lld ",num1);
  printf("%lld ",num2);

  while(i<n)
  {
    num3=num1+num2;
    printf("%lld ",num3);

    num1=num2;
    num2=num3;

    i+=1;
  }

}
