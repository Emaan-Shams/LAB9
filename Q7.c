#include <stdio.h>

float calculateRentalCost(int days, float kilometers);

int main() {
    int days;
    float kilometers;

    printf("Enter number of rental days: ");
    scanf("%d", &days);
    printf("Enter total kilometers driven: ");
    scanf("%f", &kilometers);

    float totalCost = calculateRentalCost(days, kilometers);
    printf("Final rental cost: $%.2f\n", totalCost);

    return 0;
}

float calculateRentalCost(int days, float kilometers) {
    float baseRate = 40.0;
    float baseCost = days * baseRate;

    float allowedKm = days * 100.0;
    float extraKm = (kilometers > allowedKm) ? (kilometers - allowedKm) : 0.0;
    float extraCharge = extraKm * 0.25;

    float total = baseCost + extraCharge;

    if (days >= 7) {
        total *= 0.90;
    }

    return total;
}

