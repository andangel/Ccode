// 枚举类型.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>  

enum color { red, green, blue } c;

int _tmain(int argc, _TCHAR* argv[])
{
	c = blue;
	color b = red;
	std::cout << "enum 枚举名{"<< std::endl;
	std::cout <<  '\t' << "标识符[=整型常数]," << std::endl;
	std::cout << '\t' << "标识符[=整型常数]," << std::endl;
	std::cout << '\t' << "... " << std::endl;
	std::cout << '\t' << "标识符[=整型常数]" << std::endl;
	std::cout << "} 枚举变量;" << std::endl;
	std::cout << "变量 c 的类型为 color。最后，c 被赋值为 :" << c << std::endl;
	std::cout << b << std::endl;
	return 0;

	/*
	默认情况下，第一个名称的值为 0，第二个名称的值为 1，
	第三个名称的值为 2，以此类推。但是，您也可以给名称赋予一个特殊的值，
	只需要添加一个初始值即可。例如，在下面的枚举中，green 的值为 5。
	*/

