#include "stdio.h"

// Function that returns the square of a number
int square(int input)
{
    int output = input * input;
    return output;
}
// Function that return if a number is even
int isEven(int a)
{
    // if (a % 2 == 0)
    //     return 1;

    // return 0;

    return a % 2 == 0;
}
// Function that print out Welcom to Class
void printWelcom(){
    printf("Welcome to class");
}

void printChar(char a){
    printf("your charachter is %c", a);
}

// Prototype of Function that return the biggest number
int biggest(int , int );


int main()
{

    int res = isEven(3);
    printf("%d\n", res);

    printWelcom();
    printChar('d');
    printf("\n");

    printf("biggest : %d", biggest(2, 3));

    return 0;
}

// Function that return the biggest number
int biggest(int a, int b){
    return a > b ? a : b;
}