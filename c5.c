#include <stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    float avg;
    printf("Enter your subject marks :\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    sum = a+b+c+d+e;
    avg = sum/5.0;
    printf("Averaage =%.2f",avg);
    return 0;
}
