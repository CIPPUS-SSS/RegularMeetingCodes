#include<iostream>
#include "person.h"
using namespace std;

int main(){
	Person person=new Person();
	cout<<person.getAge();
	return 0;
}
