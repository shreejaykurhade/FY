#include<stdio.h>
main()
{
   int marks;
   printf("Enter your marks : ");
   scanf("%d",&marks);
   marks=marks/10;
   switch (marks)
       {
           case 9:
               printf("A grade");
               break;
            case 8:
               printf("B grade");
               break;
            case 7:
               printf("C grade");
               break;
            case 6:
               printf("D grade");
               break;
            case 5:
               printf("E grade");
               break;
            default :
                printf("F grade");
                break;
        }

}
