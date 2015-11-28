#include<iostream>
using namespace std;

int main(){
	int temp = 0;
	int a[]={84,69,76,86,94,91};
	for(int i = 0; i<6;i++){
		for(int j =0 ;j <6-i-1; j++){
			if(a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	for(int i = 0; i < 6 ;i++){
		cout<<a[i]<<'\t';
	}
	cout<<endl;
	return 0;
}
