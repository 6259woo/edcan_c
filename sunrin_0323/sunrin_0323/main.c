//
//  main.c
//  sunrin_0323
//
//  Created by 이정우 on 2018. 3. 23..
//  Copyright © 2018년 이정우. All rights reserved.
//

#include <stdio.h>

int main() {
    /*
    int i;
    for (i = 7; i < 1001; i+=7)
    {
        printf("%d\n",i);
    }
    */
    int i = 7;
    do{
        printf("%d\n",i);
        i+=7;
    }while (1001 > i);
    return 0;
}
