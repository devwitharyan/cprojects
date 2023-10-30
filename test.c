#include <stdio.h>

int main() {
    int numTerms=10, first = 0, second = 1, next, i;
//    printf("Enter the number of terms: ");
//    scanf("%d", &numTerms);
//    printf("Fibonacci Series: ");
    for (i = 1; i <= 10; i++) {
        printf("\n%d ", first);
        next = first + second;
        printf("\nnext:%d", next);
        first = second;
        printf("\nfirst:%d", first);
        second = next;
        printf("\nsecond:%d", second);
    }
    printf("\n");
}

