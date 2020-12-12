//
// Created by Aleksandr Tsupko on 12.12.2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    printf("Number of arguments: %d\n", argc);

    if (argc == 4) {
        for (int i = 0; i < argc; i++) {
            printf("Command-line argument is: %s\n", argv[i]);
        }

        // Алгоритм определения простоты числа, переданного аргументом argv[3]
        int number = atoi(argv[3]); // todo migrate from atoi() to strtol()
        if (number > 1) {
            printf("Testing for primality the number: %d\n", number);
            bool isPrime = true;
            for (int factor = 2; factor < number; factor++) {
                if (number % factor == 0) {
                    isPrime = false;
                    break;
                }
            }
            printf(isPrime ? "Number %d is prime\n" : "Number %d is not prime\n", number);
        } else {
            printf("Number 1 is neither prime nor composite\n");
        }
    } else {
        printf("Usage: ./main arg[1] arg[2] arg[3]\n");
    }

    return 0;
}
