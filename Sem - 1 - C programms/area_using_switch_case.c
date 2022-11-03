#include<stdio.h>
#include<math.h>

int main(){
   int choice;
   printf("Enter\n1 for finding area of Square\n2 for finding area of Circle\n3 for finding area of Rectangle\n");
   scanf("%d",&choice);
   switch(choice) {
      case 1: {
         float side,area;
         printf("Enter Sides of Square\n");
         scanf("%f",&side);
         area=(float)side*side;
         printf("Area of Square is %f\n",area);
         break;
      }
      case 2: {
         float radius,area;
         printf("Enter Radius of Circle\n");
         scanf("%f",&radius);
         area=(float)3.14159*radius*radius;
         printf("Area of Circle %f\n",area);
         break;
      }
      case 3: {
         float len,breadth,area;
         printf("Enter Length and Breadth of Rectangle\n");
         scanf("%f %f",&len,&breadth);
         area=(float)len*breadth;
         printf("Area of Rectangle is %f\n",area);
         break;
      }
      default: {
         printf("Invalid Choice\n");
         break;
      }
   }
}