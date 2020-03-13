#include <stdio.h>
int main()
         { 
          
            float principle,time,rate,SI;
            
            /* Input principle, time and rate */
            printf("Enter the principle amount: ");
            scanf("%f",&principle);
         
            printf("Enter time");
            scanf("%f",&time);
         
            printf("Enter rate");
            scanf("%f",&rate);
         
            /* Calculate simple interest */ 
            SI=(principle*time*rate) / 100;
         
            /* Print the resultant value of SI */
            printf("Simple interest=%f", SI);
         
            return 0;
         
          }
           
           
           
