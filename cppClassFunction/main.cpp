#include <iostream>
#include <cstdlib>
#include "Mystring.h"

int main()
{
	My_String for_test1("hello world");
	My_String for_test2("hello world");
	My_String for_test3;
	std::cout << for_test1 << std::endl
		<< for_test2 << std::endl;
	for_test3 = for_test1 + for_test2;
	std::cout << for_test3 << std::endl;
	for_test3 = for_test3;
	std::cout << for_test3 << std::endl;
	for_test3 = for_test1(2, 4);
	std::cout << for_test3 << std::endl;
	Edit_String edit_test;
	std::cin >> edit_test;
	edit_test.Insert_Words(3);
	std::cout << edit_test << std::endl;
	edit_test.Delete_Words(3,2);
	std::cout << edit_test << std::endl;
	edit_test.Over_Words();
	std::cout << edit_test << std::endl;
	system("pause>>nul");

	return 0;

}