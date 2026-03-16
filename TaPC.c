#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int amount = 0;
    long long number = 0;
    long long answer2 = 0;
    long long answer3 = 0;
    long long answer4 = 0;
    long long answer5 = 0;

    printf("Welcome to the Power Calculator!\n");
    printf("What operation would you like to do? (To the power of 2, 3, 4, or 5):");
    scanf("%d", &amount);

    //To the power of 2
    if (amount == 2){
    printf("What number do you want to square?: ");
    scanf("%lld", &number);
    answer2 = number * number;
    printf("The answer is %lld\n", answer2);
    };

    //To the power of 3
    if (amount == 3){
    printf("What number do you want to cube?: ");
    scanf("%lld", &number);
    answer3 = number * number * number;
    printf("The answer is %lld\n", answer3);
    };

    //To the power of 4
    if (amount == 4){
    printf("What number do you want to tesseract?: ");
    scanf("%lld", &number);
    answer4 = number * number * number * number;
    printf("The answer is %lld\n", answer4);
    };

    //To the power of 5
    if (amount == 5){
    printf("What number do you want to hypercube?: ");
    scanf("%lld", &number);
    answer5 = number * number * number * number * number;
    printf("The answer is %lld\n", answer5);
    };

    system("pause");
    return 0;
}