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

// #include <stdio.h>

// int main() {
//     int c;
//     while((c = getchar()) != EOF) {
//         printf("%d\n", (getchar() != EOF));
//         putchar(c);
//     }
// }





/* Version 3, exercise 1.7(write a program to print EOF value)*/

// #include <stdio.h>

// int main() {
//     printf("-------------------\n");
//     printf("%d\n", EOF);
//     printf("-------------------\n");
// }


/*---------------------------------------------------------------------------------*/


/* Version 1, character counting*/

// #include <stdio.h>

// #include <stdbool.h>


// int main() {
//     long nc;
//     nc = 0;
//     while(getchar() != EOF) {
//         ++nc;
//         printf("%ld\n", nc);
//     }
// }

// int main() {
//     long nc;
//     nc = 0;
//     while(true) {
//         ++nc;
//         printf("%ld\n", nc);
//     }
// }





/* Vesion 2, Character count */

// #include <stdio.h>

// int main() {
//     double nc;

//     for(nc = 0; getchar() != EOF; ++nc) {
//         printf("%.0f\n", nc);
//     }
// }



/* Version 3, Line counting */