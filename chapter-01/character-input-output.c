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

// #include <stdio.h>

// /*count lines in input*/

// int main() {
//     int c, nl;

//     nl = 0;

//     while((c = getchar()) != EOF) {
//         if(c == '\n') {
//             ++nl;
//             printf("%d", '\n');
//         }
//         // printf("%d\n", nl);
//     }

//     return 0;
// }





/* Exercise 1-8 Write a program to count blanks, tabs, and newlines. */

// #include <stdio.h>
// #include <stdbool.h>

// int main() {
//     int input, blank, tab, newline, other;
    
//     blank = 0;
//     tab = 0;
//     newline = 0;
//     other = 0;
    
//     while(true) {

//         while((input = getchar()) != '\n') {
//             if(input == ' ') {
//                 blank++;
//             }

//             if(input == '\t') {
//                 tab++;
//             }

//             else {
//                 other++;
//             }
//         }

//         if(input == '\n') {
//                 newline++;
//             }

//         printf("count blank = %d, count tab = %d, count newline = %d, counth other = %d\n", blank, tab, newline, other);
//     }
    
//     return 0;
// }




/* Exercise 1-9 
        Write a program to copy its input to its output, replacing each string of one or
            more blanks by a single blank. */


// #include <stdio.h>

// int main() {

//     int input, previous;

//     previous = 0;

//     while((input = getchar()) != EOF){
//         if(previous == ' ' && input == ' ') {
//             continue;
//         }

//         putchar(input);

//         previous = input;
//     }


//     return 0;
// }





/* Exercise 1-9, 
        Write a program to copy its input to its output, replacing each tab by \t, each
            backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
                unambiguous way. */


#include <stdio.h>

int main() {

    int input;

    while((input = getchar()) != EOF) {
        if(input == '\t') {
            printf("\\t");
            continue;
        }
        if(input == '\b') {
            printf("\\b");
            continue;
        }
        if(input == '\\') {
            printf("\\");
            continue;
        }

        putchar(input);
    }

    return 0;
}


