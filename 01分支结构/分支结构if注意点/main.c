//
//  main.c
//  分支结构if注意点
//
//  Created by 凯凯 on 2018/4/3.
//  Copyright © 2018年 凯凯. All rights reserved.
//

#include <stdio.h>
/*
 在C语言中所有数值都是真假性
 1为真
 0为假
 */
int main(int argc, const char * argv[]) {
    int i=10;
    if (i=2) {
        printf("疏忽啦,结果是错的应该是==2而不是=2!\n");
        printf("因为C语言中1为真所以此分支结构结果为真!\n");
    }
    
    return 0;
}
