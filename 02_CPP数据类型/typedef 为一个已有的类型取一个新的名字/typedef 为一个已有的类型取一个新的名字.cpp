// typedef Ϊһ�����е�����ȡһ���µ�����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>  
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	typedef int ����;
	//������ʹ�� typedef Ϊһ�����е�����ȡһ���µ�����
	���� age = 0;
	cout << "�������������:";
		cin >> age;
		
		if (age>=18 && age<=100)
		{
			cout << "�������:" << age << endl;
		}
		else if (age<18)
		{
			cout << "δ����" << age << endl;
		}
		else
		{
			cout << "����Ŷ!" << endl;
		}


	return 0;
}

