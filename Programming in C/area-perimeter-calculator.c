#include<stdio.h>
#include<math.h>
#define PI 3.1428571429
#define root3 1.73205080
int main()
{
 char shape;
 printf("Enter circle 'c' , triangle 't' , square 's'or rectangle 'r' : ");
 scanf("%c",&shape);
 if(shape=='c')
 {   float rad;
     printf("Enter the radius of circle : ");
     scanf("%f",&rad);
     printf("The perimeter of circle is : %f ",2*PI*rad);
     printf("\nThe area of circle is : %f",PI*rad*rad);
 }
 if (shape=='t')
 {   int num;
     double t_side,sameside,baseside;
     printf("Enter '1' for equilateral triangle, '2' for isosceles triangle, '3' for scalene triangle : ");
     scanf("%d",&num);
     if(num==1)
        {printf("Enter the side of equilateral triangle : ");
         scanf("%lf",&t_side);
         printf("The perimeter of triangle is : %lf ",3*t_side);
         printf("\nThe area of triangle is : %lf ",(root3*t_side)/4);
        }
    if(num==2)
        {printf("Enter the same side of isosceles triangle : ");
         scanf("%lf",&sameside);
         printf("Enter the base of isosceles triangle : ");
         scanf("%lf",&baseside);
         printf("The perimeter of triangle is : %lf ",(2*sameside)+baseside);
         printf("\nThe area of triangle is : %lf ",0.5*t_side*sqrt(((sameside*sameside)+(baseside*baseside))/4));
        }
    if(num==3)
        {printf("Enter the same sides of scalene triangle : ");
         scanf("%lf %lf %lf",&sameside,&t_side,&baseside);
         double s=(sameside+t_side+baseside)/2;
         double area = sqrt(s*(s-sameside)*(s-baseside)*(s-t_side));

         printf("The perimeter of triangle is : %lf ",baseside+sameside+t_side);
         printf("\nThe area of triangle is : %lf ",area);
        }
 }
 if (shape=='s')
 {
     float s_side;
     printf("Enter the side of square : ");
     scanf("%f",&s_side);
     printf("The perimeter of square is : %f",4*s_side);
     printf("\nThe area of square is : %f",s_side*s_side);
 }
 if (shape=='r')
 {
     float r_side1,r_side2;
     printf("Enter the sides of rectangle : ");
     scanf("%f %f",&r_side1,&r_side2);
     printf("The perimeter of rectangle is : %f",2*(r_side1+r_side2));
     printf("\nThe area of rectangle is : %f",(r_side1*r_side2));
 }
}
