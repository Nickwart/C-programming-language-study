// #include <stdio.h>

// #define IN 1     /* inside a word */
// #define OUT 0    /* outside a word */

// /* count lines, words and characters in input */

// int main() {

//     int char_var, lines_count, words_count, chars_count, state;

//     state = OUT;
//     lines_count = words_count = chars_count = 0;

//     while((char_var = getchar()) != EOF) {
//         chars_count++;
//         if(char_var == '\n') {
//             lines_count++;
//         }
//         if(char_var == ' ' || char_var == '\n' || char_var == '\t') {
//             state = OUT;
//         }
//         else if(state == OUT) {
//             state = IN;
//             lines_count++;
//         }
//         printf("lines_count = %d, words_count = %d, chars_count = %d\n", lines_count, words_count, chars_count);
//     }

//     return 0;
// }





// #include <stdio.h>
// #define IN 1
// #define OUT 0

// /* inside a word */
// /* outside a word */
// /* count lines, words, and characters in input */
// int main() {
//     int c, nl, nw, nc, state;

//     state = OUT;
//     nl = nw = nc = 0;
//     while ((c = getchar()) != EOF) {
//         ++nc;
//         if (c == '\n')
//             ++nl;
//         if (c == ' ' || c == '\n' || c == '\t')
//             state = OUT;
//         else if (state == OUT) {
//             state = IN;
//             ++nw;
//         }
//         printf("%d %d %d\n", nl, nw, nc);
//     }
//     return 0;
// }




/* Exercise 1-12 
    Write a program that prints its input one word per line. */

#include <stdio.h>

int main() {

    int c, previous;

    while((c = getchar()) != EOF) {
        if((previous == ' ' || previous == '\t') && (c == ' ' || c == '\t')) {
            // printf("first if\n");
            continue;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            // printf("second if, before newline\n");
            printf("\n");
            // printf("second if, after newline\n");
            continue;
        }
        else {
            // printf("else\n");
            putchar(c);
        }

    }

    return 0;
}