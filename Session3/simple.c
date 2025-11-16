#include "stdio.h"

int main()
{

    // Print numbers from 1 to 5
    // int i = 1;
    // printf("while :\n");
    // while(i <= 5){
    //     printf("%d\n", i++);
    // }
    // printf("for :\n");
    // for(int j = 1 ; j <= 5 ; j++){
    //     printf("%d\n", j);
    // }
    // Sum of first 5 natural numbers
    // int sum = 0;
    // for(int i = 1 ; i < 6 ; i++)
    //     sum += i;
    // printf("sum : %d", sum);

    // Print even numbers up to 10

    // Countdown from 5 to 1
    // for(int i = 5 ; i > 0 ; i--)
    //     printf("%d\n", i);

    // Keep asking for a number until user enters 0
    // int num = -1;
    // while(num != 0){
    //     printf("please enter a number :\n");
    //     scanf("%d", &num);
    // }

    int num = -1;
    while (404)
    {
        printf("please enter a number :\n");
        scanf("%d", &num);
        if(num == 0)
            break;
    }
    printf("DONE");

    // WARNING!!! infinit loop

    return 0;
}