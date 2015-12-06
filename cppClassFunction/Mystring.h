#ifndef MY_STRING_H_
#define MY_STRING_H_

#include <iostream>
#include <cstring>

class My_String
{
private:
	char *m_data; // 用于保存字符串

public:
	My_String() : m_data(nullptr) {}
	My_String(const char *str); //普通构造函数
	My_String(const My_String &other);     //拷贝构造函数
	~My_String();                   //析构函数
	My_String& operator=(const My_String &other);
	My_String operator+(const My_String &other);
	bool operator<(const My_String& other) { return std::strlen(m_data) < std::strlen(other.m_data); }
	bool operator>(const My_String& other) { return std::strlen(m_data) > std::strlen(other.m_data); }
	bool operator==(const My_String& other) { return std::strlen(m_data) == std::strlen(other.m_data); }
	My_String operator()(int begin_, int end_);
	int Get_Length() { return std::strlen(m_data); }
	const char* C_My_String() { return m_data; }
	friend std::istream& operator>>(std::istream& in, My_String& for_in);
	friend std::ostream& operator<<(std::ostream &out, const My_String &for_out);

protected :
	char* Get_Seek(int seek_) { return m_data + seek_; }
	void Reset() { m_data = nullptr; }
};

class Edit_String : public My_String
{
public :
	void Insert_Words(int seek_);
	void Delete_Words(int seek_, int count_);
	void Over_Words();
};

#endif