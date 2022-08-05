#include<iostream>
using namespace std;
void swapalt(int arr[],int n){
	for(int i =0;i<n;i+=2){
		if(i+1<n){
			swap(arr[i],arr[i+1]);
		}
	}
}
void printarray(int arr[],int size){
	cout <<"printing the array"<<endl;
	for (int i =0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){

	int arri[5];
		cout<<"enter the values"<<endl; 
	for(int i = 0;i<5;i++){
			cin>>arri[i]; 
	}
	int brr[6];
		cout<<"enter the values"<<endl; 
	for(int i = 0;i<6;i++){
			cin>>brr[i]; 
	}
	swapalt(arri,5);
	swapalt(brr,6);
	printarray(arri,5);
	printarray(brr,6);
	
}
