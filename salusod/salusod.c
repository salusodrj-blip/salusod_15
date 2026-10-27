#include <stdio.h>

int main() {
    int customers, quantity;
    int totalApples = 0;
    int discountedCustomers = 0;
    float bill, totalSales = 0;

    printf("How many customers will buy apples? ");
    scanf("%d", &customers);

    for (int i = 1; i <= customers; i++) {
        printf("\nCustomer %d\n", i);
        printf("Enter quantity of apples: ");
        scanf("%d", &quantity);

        bill = quantity * 25;

        if (quantity >= 20) {
            bill = bill - (bill * 0.15);
            discountedCustomers++;
        }

        printf("Quantity: %d apples\n", quantity);
        printf("Total bill: PHP %.2f\n", bill);

        totalApples += quantity;
        totalSales += bill;
    }

    printf("\n===== SALES SUMMARY =====\n");
    printf("Total apples sold: %d\n", totalApples);
    printf("Total sales: PHP %.2f\n", totalSales);
    printf("Customers who received discounts: %d\n",
           discountedCustomers);

    return 0;
}