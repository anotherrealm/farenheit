#include <stdio.h>

int main() {
    float start, end, increment;

    printf("Enter the starting temperature in Fahrenheit: ");
    scanf("%f", &start);

    printf("Enter the ending temperature in Fahrenheit: ");
    scanf("%f", &end);

    printf("Enter the temperature increment: ");
    scanf("%f", &increment);

    printf("Fahrenheit to Celsius Conversion Table\n");
    printf("Fahrenheit   Celsius\n");

    while (start <= end) {
        float celsius = (start - 32.0) * 5.0 / 9.0;
        printf("%9.2f   %9.2f\n", start, celsius);
        start += increment;
    }

    return 0;
}
