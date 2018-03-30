//
//  main.c
//  sunrin_0326
//
//  Created by 이정우 on 2018. 3. 26..
//  Copyright © 2018년 이정우. All rights reserved.
//

#include <stdio.h>

int main() {
    int i, j, n;
    for (i = 3; i > 0; i--)
    {
        //printf("%d",i);
        for (j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (i = 3; i > 0; i--)
    {
        //printf("%d",i);
        for (j = 3-i; j > 0; j--)
        {
            printf(" ");
        }
        for (j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        //printf("%d",i);
        for (j = 2-i; j > 0; j--)
        {
            //printf("%d",j);
            printf(" ");
        }
        printf("*");
        for (j = i*2; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        //printf("%d",i);
        for (j = i; j > 0; j--)
        {
            //printf("%d",j);
            printf(" ");
        }
        printf("*");
        for (j = (2-i)*2; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    /*
    for (i = 0; i < 3; i++)
    {
        //printf("%d",i);
        for (j = 2-i; j > 0; j--)
        {
            //printf("%d",j);
            printf(" ");
        }
        printf("*");
        for (j = i*2; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 0; i < 2; i++)
    {
        //printf("%d",i);
        for (j = i+1; j > 0; j--)
        {
            //printf("%d",j);
            printf(" ");
        }
        printf("*");
        for (j = (1-i)*2; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    */
    //scanf("%d",&n);
    n = 17;
    for (i = 0; i < n; i++)
    {
        for (j = (n-1)-i; j > 0; j--)
        {
            printf(" ");
        }
        printf("*");
        for (j = i; j > 0; j--)
        {
            printf("**");
        }
        printf("\n");
    }
    for (i = n-1; i > 0; i--)
    {
        for (j = n-i; j > 0; j--)
        {
            printf(" ");
        }
        printf("*");
        for (j = i-1; j > 0; j--)
        {
            printf("**");
        }
        printf("\n");
    }
    return 0;
}
