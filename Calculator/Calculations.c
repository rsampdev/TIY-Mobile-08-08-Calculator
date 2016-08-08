//
//  Calculations.c
//  Calculator
//
//  Created by Rodney Sampson on 8/8/16.
//  Copyright © 2016 Rodney Sampson II. All rights reserved.
//

#include "Calculations.h"

void calculateNOddNumbers(int n) {

    for (int i; i <= n ; i++) {
        
        if (i % 2 != 0) {
            printf("%d \n", i);
        }
        
    }

}
