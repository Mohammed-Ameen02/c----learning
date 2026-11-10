#include <stdio.h>
int main()
{
    int arr[100], num, i, sum = 0;

    printf("Enter the size of num elements: ");
    scanf("%d", &num);

    printf("Enter %d values into array:\n", num);

    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum of array elements = %d", sum);
    return 0;
}
