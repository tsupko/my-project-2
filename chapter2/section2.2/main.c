//
// Created by Aleksandr Tsupko on 12.12.2020.
//

#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of arguments: %d\n", argc);

    if (argc == 3)
    {
        for (int i = 0; i < argc; i++) {
            printf("Command-line argument is: %s\n", argv[i]);
        }
    }
    else printf("Usage: ./main arg[0] arg[1]");

    return 0;
}
