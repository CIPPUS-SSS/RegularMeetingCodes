#include<iostream>
#include "BubbleSort.h"
#include "Print.h"
using namespace std;

int main(){
	int a[]={84,69,76,86,94,91};
	
	sort(a);
	PrintArray(a);
	return 0;
}

