// 标准输出流cout.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
//iostream该文件定义了 cin、cout、cerr 和 clog 对象，
//分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流。
using namespace std;
//命名空间
int _tmain(int argc, _TCHAR* argv[])
{
	char str[] = "Hello C++";

	cout << "str 数值是 : " << str << endl;
	//预定义的对象 cout 是 iostream 类的一个实例。
	//cout 对象"连接"到标准输出设备，通常是显示屏。
	//cout 是与流插入运算符 << 结合使用
	return 0;
}

