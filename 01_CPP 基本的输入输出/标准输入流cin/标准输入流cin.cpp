// 标准输入流cin.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	char name[50];

	cout << "请输入您的名称： ";
	cin >> name;
	//预定义的对象 cin 是 iostream 类的一个实例。
	//cin 对象附属到标准输入设备，通常是键盘。
	//cin 是与流提取运算符 >> 结合使用
	cout << "您的名称是： " << name << endl;
	return 0;
}

