//write a program to find how many digits are there in a integer and find the sum of the integers in c using while loop and integer .
#include <stdio.h>
void main() {
    int num, rem, sum = 0, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        num = num;
    }

    while (num > 0) {
        rem = num % 10; 
        sum += rem;     
        num /= 10;        
        count++;          
    }

    printf("Number of digits: %d\n", count);
    printf("Sum of digits: %d\n", sum);

}

