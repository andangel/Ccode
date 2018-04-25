//
//  main.c
//  分支结构switch
//
//  Created by 凯凯 on 2018/4/4.
//  Copyright © 2018年 凯凯. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, const char * argv[]) {
    int number;
    srand((unsigned int)time(NULL));
    number=rand()%3;
    
    switch (number) {
        case 0:
            printf("石头\n");
            break;
        case 1:
            printf("剪刀\n");
            break;
        case 2:
            printf("布\n");
            break;
    }
    return 0;
}
