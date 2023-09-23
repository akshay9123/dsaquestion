#include<bits/stdc++.h>
using namespace std;
int main (){
	int arr[]={1,0,0,1,1,0};
	int i=0;
	int mid=0;
	int end=5;
	while(i<=end){
		if(arr[i]==0){
			i++;
			mid++;
		}
		if(arr[i]==1&&arr[end]==0){
			swap(arr[i],arr[end]);
			i++;
			end--;
		}
		if(arr[i]==1){
			swap(arr[i],arr[end]);
			i++;
			end--;
		}
		
	}
	for(int j=0; j<6; j++){
		cout<<arr[j]<<" ";
	}
	return 0;
}
