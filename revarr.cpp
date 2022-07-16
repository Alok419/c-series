#include<iostream>
using namespace std;
void reverse(int arr[],int n){
	int start =0;
	int end = n-1;
	while(start<=end){
		swap(arr[start],arr[end]);
		start++;
		end--;
		
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
	reverse(arri,5);
	reverse(brr,6);
	printarray(arri,5);
	printarray(brr,6);
	
}
