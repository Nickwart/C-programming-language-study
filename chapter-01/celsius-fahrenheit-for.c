/* Version 1 */

// #include <stdio.h>

/* print Fahrenheit-Celsius table using for statement */

// int main() {
//     int fahrenheit = 0;

//     for (fahrenheit = fahrenheit; fahrenheit <= 300; fahrenheit = fahrenheit + 20) {
//         printf("%3d %6.1f\n", fahrenheit, (5.0/9.0) * (fahrenheit-32));
//     }

//     return 0;
// }




/* Version 2, 300 ==> 0 */

// #include <stdio.h>

/* print Fahrenheit-Celsius table using for statement */

// int main() {
//     int fahrenheit = 300;

//     for (fahrenheit = fahrenheit; fahrenheit >= 0; fahrenheit = fahrenheit - 20) {
//         printf("%3d %6.1fВ\n", fahrenheit, (5.0/9.0) * (fahrenheit-32));
//     }

//     return 0;
// }




#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    int fahrenheit;

    for (fahrenheit=LOWER; fahrenheit <= UPPER; fahrenheit = fahrenheit + STEP) {
        printf("%3d %6.1f\n", fahrenheit, (5.0 / 9.0) * (fahrenheit-32));
    }  

    return 0;
}
