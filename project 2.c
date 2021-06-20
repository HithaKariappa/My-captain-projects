#include <stdio.h>
int main()

{
    int a=20, b=10;
    printf("The numbers are a=20 and b=10\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The numbers after swapping are a=%d and b=%d\n",a,b);

}
