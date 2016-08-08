//
//  main.c
//  Calculator
//
//  Created by Rodney Sampson on 8/8/16.
//  Copyright © 2016 Rodney Sampson II. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include "Math.h"

int main(int argc, const char * argv[]) {
    
    double firstNumber = -2;
    double secondNumber = -2;
    double answer = -1;
    
    char mathSign = -1;
    
    bool running = true;
    char close = -1;
    
    printf("Welcome to the Best Calculator®™\n");
    printf("If you would like to do addition type '+'\n");
    printf("If you would like to do subtraction type '-");
    printf("If you would like to do multiplication type '*'\n");
    printf("If you would like to do division type '/'\n");
    printf("If you would like to get all the odd number from zero to n type 'O' or 'o'\n");
    printf("If you would like to calculate the first n prime numbers type 'P' or 'p'\n");
    
    scanf("%s", &mathSign);
    
    while (running) {
        if (firstNumber != -2 && firstNumber != -2) {
            printf("For addition type '+'\n");
            printf("For subtraction type '-'\n");
            printf("For multiplication type '*'\n");
            printf("For division type '/'\n");
            printf("For all the odd number from zero to n type 'O' or 'o'\n");
            printf("For the first n prime numbers type 'P' or 'p'\n");
            
            scanf("%s", &mathSign);
        }
        
        printf("\nType the first number\n");
        scanf("%le", &firstNumber);
        printf("\nType the second number\n");
        scanf("%le", &secondNumber);
        
        if (mathSign == '+') {
            answer = add(firstNumber, secondNumber);
        } else if(mathSign == '-') {
            answer = subtract(firstNumber, secondNumber);
        } else if(mathSign == '*') {
            answer = multiply(firstNumber, secondNumber);
        } else if(mathSign == '/') {
            answer = divide(firstNumber, secondNumber);
        }
        
        if (answer != -1) {
            printf("\n%f %c %f = %f\n", firstNumber, mathSign, secondNumber, answer);
        } else{
            
            if(mathSign == 'O' || mathSign == 'o') {
                printf("odd numbers\n");
                break;
            } else if(mathSign == 'P' || mathSign == 'P') {
                printf("prime numbers\n");
                break;
            }
        }
        
        
        printf("\nIf you would like to do maths again type anything\n");
        printf("\nElse type 'n' to stop the calculator\n");
        
        fpurge(stdin);
        scanf("%c", &close);
        
        if (close == 'n') {
            running = false;
        }
        
        close = -1;
        answer = -1;
    }
    
    printf("Thank you for using the Best Calculator®™. Goodbye\n");
    fpurge(stdin);
    
    return 0;
}
