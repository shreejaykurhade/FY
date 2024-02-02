#include<stdio.h>
#include<string.h>

int main()
{
    char value;
    printf("Enter 'p' for palindrome , 'f' for fibonacci series , 'd' for pattern :  ");
    scanf("%c",&value);
    switch (value)
    {
    case 'p':
        {
            int i;
            char palin[100];
            printf("Enter a palindrome : ");
        scanf("%s",palin);
        int length= strlen(palin);
        int flag=0;
        for(i=0;i<(length/2);i++)
        {
            if(palin[i]==palin[length-1-i])
            {
                flag=0;
            }
            if(palin[i]!=palin[length-i-1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("ITs a palindorme");
        }
        else
        {
            printf("Its not a palindrome");
        }
            break;}
    case 'f':
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
        printf("\n The ratio of num3 and num2 is : %f \n",(float)num3/(float)num2);

        num1=num2;
        num2=num3;

        i+=1;
        }


        break;}
    case 'd':
        {
            int  i,j,n;
            printf("Enter the number of rows : ");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                for(j=0;j<i;j++)
                {
                    printf("%d ",i);
                }
                printf("\n");
            }
            break;}

    default :
        printf("Wrong entry");


    }

}
