#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	string stri="hello this is akshay";
	int n= stri.length();
//	revmove the spaces with attherate
	for(int i=0; i<n; i++){
		if(stri[i]== ' '){
			stri[i]='@';
		}
	}
	cout<<stri;
	return 0;
}
