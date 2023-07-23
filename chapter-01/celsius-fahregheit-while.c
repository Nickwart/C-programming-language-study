/*Version 1*/

// #include <stdio.h>

// /*print Fahrenheit-Celsius table
//     for fahr = 0, 20, ..., 300 */

// int main() {
//     int fahr, celsius;
//     int lower, upper, step;
    
//     lower = 0;
//     upper = 300;
//     step = 20;

//     fahr = lower;
//     while (fahr <= upper){
//         celsius = 5 * (fahr-32) / 9;
//         printf("%d\t%d\n", fahr, celsius);
//         fahr = fahr + step;
//     }

// }





/*Version 2*/

// #include <stdio.h>

// /*print Fahrenheit-Celsius table
//     for fahr = 0, 20, ..., 300 */

// int main() {
    
//     int celsius = 0;
//     int fahr = 0;
    
//     int lower = 0;
//     int upper = 300;
//     int step = 20;

//     while (fahr <= upper) {
//         celsius = 5 * (fahr - 32) /9;
//         printf("%3d %6d \n", celsius, fahr);
//         fahr = fahr + step;
//     }

//     return 0;
// }





/*Version 3, float*/

// #include <stdio.h>

/*print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

// int main() {
//     float fahr, celsius;
//     float lower, upper, step;

//     // printf("%3.2f\n", fahr);

//     lower = 0;         /* lower limits of temperature scale */
//     upper = 300;       /* upper limit */
//     step = 20;         /* step size */

//     fahr = lower;

//     // printf("%f\n", 5.0/9.0);
//     // printf("%d\n", 5/9);
    
//     while (fahr <= upper) 
//     {
//         celsius = (5.0 / 9.0) * (fahr-32.0);
//         printf("-------------------------------------------------\n");
//         printf("%3.0f %6.1f\n", fahr, celsius);
//         fahr = fahr + step;
//     }

    // return 0;
// }





/* Exersise 1-4 Celsius to Fahrenheit */

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




