//
//  main.c
//  分支结构if
//
//  Created by 凯凯 on 2018/4/3.
//  Copyright © 2018年 凯凯. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int age=0;
    printf("请输入你的年龄:");
    scanf("%d",&age);
    if (age>=18) {
        printf("成年人!\n");
    }
    else
    {
        printf("未成年!\n");
    }
    
    return 0;
}
