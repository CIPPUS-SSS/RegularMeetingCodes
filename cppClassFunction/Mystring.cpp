#include <iostream>
#include <cstring>
#include <cstdlib>
#include <new>
#include <cctype>
#include "Mystring.h"

My_String::My_String(const char *str)
{
	m_data = new char [std::strlen(str)+1];
	std::strcpy(m_data, str);
}

My_String::My_String(const My_String &other)
{
	m_data = nullptr;
	*this = other;
}

My_String::~My_String()
{
	delete[] m_data;
	m_data = nullptr;
}

My_String& My_String::operator=(const My_String &other)
{

	if (other.m_data == m_data)
	{

		return *this;

	}

	delete[] m_data;

	if (other.m_data == nullptr)
	{
		m_data = nullptr;

		return *this;

	}

	m_data = new char[std::strlen(other.m_data) + 1];
	std::strcpy(m_data, other.m_data);

	return *this;

}

My_String My_String::operator+(const My_String &other)
{
	using namespace std;

	char *result = new char[strlen(m_data) + strlen(other.m_data) + 1];
	strcpy(result, m_data);
	strcpy(result + strlen(m_data), other.m_data);
	My_String st_result;
	st_result.m_data = result;

	return st_result;

}

My_String My_String::operator()(int begin_, int end_)
{

	if (begin_ < 0 || end_ > std::strlen(m_data) || end_ - begin_ <= 0)
	{

		return *this;

	}

	My_String result;
	char *temp = new char[end_ - begin_ + 2];
	temp[0] = '\0';
	std::strncat(temp, &m_data[begin_], end_ - begin_ + 1);
	result = temp;
	delete[] temp;

	return result;
	
}

std::istream& operator>>(std::istream& in, My_String& for_in)
{
	char temp[2]{}, *temp_string = nullptr , *temp_save = nullptr;
	in.get(temp[0]);

	for (int i = 2; temp[0] != '\n'; i++)
	{
		temp_save = temp_string == nullptr ? new char[1]{} : temp_string;
		temp_string = new char[i]{};
		std::strcpy(temp_string, temp_save);
		std::strcat(temp_string, temp);
		delete[] temp_save;
		in.get(temp[0]);
	}

	for_in = My_String(temp_string);
	delete[] temp_string;

	return in;

}

std::ostream& operator<<(std::ostream &out, const My_String &for_out)
{
	out << for_out.m_data;

	return out;

}

void Edit_String::Insert_Words(int seek_)
{

	if (seek_ < 0 || seek_ > Get_Length())
	{

		return;

	}

	Edit_String temp;
	std::cout << "输入插入字符串:";
	std::cin >> temp;
	char *dir_char = temp.Get_Seek(0), *sourse = Get_Seek(0);
	char *result = new char[std::strlen(dir_char) + std::strlen(sourse) + 1]{};
	std::strncat(result, sourse, seek_);
	std::strcat(result, dir_char);
	std::strcat(result, &sourse[seek_]);
	My_String *base_this = this;
	*base_this = My_String(result);
}

void Edit_String::Delete_Words(int seek_, int count_)
{
	char *temp = Get_Seek(0) , *result = nullptr;
	
	if (count_ >= Get_Length() - 1)
	{
		delete[] temp;
		Reset();
	}

	else if ( seek_ <= 0 || count_ < 0 || seek_ >= Get_Length() )
	{

		return;

	}

	else
	{
		int connect_seek = seek_ + count_;
		connect_seek = connect_seek >= Get_Length() ? Get_Length() - 1 : connect_seek;
		temp[seek_] = '\0';
		std::strncat(temp, &temp[connect_seek], Get_Length() - connect_seek - 1);
		result = new char[strlen(temp) + 1];
		std::strcpy(result, temp);
		My_String *base_this = this;
		*base_this = My_String(result);
	}

}

void Edit_String::Over_Words()
{
	Edit_String temp;
	int seek = 0;
	std::cout << "输入光标:";
	std::cin >> seek;
	std::cin.get();
	std::cout << "输入修改后结果:";
	std::cin >> temp;

	for (int i = 0; i < temp.Get_Length() && i + seek < Get_Length(); i++)
	{
		*Get_Seek(i + seek) = *temp.Get_Seek(i);
	}

}