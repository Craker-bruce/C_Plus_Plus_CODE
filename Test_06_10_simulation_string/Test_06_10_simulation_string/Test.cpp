#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

namespace bit
{
	class string
	{
	public:
		string(const char* str = "")
		{
			if (str == nullptr)
			{
				_str = new char[1];
				_str[0] = '\0';
				_capacity = _size = 0;
			}
			else
			{
				_capacity = _size = strlen(str);
				_str = new char[_capacity + 1];
				strcpy(_str, str);
			}
		}
	private:
		char* _str;//字符串空间
		size_t  _capacity;  //容量
		size_t  _size;   //字符串的有效长度    不包含\0

	};


};

void main()
{
	bit::string str("abc");
}