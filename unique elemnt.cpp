#include<iostream>
using namespace std;

int unique(int arr[],int size){
	int ans=0;
	for(int i = 0; i<size;i++){
		ans = ans^arr[i];
	}
	return ans;
}
int main(){
	int num[5]={1,1,3,3,5};
	cout <<"unique element is "<<unique(num,5);
}
