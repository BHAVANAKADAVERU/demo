#include <stdio.h>
#include <stdlib.h>  

int main(int argc, char *argv[]) {
    
    if (argc != 3) {
        printf("Usage: %s <number> <times>\n", argv[0]);
        
    }

    // Convert arguments to integers
    int number = atoi(argv[1]);
    int times = atoi(argv[2]);

    
    // Use while loop to print the number 'times' number of times
    int count = 0;
    while (count < times) {
        printf("%d\n", number);
        count++;
    }
    
    //do while to print the same result
    int i = 1; // Start from 1 because argv[0] is the program name
    do {
        printf("Argument %d: %s\n", i, argv[i]);
        i++;
    } while (i < argc);
    
    return 0;
}
