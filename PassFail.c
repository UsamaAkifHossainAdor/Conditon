#include <stdio.h>
int main (){
    double num;
    printf("Enter Any Number : ");
    scanf("%lf",&num);

    if (num>=33 && num<=100)
    {
        printf("Pass");
        
    }
    else if (num>100)
    {
        printf("Out of Range");
    }
    
   
    else
    {
        printf("fail");
    }
    
    return 0;
}