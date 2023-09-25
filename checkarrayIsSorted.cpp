#include<iostream>
using namespace std;
int main (){
	int arr[8]={4,5,6,7,8,9,10,11};
	int count=0;
	for(int i=0; i<8; i++){
		if(arr[i]<=arr[i+1]){
			count++;
		}
	}
	if(count==7){
		cout<<"array is sorted";
	}
	else {
		cout<<"array is not sorted";
	}
}
