#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


//Ĭ�ϵĹ��캯��
//Ĭ�ϵĿ������캯��-����Ա����
//Ĭ�ϵĸ�ֵ����    -����Ա��ֵ
//Ĭ�ϵ���������
//Ĭ�ϵ�ȡ��ַ�����
//Ĭ�ϵĳ�����ȡ��ַ�����

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
	//Ĭ�ϵĳ�����ȡ��ַ�����
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
	//����ת��������
	//explicit
	Test(int d = 0) :m_data(d)  //+ explicit  ��ʽ
	{
		cout << "Creat Test" << this << endl;
	}
	Test(const Test& t)
	{
		cout << "Copy Test" << this << endl;
		m_data = t.m_data;
	}
	//= ����     �����������
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
	Test t;//���t����һ��ʵ��
	t = 200;  //t.m_data = 200;
	Test t1(t);
	Test t2;
	t2 = t1;

}
*/