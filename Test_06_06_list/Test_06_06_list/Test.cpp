#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <list>
#include <functional>
#include <string>
using namespace std;


/*
void main()
{
	string str1 = "Hello";
	cout << str1[6] << endl; // []������Խ����
	cout << str1.at(0) << endl;//����Խ����
}

void main()
{
	string str1 = "Hello";
	string str2 = "Bit";
	string str = str1 + str2;
	cout << str << endl;

	string str3;
	cout << "input str3:";
	//cin >> str3;
	getline(cin, str3);
	cout << "str3 = " << str3 << endl;

}


void main()
{
	string str = "http://www.cplusplus.com/reference/lsit/list/list";
	size_t start_pos = str.find('w');
	size_t end_pos = str.find('m');
	                            //��ʼλ��    //����
	string tmp_str = str.substr(start_pos, end_pos - start_pos + 1);
	cout << tmp_str << endl;
}


void main()
{
	string str = "http://www.cplusplus.com/reference/lsit/list/list";
	//size_t pos = str.find("refr",0,3);
	size_t pos = str.rfind('t');

	if (pos != string::npos)
		cout << "pos = " << pos << endl;
	else
		cout << "���ҵ��ַ�������." << endl;
}

int my_strlen(const char* str)
{
	int count = 0;
	while (*str++ != '\0')
		count++;
	return count;
}

void main()
{
	string str("abcdefg"); // C
	cout << str << endl;

	cout << "str length =  " << my_strlen(str.c_str()) << endl;
}

void main()
{
	string str("abcxyz");
	cout << str << endl;

	for (int i = 0; i < str.size(); ++i)
		cout << str[i];
	cout << endl;

	auto it = str.begin();
	while (it != str.end())
	{
		cout << *it;
		++it;
	}
	cout << endl;

	for (const auto& e : str)
		cout << e;
	cout << endl;

	auto rit = str.rbegin();
	while (rit != str.rend())
	{
		cout << *rit;
		rit++;
	}
	cout << endl;
}


void fun(int n)
{
	string str;
	str.reserve(100);//Ч������
	for (int i = 0; i < n; ++i)
	{
		cout << "capacity = " << str.capacity() << endl;
		str.push_back('a');
	}
}
void main()
{
	fun(100);
}

void main()
{
	string str2("abcdef");
	cout << str2 << endl;
	cout << "str2 = " << str2 << endl;
	cout << "size = " << str2.size() << endl;
	cout << "capacity = " << str2.capacity() << endl; //15    ϵͳĬ��Ԥ����

	str2.resize(10,'Y');//���µ���Ԫ�صĸ���
	cout << "str2 = " << str2 << endl;
	cout << "size = " << str2.size() << endl;
	cout << "capacity = " << str2.capacity() << endl; //15    ϵͳĬ��Ԥ����

	str2.reserve(100);
	cout << "str2 = " << str2 << endl;
	cout << "size = " << str2.size() << endl;
	cout << "capacity = " << str2.capacity() << endl; //15    ϵͳĬ��Ԥ����
}


void main()
{
	string str2("abcdef");
	cout << "str2 = " << str2 << endl;
	cout << "size = " << str2.size() << endl;
	cout << "length = " << str2.length() << endl;
	cout << "capacity = " << str2.capacity() << endl;
	str2 += "abababbaba";
	cout << "capacity = " << str2.capacity() << endl;
	str2.clear();
	cout << "size = " << str2.size() << endl;
	cout << "length = " << str2.length() << endl;
	cout << "capacity = " << str2.capacity() << endl;
}

void main()
{
	string str1;
	cout << "str1 = " << str1 << endl;
	string str2("abcdef");
	cout << "str2 = " << str2 << endl;
	string str3(10, 'a');
	cout << "str3 = " << str3 << endl;
	string str4(str3);
	cout << "str4 = " << str4 << endl;
}



namespace bit
{
	template<class T>
	class ListNode
	{
	public:
		ListNode(T data = T()) :next(nullptr), prev(nullptr), value(data);
	private:
		ListNode* _next;
		ListNode* _prev;
		T   value;
	};
	template<class T>
	class list
	{
	public:

	};
}


void main()
{
	list<int> lt1 = { 1,2,3,4,5, };
	cout << "lt1:";
	for (const auto& e : lt1)
		cout << e << " ";
	cout << endl;
	auto it = lt1.begin();
	while (it!=lt1.end())
	{
		it = lt1.erase(it);
	}
	cout << "lt1:";
	for (const auto& e : lt1)
		cout << e << " ";
	cout << endl;
}

void main()
{
	list<int> lt1 = { 1,2,3,4,5, };
	auto pos = find(lt1.begin(), lt1.end(), 3);
	cout << *pos << endl;

	pos = lt1.erase(pos);//Ҫ�з���ֵ  Ԥ��ʧЧ

	cout << *pos << endl;//������ʧЧ

	cout << "lt1:";
	for (const auto& e : lt1)
		cout << e << " ";
	cout << endl;
}

void main()
{
	list<int> lt1 = { 1,2,3,4,5, };
	list<int> lt2 = { 10,9,8,7,6 };
	cout << "lt1:";
	for (const auto& e : lt1)
		cout << e << " ";
	cout << endl;
	lt2.sort();
	cout << "lt2:";
	for (const auto& e : lt2)
		cout << e << " ";
	cout << endl;
	//�ϲ�   ǰ����������������Ҫ������
	lt1.merge(lt2);
	cout << "lt1:";
	for (const auto& e : lt1)
		cout << e << " ";
	cout << endl;
}


void main()
{
	list<int> lt1 = { 1,2,9,4,5, };
	cout << "lt1:";
	for (const auto& e : lt1)
		cout << e << " ";
	cout << endl;

	//�Ƴ�
	//lt1.remove(3);

	//����
	//lt1.sort();
	lt1.sort(greater<int>());//�Ӵ�С
	cout << "lt1:";
	for (const auto& e : lt1)
		cout << e << " ";
	cout << endl;
}


void main()
{
	list<int> lt1 = { 1,2,3,4,5, };
	cout << "lt1:";
	for (const auto& e : lt1)
		cout << e << " ";
	cout << endl;
	lt1.clear();
	for (const auto& e : lt1)
		cout << e << " ";
	cout << endl;
}

void main()
{
	list<int> lt1 = { 1,2,3,4,5, };
	list<int> lt2 = { 10,9,8,7,6 };


	//����
	lt1.swap(lt2);

	cout << "lt1:";
	for (const auto& e : lt1)
		cout << e << " ";
	cout << endl;

	cout << "lt2:";
	for (const auto& e : lt2)
		cout << e << " ";
	cout << endl;

}

void main()
{
	list<int> lt1 = { 1,2,3,4,5,6,7,8,9,10 };

	auto it = find(lt1.begin(), lt1.end(), 3);
	lt1.erase(it);
	//lt1.erase(lt1.begin());
	//lt1.erase(--lt1.end());
	for (const auto& e : lt1)
		cout << e << " ";
	cout << endl;
}


void main()
{
	list<int> lt1 = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "size:" << lt1.size() << endl;
	cout << "front:" << lt1.front() << endl;
	cout << "back:" << lt1.back() << endl;

	//auto pos = lt1.begin();
	//pos++;
	//pos++;
	//pos++;
	//lt1.insert(pos, 60);

	lt1.push_front(20);
	lt1.push_back(30);

	lt1.insert(lt1.begin(), 40);
	lt1.insert(lt1.end(), 50);

	auto pos = find(lt1.begin(), lt1.end(), 8);
	lt1.insert(pos, 666);

	if (!lt1.empty())
	{
		for (const auto& e : lt1)
			cout << e << " ";
		cout << endl;
	}
}


void main()
{
	//list<int> lt1;
	//list<int> lt2(10,5);

	//for (const auto& e : lt2)   //Ҫ��begin()  end()  ++���ֵ�����
	//	cout << e << " ";
	//cout << endl;
	list<int> lt4 = { 1,2,3,4,5,6,7,8,9,10 };
	for (const auto& e : lt2)
		cout << e << " ";
	cout << endl;

	//�ֶ����������
	list<int>::iterator it = lt4.begin();
	while (it != lt4.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	//�Զ��Ƶ�
	auto it1 = lt4.begin();
	while (it1 != lt4.end())
	{
		cout << *it1 << " ";
		++it1;
	}
	cout << endl;
	//�������   �õ��˷��������
	list<int> ::reverse_iterator rit = lt4.rbegin();
	while (rit != lt4.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;
}
*/