#include<iostream>
using namespace std;

int intersection(int arr1[],int n,int arr2[],int m){
	for(int i = 0;i<n;i++){
		int element = arr1[i];
		for(int j=0;j<n;j++){
			if(element==arr2[j]){
				cout<<arr2[j];
				arr2[j]= INT_MIN;
				break;
			}
		}
	}

}

int main(){
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={6,7,8,9,1};
	int inter= intersection(arr1,5,arr2,5);
	cout << inter;
}
