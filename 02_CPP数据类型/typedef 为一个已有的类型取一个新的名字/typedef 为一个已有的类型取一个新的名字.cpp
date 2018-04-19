// typedef 为一个已有的类型取一个新的名字.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>  
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	typedef int 整型;
	//您可以使用 typedef 为一个已有的类型取一个新的名字
	整型 age = 0;
	cout << "请输入你的年龄:";
		cin >> age;
		
		if (age>=18 && age<=100)
		{
			cout << "你成年了:" << age << endl;
		}
		else if (age<18)
		{
			cout << "未成年" << age << endl;
		}
		else
		{
			cout << "妖兽哦!" << endl;
		}


	return 0;
}

