// ��׼������cin.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	char name[50];

	cout << "�������������ƣ� ";
	cin >> name;
	//Ԥ����Ķ��� cin �� iostream ���һ��ʵ����
	//cin ����������׼�����豸��ͨ���Ǽ��̡�
	//cin ��������ȡ����� >> ���ʹ��
	cout << "���������ǣ� " << name << endl;
	return 0;
}

