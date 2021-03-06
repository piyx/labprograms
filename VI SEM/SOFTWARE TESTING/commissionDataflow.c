#include <stdio.h>

int main()
{
    int locks, stocks, barrels;
    float commission;

    float lockPrice = 45.0;
    float stockPrice = 30.0;
    float barrelPrice = 25.0;

    int locksSold = 0;
    int stocksSold = 0;
    int barrelsSold = 0;

    int tlocks = 0;
    int tstocks = 0;
    int tbarrels = 0;

    while (1)
    {
        printf("Enter the number of locks (Type -1 to exit): ");
        scanf("%d", &locks);
        if (locks == -1)
            break;

        printf("Enter the number of stocks and number of barrels: ");
        scanf("%d%d", &stocks, &barrels);
        tlocks += locks;
        tstocks += stocks;
        tbarrels += barrels;
    }

    printf("Total locks sold: %d\n", tlocks);
    printf("Total stocks sold: %d\n", tstocks);
    printf("Total barrels sold: %d\n", tbarrels);

    float lockSales = lockPrice * tlocks;
    float stockSales = stockPrice * tstocks;
    float barrelSales = barrelPrice * tbarrels;
    float totalSales = lockSales + stockSales + barrelSales;

    if (totalSales > 1800.0)
    {
        commission = (0.10 * 1000.0) + (0.15 * 800) + (0.20 * (totalSales - 1800));
    }
    else if (totalSales > 1000.0)
    {
        commission = (0.10 * 1000) + (0.15 * (totalSales - 1000));
    }
    else
    {
        commission = 0.10 * totalSales;
    }

    printf("Total sales: %f\n", totalSales);
    printf("Total commission: %f\n", commission);
    return 0;
}