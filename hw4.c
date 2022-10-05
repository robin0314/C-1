#include <stdio.h>

int main()
{
    int number;

    printf("Please enter a number: ");
    scanf("%d", &number);

    if(number%2==0||number%3==0){
        printf("It is not a prime number.");
    }
    else{
        printf("It is a prime number.");
    }

    return 0;
}
