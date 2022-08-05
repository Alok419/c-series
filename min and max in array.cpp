#include<iostream>
using namespace std;

int getMin(int arr[],int size){
	int min = INT_MAX;
	for(int i = 0;i<size;i++){
		if(arr[i]<min){
			min = arr[i];
		}
	}
	return min;
}


int getMax(int arr[],int size){
	int max = INT_MIN;
	for(int i = 0;i<size;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}
int main(){
	int num[5]={1,2,3,4,5};
	cout << " maximum number is" <<getMax(num,5)<<endl;
	cout << " minimum number is" <<getMin(num,5)<<endl;
	
}
