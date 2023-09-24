#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
	int a[]={1,-2,3,-4,5,-6};
	int i=0; 
	int mid=0; 
	int e=5;
	while(i<e){
		if(a[i]<0){
			i++;
		}
		if(a[e]>0){
			e--;
		}
		if(a[i]>0&&a[e]<0){
			swap(a[i],a[e]);
			i++;
			e--;
		}
	}
	for(int i=0; i<=5; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
