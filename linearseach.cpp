#include<iostream>
using namespace std ;
bool search(int arri[],int size,int key){
	for(int i = 0;i<size;i++){
		if(arri[i]== key){
			return 1;
		}
		
	}
	return 0;
} 
int main(){
	int size;
	cin>>size;
	int key;
	cin>>key;
	int arr[5];
		cout<<"enter the values"<<endl; 
	for(int i = 0;i<size;i++){
			cin>>arr[i]; 
	}
	bool found = search(arr,size,key);
	if(found){
		cout<<"present";
	}
	else{
		cout<<"not present";
	}
	
}
