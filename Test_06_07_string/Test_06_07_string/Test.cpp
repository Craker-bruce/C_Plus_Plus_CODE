#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <assert.h>
using namespace std;

namespace bit
{
	class string
	{
	public:
		/*string()
		:_str(new char[1])
		{*_str = '\0';}
		*/
		//string(const char* str = "\0") 错误示范
		//string(const char* str = nullptr) 错误示范
		string(const char* str = "")
		{
			// 构造string类对象时，如果传递nullptr指针，认为程序非法，此处断言下
			if (nullptr == str)
			{
				_str = new char[1]{ '\0' };
			}
			else
			{
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
			_str = new char[strlen(str) + 1];
			strcpy(_str, str);
		}
		string(const string& s)
		{
			_str = new char[strlen(s._str) + 1];
			strcpy(_str, s._str);
		}
		string& operator = (const string& s)
		{
			if (this != &s)
			{
				delete[]_str;
				_str = new char[strlen(s._str) + 1];
				strcpy(_str, s._str);
			}
			return *this;
		}
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}
	private:
		char* _str;
	};
};


void main()
{
	bit::string str(nullptr);
	bit::string str1("abc");
	bit::string str2;
	str2 = str1;
}
// 测试
//void Teststring()
//{
//    string s1("hello bit!!!");
//    string s2(s1);
//}



/*
string addStrings(string num1, string num2)
{
	reverse(num1.begin(), num1.end());
	reverse(num2.begin(), num2.end());

	int i, j, sign = 0;
	i = j = 0;
	int sum = 0;
	string res;
	while (i < num1.size() && j < num2.size())
	{
		sum = (num1[i] - '0') + (num2[j] - '0') + sign;
		if (sum >= 10)
		{
			sum = sum - 10;
			sign = 1;
		}
		else
		{
			sign = 0;
		}
		res += (sum + '0');
		i++;
		j++;
	}
	while (i < num1.size())
	{
		sum = (num1[i] - '0') + 0 + sign;
		if (sum >= 10)
		{
			sum -= 10;
			sign = 1;
		}
		else
		{
			sign = 0;
		}

		res += (sum + '0');
		i++;
	}
	while (j < num2.size())
	{
		sum = (num2[j] - '0') + 0 + sign;
		if (sum >= 10)
		{
			sum -= 10;
			sign = 1;
		}
		else
		{
			sign = 0;
		}

		res += (sum + '0');
		j++;
	}
	if (sign > 0)
		res += (sign + '0');
	reverse(res.begin(), res.end());
	return res;
}

void main()
{
	string num1 = "6";
	string num2 = "501";
	string result = addStrings(num1, num2);
	cout << result << endl;
}

void main()
{
	string str = "12345";
	reverse(str.begin(), str.end());
	cout << str << endl;
}



int StrToInt(string str)
{
	int len = str.size();
	if (len == 0)
		return 0;
	const char* pstr = str.c_str();
	if (pstr == NULL)
		return 0;
	int flag = 1;  //标记值-->符号位
	int i = 0;
	if (pstr[i] == '+')
	{
		flag = 1;
		i++;
	}
	else if (pstr[i] == '-')
	{
		flag = -1;
		i++;
	}

	int  result = 0;
	while (pstr[i] != '\0')
	{
		if (pstr[i] >= '0' && pstr[i] <= '9')
		{
			result = result * 10 + pstr[i] - '0';
			//if ((flag > 0 && result > 0x7fffffff) || (flag < 0 && result > 0x80000000))
			//	return 0;
			++i;
		}
		else
			return 0;
	}
	return  flag* result;
}

void main()
{
	string str = "-2147483648";
	cout << StrToInt(str) << endl;
}

void main()
{
	string str = "3tg435353";
	cout << atoi(str.c_str()) << endl; //遇到字母就会结束
}


void main()
{
	char* str = "565774";
	int value = atoi(str); //将字符串转换成整数
	cout << "value = " << value << endl;
}
*/