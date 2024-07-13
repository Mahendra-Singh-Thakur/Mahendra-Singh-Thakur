#include<stdio.h>

int main()
{
    int a,b,result;
    a=10;
    b=5;
    result = a & b;
    printf("Bitwise AND operator                = %d\n\n",result);  

    result = a | b;
    printf("Bitwise OR operator                 = %d\n\n",result); 

    result = a ^ b;
    printf("Bitwise XOR operator                = %d\n\n",result); 

    result = ~a;
    printf("Bitwise NOT of (a) operator         = %d\n\n",result); 

    result = ~b;
    printf("Bitwise NOT of (b) operator         = %d\n\n",result); 

    result = a << 2;
    printf("Bitwise LEFT SHIFT of (a)operator   = %d\n\n",result); 

    result = b << 2;
    printf("Bitwise LEFT SHIFT of (b)operator   = %d\n\n",result); 

    result = a >> 2;
    printf("Bitwise RIGHT SHIFT of (a)operator  = %d\n\n",result);

    result = b >> 2;
    printf("Bitwise RIGHT SHIFT of (b)operator  = %d\n\n",result);  
    return 0;
}