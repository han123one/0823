// 0823.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <iostream>
using namespace std;

/*class Sting
{
private:
	char *p;
public:
	Sting(const char *str) //���캯��
	{
		int len = strlen(str) + 1;
		p = new char[len];
		strcpy_s(p, len, str);

	}
	void output()
	{
		cout << p << endl;
	}
	Sting(const Sting &other) //���
	{
		int len = strlen(other.p) + 1;
		p = new char[len];
		strcpy_s(p, len, other.p);//��other.��ֵ��p ����Ϊlen
	}
// 	Sting()
// 	{
// 		p = nullptr;
// 	}
	~Sting()
	{
		cout << "����" << endl;
		if (p != nullptr)
		{
			delete[]p;
		}
	}

// 	~Sting() //�����������͹��캯��һһ��Ӧ
// 	{
// 		cout << "����" << endl;
// 		delete[]p;
// 	}
};*/
class File
{
private:
	FILE *fp;
public:
	File(const char *fileName)
	{
		fopen_s(&fp, fileName, "w");
	}
	~File()//�ͷ�ʹ��
	{
		fclose(fp);
	}

	void write(const char*msg)
	{
		fprintf(fp, "%s\n", msg);
	}
	//�޷�����ʱ��ɾ���������캯��,��ֹʹ�ÿ������캯��
	File(const File &) = delete;
};
int main()
{
// 	Sting s1("hello World");
// 	s1.output();
// 	Sting s2("1234");
// 	s2.output();
// 	Sting * p;
// 	Sting *p1 = new Sting("3456");
// 	p1->output();
// 	delete p1;
// 	Sting s3[10];
// 	Sting s4("xiaoming");//ǳ����
// 	{
// 		Sting s5(s4);
// 		s5.output();
// 	}
// 	 s4.output();
	File f1("1.txt");
	{
		File f2 = f1;
		f2.write("111");
	}
	f1.write("AbC");

	return 0;
}




