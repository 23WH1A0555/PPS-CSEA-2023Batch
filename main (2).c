/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//sum of multiples of 3&5 upto n
#include <stdio.h>

int main()
{
    int n,num,sum=0;
    printf("enter range: ");
    scanf("%d",&n);
    for(num=1; num<=n; num++){
        if(num%3 == 0 || num%5 == 0){
        //printf("%d ",num);
        
        sum = sum + num;
        }
       
    }
     printf("sum=%d",sum);
   
    return 0;
}
