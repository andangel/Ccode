// 标准日志流clog.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char str[] = "Unable to read....";

	clog << "Error message : " << str << endl;
	//预定义的对象 clog 是 iostream 类的一个实例。
	//clog 对象附属到标准错误设备，通常也是显示屏，但是 clog 对象是缓冲的。
	//这意味着每个流插入到 clog 都会先存储在缓冲在，直到缓冲填满或者缓冲区刷新时才会输出。
	//clog 也是与流插入运算符 << 结合使用
	return 0;
}

