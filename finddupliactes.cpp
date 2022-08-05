#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(int arr[],int size) 
{
    // Write your code here
	int ans=0;
    for(int i = 0; i<size;i++){
        ans = ans^arr[i];
    }
    for(int i = 1;i<size;i++){
        ans= ans^i;
    }
    return ans;
}
int main(){
	int arr[5]={1,2,3,5,5};
	cout <<findDuplicate(arr,5);
}

