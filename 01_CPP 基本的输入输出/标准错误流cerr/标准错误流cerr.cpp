// 标准错误流cerr.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//已经在stdafx中声明了#include <iostream>
//已经在stdafx中声明了命名空间所以这里可以直接使用
 

int _tmain(int argc, _TCHAR* argv[])
{
	char str[] = "无法读取....";

	cerr << "错误消息 : " << str << endl;
	//预定义的对象 cerr 是 iostream 类的一个实例。
	//cerr 对象附属到标准错误设备，通常也是显示屏，但是 cerr 对象是非缓冲的，且每个流插入到 cerr 都会立即输出
	return 0;
}

