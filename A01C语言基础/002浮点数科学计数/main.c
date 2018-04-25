//
//  main.c
//  002浮点数科学计数
//
//  Created by 凯凯 on 18/3/1.
//  Copyright © 2018年 凯凯. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float f=0;
    //f=1024e+3;//1024000.000000
    //f=1024e-3;//1.024000
    //f=1024e3;//1024000.000000
    //f=-1024e3;//-1024000.000000
    //f=1.024e3;//1024.000000
    //f=1024e3;//1024000.000000
    f=1.024e-3;//0.001024
    printf("%f\n",f);
    return 0;
}
