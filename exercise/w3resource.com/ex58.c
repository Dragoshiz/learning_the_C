#include <stdio.h>

int main()
{
    double a,b,c,d, max, min;
    printf("Input four numbers: \n");
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

    if(a >=e b && a >= c && a >=d){
        max=a;
    }
    else if(b >= a && b >=c && b >= d){
        max=b;
    }
    else if(c >= a && c >= b && c >= d){
        max=c;
    }
    else{
        max=d;
    }
    if (a <= b && a <= c && a <= d)
    {
        min=a;
    }
    else if (b <= a && b <= c && b <= d)
    {
        min=b;
    }
    else if (c <= a && c <= b && c <= d)
    {
        min=c;
    }
    else
    {
        min=d;
    }
    printf("Difference is : %0.4lf", max - min);
        return 0;
    }
