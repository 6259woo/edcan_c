//
//  main.c
//  sunrin_0327
//
//  Created by 이정우 on 2018. 3. 27..
//  Copyright © 2018년 이정우. All rights reserved.
//

#include <stdio.h>
#include <string.h>
/*
int main() {
    int a[100], tmp=0;
    int i,j,n;
    printf("개수입력 : ");
    scanf("%d",&n);
    printf("%d개입력 : ",n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("입력 완료");
    
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(a[i]<a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
                //소수 (나눠서 나오는 factor 1과 그 자신인 수. 2 3 5 7 11 13 17 19)
            }
        }
    }
    
    for (i=0;i<n;i++)
        printf("%d",a[i]);
    return 0;
}

int main() {
    char n;
    printf("입력 : ");
    scanf("%c",&n);
    
    switch (n){
        case 'a' : printf("a\n");
        case 'b' : printf("b\n");
        case 'c' : printf("c\n");
        case 'd' : printf("d\n");break;
        default : printf("?\n");
    }
    
    return 0;
}
*/
#include <stdio.h>
int main(){
    int i, j, n;
    n = 4;
    for (i = 0; i < n; i++){
        for (j = i; j > 0; j--){
            printf(" ");
        }
        for (j = n-i; j > 0; j--){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < n; i++){
        for (j = 1; j < n-i; j++){
            printf(" ");
        }
        printf("*");
        for (j = 0; j < i; j++){
            printf("**");
        }
        printf("\n");
    }
    printf("\n");




    for (i = 0; i < n; i++){
        for (j = 1; j < n-i; j++){
            printf(" ");
        }
        printf("*");
        if (i > 0)
            printf(" ");
        for (j = 1; j < i; j++){
            printf("  ");
        }
        if (i > 0)
            printf("*");
        printf("\n");
    }
    for (i = 0; i < n-1; i++){
        for (j = 0; j <= i; j++){
            printf(" ");
        }
        printf("*");
        if (n-i > 2)
            printf(" ");
        for (j = 3; j < n-i; j++){
            printf("  ");
        }
        if (n-i > 2)
            printf("*");
        printf("\n");
    }
    return 0;
}
