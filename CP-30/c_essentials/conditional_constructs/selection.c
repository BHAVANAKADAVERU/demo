#include <stdio.h>
#include <stdlib.h>  // For atoi()
#include <string.h>  // For strcmp()

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <input>\n", argv[0]);
        
    }

    // Get the first argument
    char *input = argv[1];

    // Check if the input is a number (integer)
    if (input[0] >= '0' && input[0] <= '9') {
        // If it's a number, convert it to an integer
        int num = atoi(input);

        switch (num) {
            case 1:
                printf("You entered number 1\n");
                break;
            case 2:
                printf("You entered number 2\n");
                break;
            case 3:
                printf("You entered number 3\n");
                break;
            default:
                printf("You entered an unsupported number: %d\n", num);
                break;
        }
    } 
    
    else if (strlen(input) == 1) {
        switch (input[0]) {
            case 'a':
                printf("You entered character 'a'\n");
                break;
            case 'b':
                printf("You entered character 'b'\n");
                break;
            case 'c':
                printf("You entered character 'c'\n");
                break;
            default:
                printf("You entered an unsupported character: %c\n", input[0]);
                break;
        }
    } 
    else {
        printf("Invalid input. Please enter a number or a single character.\n");
    }

    return 0;
}
