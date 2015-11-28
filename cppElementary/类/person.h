#include<iostream>
#include "string.h"
using namespace std;


class Person{
	private:
		int age;
		std:string sex;

	public:
		int id;
		std::string name;
		Person(){
			cout<<endl<<"请输入姓名:";
			cin>>name;
			cout<<endl<<"请输入id:";
			cin>>id;
			cout<<endl<<"性别：";
			cin>>sex;
		}
		int getAge(){
			return this.age;
		}
		void getSex(){
			cout<<this.sex<<endl;
		}
		~Person(){}
};
