// ö������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>  

enum color { red, green, blue } c;

int _tmain(int argc, _TCHAR* argv[])
{
	c = blue;
	color b = red;
	std::cout << "enum ö����{"<< std::endl;
	std::cout <<  '\t' << "��ʶ��[=���ͳ���]," << std::endl;
	std::cout << '\t' << "��ʶ��[=���ͳ���]," << std::endl;
	std::cout << '\t' << "... " << std::endl;
	std::cout << '\t' << "��ʶ��[=���ͳ���]" << std::endl;
	std::cout << "} ö�ٱ���;" << std::endl;
	std::cout << "���� c ������Ϊ color�����c ����ֵΪ :" << c << std::endl;
	std::cout << b << std::endl;
	return 0;

	/*
	Ĭ������£���һ�����Ƶ�ֵΪ 0���ڶ������Ƶ�ֵΪ 1��
	���������Ƶ�ֵΪ 2���Դ����ơ����ǣ���Ҳ���Ը����Ƹ���һ�������ֵ��
	ֻ��Ҫ���һ����ʼֵ���ɡ����磬�������ö���У�green ��ֵΪ 5��
	*/

