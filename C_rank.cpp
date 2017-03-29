//////////////////////
//Author: Dawei XU
//////////////////////
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
	int arr[101],num;

	cin>>num;
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	//cout<<num<<" "<<arr[0];
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			if(i!=j&&arr[i]+arr[j]==256){
				cout<<"yes";
				return 0;
			}
		}
	}
	cout<<"no";
	return 0;
}

