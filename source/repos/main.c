#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
#include<stdbool.h>//잘 사용하지 않는 bool의 형태를 include형으로 정의를 한것,간단하다는장점

//&:특정 비트를 0으로 만들때
//|:특정 비트를 1로 만들 때
// ^:특정 비트의 상태를 반전
     



    int main() {
        int i, j;
        for(i=0;i<5;i++){
            for (j = 0; j < 5; j++) {
                if ((i = j) || (i + j == 4))
                    printf("*");
                else
                    printf("");
            }
           
        }
    }