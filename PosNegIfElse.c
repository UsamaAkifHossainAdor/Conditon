#include <stdio.h>
int main() {
    int num;
    printf("Enter Any Number : ");
    scanf("%d",&num);

    if (num>0)
    {
        printf("Positive = %d",num);
    }

    else if (num<0)
    {
        printf("Negative = %d",num);
    }

    else
    {
        printf("Zero = %d",num);
    }

    return 0;
    
    
}