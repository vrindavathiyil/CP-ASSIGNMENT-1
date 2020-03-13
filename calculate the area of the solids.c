   /* To calculate the area of triangle,rhombus,parallelogram,trapezium */

#include<stdio.h>
void main()
        
      {
      
           int ch;
           float a,b,h,p1,p2,x,y,c,d
           
           
           printf("\n Enter the choices:\n1 Triangle, \n2 Trapezium, \n3 Rhombus, \n4parallelogram\n");
           scanf("%d",&ch);
           
           
           switch(ch)
           
                 { 
                  
                  case1:
                  printf("\n Enter the height and length of the triangle: ");
                  scanf("%f%f",&a,&b);
                  printf("\n Area of triangle = %f", a*b);
                  break;
                  
                  
                  case2:
                  printf("\n Enter the lengths of parallel sides and height of the trapezium: ");
                  scanf("%f%f%f",&P1,&P2,&h);
                  printf("\n Area of trapezium =%f",(p1+p2)*h/2);
                  break:
                  
                  
                  case3:
                  printf("Enter the lengths of diagonal of the rhombus: ");
                  scanf("%f%f",&x,&y);
                  printf("\n Area of rhombus=%f",x*y/2);
                  break;
                  
                  
                  case4:
                  printf("\n Enter the length of base and height of the parallelogram: ");
                  scanf("%f%f",&c,&d);
                  printf("\n Area of parallelogram=%f",c*d);
                  break;
                  
                  
                  default:
                  printf("\n invalid choice ");
                  break;
                  
                  
                  
                }
                
                
                
                
         }
                  
                  
                 
                
                  
           
                  
          
           
           

