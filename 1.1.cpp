#include <stdio.h>
#include <stdlib.h>
void main()
{

    int length, neg1 = 0, neg2 = 0;
    printf("Enter the length of the arrays\n");
    scanf("%d", &length);
    int ar1[length], ar2[length], sum1 = 0, sum2 = 0;
    printf("Enter the elements of first array\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &ar1[i]);
        if (ar1[i] >= 0)
            sum1 = sum1 + ar1[i];
        if (ar1[i] == -1)
            neg1++;
    }
    printf("Enter the elements of Second array\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &ar2[i]);
        if (ar2[i] >= 0)
            sum2 = sum2 + ar2[i];
        if (ar2[i] == -1)
            neg2++;
    }
    if (neg1 > 0 && neg2 > 0)
    {
        printf("infinity\n");
    }
    else if (neg1 == 0 && neg2 == 0)
    {
        printf("%d", 0);
    }
    else if (neg1 == 1 || neg2 == 1)
    {
        printf("%d", 1);
    }
    else
    {
        int b = abs(sum1 - sum2 + 1);
        printf("%d", b);
    }
}

