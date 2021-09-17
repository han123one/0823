// 0823.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
using namespace std;

/*class Sting
{
private:
	char *p;
public:
	Sting(const char *str) //构造函数
	{
		int len = strlen(str) + 1;
		p = new char[len];
		strcpy_s(p, len, str);

	}
	void output()
	{
		cout << p << endl;
	}
	Sting(const Sting &other) //深拷贝
	{
		int len = strlen(other.p) + 1;
		p = new char[len];
		strcpy_s(p, len, other.p);//把other.赋值给p 长度为len
	}
// 	Sting()
// 	{
// 		p = nullptr;
// 	}
	~Sting()
	{
		cout << "析构" << endl;
		if (p != nullptr)
		{
			delete[]p;
		}
	}

// 	~Sting() //析构函数，和构造函数一一对应
// 	{
// 		cout << "析构" << endl;
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
	~File()//释放使用
	{
		fclose(fp);
	}

	void write(const char*msg)
	{
		fprintf(fp, "%s\n", msg);
	}
	//无法拷贝时，删除拷贝构造函数,禁止使用拷贝构造函数
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
// 	Sting s4("xiaoming");//浅拷贝
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




