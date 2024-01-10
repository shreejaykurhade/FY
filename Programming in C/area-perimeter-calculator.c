#include<stdio.h>
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
 {
     float t_side;
     printf("Enter the side of equilateral triangle : ");
     scanf("%f",&t_side);
     printf("The perimeter of triangle is : %f ",3*t_side);
     printf("\nThe area of triangle is : %f ",(root3*t_side)/4);
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
