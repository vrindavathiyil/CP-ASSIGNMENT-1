#include <stdio.h>
#include <math.h>
void main()
      
      { 
          int ch;
          float a,r,h,x,y,z,pi=3.14;
          
          printf("\n Enter the choices:\n1 cube,\n2 cylinder,\n3 cuboid,\n4 cone,\n5 sphere");
          scanf("%d",&ch);
          
          
          switch(ch)
                   
                  { 
                    
                      case1:
                      printf("Enter the side length of cube");
                      scanf("%f",%a);
                      printf("\n surface area=%f \n volume=%f",6*a*a,a*a*a);
                      break;
                      
                      
                      
                     case2:
                     printf("\n Enter the radius of base and height of cylinder: ');
                     scanf("%f%f",&r,&h);
                     printf("\n surface area=%f \n volume%f",2*pi*r*r+pi*r*2*h,pi*r*r*h);
                     break;
                     
                     
                     case3:
                     printf("\n Enter the lengths of 3 sides of cuboid: ");
                     scanf("%f%f%f,&x,&y,&z0;
                     printf("\n surface area=%f \n volume=%f",2*x*y+2*x*z+2*y*z,x*y*z);
                     break;
                     
                     
                     
                     case4:
                     printf("\n Enter the radius of base and height of cone: ");
                     scanf("%f%f,&r,&h);
                     printf("\n surface area=%f \n volume=%f",pi*r*r+2*pi*r*r*sqrt(h*h+r*r),1/3*3.14*r*rh);
                     break;
                     
                     
                     case5:
                     printf("\n Enter the radius of sphere");
                     scanf("%f",&r);
                     printf("\n surface area=%f \n volume=%f", 4*pi*r*r,  4/3*pi*r*r*r);
                     break;
                     
                     default:
                     printf("\n invalid choice");
                     break;
                     
               }
               
               
      }
                  
                     
                     
                     
                     
          
         
