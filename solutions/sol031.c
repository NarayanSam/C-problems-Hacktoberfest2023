//Question 31: Write a C language program to show instance variable, class variable, and local variable.

#include <stdio.h>

// Global variable (class variable)
int globalVar = 10;

void exampleFunction() {
    // Local variable
    int localVar = 5;

    printf("Inside the function:\n");
    printf("Local variable (localVar): %d\n", localVar);
    printf("Global variable (globalVar): %d\n", globalVar);
}

int main() {
    // Local variable
    int localVar = 20;

    printf("Inside the main function:\n");
    printf("Local variable (localVar): %d\n", localVar);
    printf("Global variable (globalVar): %d\n", globalVar);

    // Calling the function
    exampleFunction();

    return 0;
}
