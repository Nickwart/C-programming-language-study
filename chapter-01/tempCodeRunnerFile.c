#include <stdio.h>

/* (°F) = (Temperature in degrees Celsius (°C) * 9/5) + 32 */

int main() {
    
    float celsius, fahrenheit;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 10;

    celsius = lower;

    while(celsius <= upper) {
        fahrenheit = celsius * (9.0 / 5.0) + 32;
        printf("-----------------------------------------\n");
        printf("while celsius = %.0f, fahrenheit = %.2f\n", celsius, fahrenheit);
        celsius = celsius + step;
    }

    return 0;
}