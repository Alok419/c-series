#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
	int start = 0;
	int end = size-1;
	int mid = start + (end-start)/2;
	
	while(start<=end){
		if(arr[mid]==key){
			return mid;
		}
		if(key>arr[mid]){
			start = mid + 1;
		}
		else{
			end = mid-1;
		}
	    mid = start + (end-start)/2;
	}
	return -1;
	
} 
int main(){
	int even[6] = {1,2,3,4,5,6};
	int odd[5] = {1, 2,3,4,5};
	int e = binarySearch(even,6,5);
	int o = binarySearch(odd,5,3);
	cout <<e;
	cout <<o;
	return 0;
}
