#include <stdio.h>
#include <stdlib.h>  // For atoi()
#include <string.h>  // For strlen()

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <input>\n", argv[0]);
        
    }

    char *input = argv[1];

    // Check if input is a number
    if (input[0] >= '0' && input[0] <= '9') {
        int num = atoi(input); // Convert to integer
        if (num == 1)
            printf("You entered number 1\n");
        else if (num == 2)
            printf("You entered number 2\n");
        else
            printf("You entered an unsupported number\n");
    }
    // Check if input is a single character
    else if (strlen(input) == 1) {
        if (input[0] == 'a')
            printf("You entered character 'a'\n");
        else if (input[0] == 'b')
            printf("You entered character 'b'\n");
        else
            printf("You entered an unsupported character\n");
    }
    else {
        printf("Invalid input. Please enter a number or a single character.\n");
    }

    return 0;
}
