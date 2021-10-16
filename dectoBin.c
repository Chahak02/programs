#include <stdio.h>
int dectoBin(int n)
{
    if(n==0)
    return 0;
    dectoBin(n/2);
    printf("%d",n%2);
}

int main() 
{
    int  num;
    printf("\n Enter the Number");
    scanf("%d",&num);
    dectoBin(num);
 return 0;
}

    


