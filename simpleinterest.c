#include <stdio.h>
void main()
         { 
           float principle,time,rate,SI;
           printf("Enter the principle amount");
           scanf("%f",&principle);
           printf("Enter time");
           scanf("%f",&time);
           printf("Enter rate");
           scanf("%f",&rate);
           SI=(principle*time*rate)/100;
           printf("Simple interest=%f",SI);
          }
           
           
           
