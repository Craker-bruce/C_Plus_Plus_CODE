#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


//默认的构造函数
//默认的拷贝构造函数-按成员拷贝
//默认的赋值函数    -按成员赋值
//默认的析构函数
//默认的取地址运算符
//默认的常对象取地址运算符

class String
{
public:
	String(const char* str = "")
	{
		m_data = (char*)malloc(sizeof(char) * (strlen(str) + 1));
		strcpy(m_data, str);
	}
	~String()
	{
		if (m_data != nullptr)
		{
			free(m_data);
			m_data = nullptr;
		}
	}
public:
	void Print()const
	{
		cout << m_data << endl;
	}
private:
	char* m_data;
};

void main()
{
	String s("Hello");
	s.Print();
}

/*
class Test
{
public:
	//默认的常对象取地址运算符
	const Test* operator&()const
	{
		return this;
	}

private:
	int m_data = 10;
};
void main()
{

}
*/
/*
class Test
{
public:
	//类型转换的作用
	//explicit
	Test(int d = 0) :m_data(d)  //+ explicit  显式
	{
		cout << "Creat Test" << this << endl;
	}
	Test(const Test& t)
	{
		cout << "Copy Test" << this << endl;
		m_data = t.m_data;
	}
	//= 重载     运算符的重载
	//Test &operator = (const &Test)
	~Test()
	{
		cout << "xigou" << this << endl;
	}
private:
	int m_data;
};
void main()
{
	//Test t(10);
	Test t;//会给t开辟一个实力
	t = 200;  //t.m_data = 200;
	Test t1(t);
	Test t2;
	t2 = t1;

}
*/