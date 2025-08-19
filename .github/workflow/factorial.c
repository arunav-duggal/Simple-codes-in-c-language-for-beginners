#include <stdio.h>
int main()
{
    int a,i,prod=1;
    printf("input your number: ");
    scanf("%d",&a);
    for (i=1;i<a+1;i=i+1)
    {
        prod=prod*i;
    }
    printf("%d is the factorial", prod);
    return 0;
}
