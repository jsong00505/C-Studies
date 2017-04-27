//
//  main.c
//  
//
//  Created by Jun Song on 27/04/2017.
//
//

#include "main.h"

int main() {
    int number;
    
    // input
    printf("Enter a number: ");
    scanf("%d", &number);
    
    for(int i = 0; i < number; i++) {
        // get a number of asterisk will be printed
        int asterisk = number - 2 * i;
        
        // if the number is negative, make it positive and add two
        if(asterisk < 0) {
            asterisk = -asterisk + 2;
        }
        
        // get a number of white space will be printed
        int whiteSpace = (number - asterisk) / 2;
        
        // print
        for(int j = 0; j < whiteSpace; j++) {
            printf(" ");
        }
        
        for(int j = 0; j < asterisk; j++) {
            printf("*");
        }
        
        for(int j = 0; j < whiteSpace; j++) {
            printf(" ");
        }
        
        // new line
        printf("\n");
    }
    
    return 0;
}
