#include <stdio.h>
int main()
      { 
        int num, i, sum=0;
        
        printf("Enter max values of series number: ");
        scanf("%d", &num);
        sum = (num * (num + 1) * (2 * (num + 2)) / 6;
        printf("Sum of 1^2+2^2+...+n^2: ");
        for (i=1 ;i <= num; i++)
           { 
              if (i != num)
              printf("%d^2 + ", i);
                
              else
              printf("%d^2 = %d ", i, sum);
              
              
            }
            
            return0;
        }
        
