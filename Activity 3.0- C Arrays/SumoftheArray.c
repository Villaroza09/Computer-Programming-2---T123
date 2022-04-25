#include<stdio.h>

int main()
{
    int arr[10],n,i,sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter Element:\n");
    for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
    for(i=0;i<n;i++)
{
    sum = sum + arr[i];
}

    printf("Sum of all array elements=%d\n", sum);

    return 0;
}
