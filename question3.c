#include <stdio.h>
int main()
{
    int CableNum;
    int CablePrice;

    printf("Number of cables: ");
    scanf("%d", &CableNum);

    printf("Pirce of One Cable: ");
    scanf("%d", &CablePrice);

    int TotalCost = CableNum*CablePrice;
    printf("The total cost is %d", TotalCost);

    return 0;
}