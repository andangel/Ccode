// ��׼��־��clog.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char str[] = "Unable to read....";

	clog << "Error message : " << str << endl;
	//Ԥ����Ķ��� clog �� iostream ���һ��ʵ����
	//clog ����������׼�����豸��ͨ��Ҳ����ʾ�������� clog �����ǻ���ġ�
	//����ζ��ÿ�������뵽 clog �����ȴ洢�ڻ����ڣ�ֱ�������������߻�����ˢ��ʱ�Ż������
	//clog Ҳ��������������� << ���ʹ��
	return 0;
}

