#include<stdio.h>  
int main()  
{  
int num, rem, sum = 0, i;  
printf("Enter a number\n");  
scanf("%d", &num);      
for(i = 1; i < num; i++)  
    {
    rem = num % i;  
    if (rem == 0) 
        {  
            sum = sum + i;  
        }  
    }  
if (sum == num)  
    {
        printf("Perfect Number"); 
    }
    else if(sum>num)
    {
        printf("abundent number ");
    }   
      else  
      {
       printf("deficient Number");  
      }
return 0;
}