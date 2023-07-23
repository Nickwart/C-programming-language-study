/* Version 1 
copy input to output */

// #include <stdio.h>

// int main() {
//     int c;
//     c = getchar();
//     while (c != EOF) {
//         putchar(c);
//         c = getchar();
//     }
//     return 0;
// }





/* Version 2
assigment in while loop*/

#include <stdio.h>

int main() {
    int c;
    while((c = getchar()) != EOF) {
        putchar(c);
    }
}

