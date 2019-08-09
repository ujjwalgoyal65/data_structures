#include<iostream>
#include<cstdlib>
using namespace std;
void selsort(int r,int *arr);
int main(){
	int r;
	cout<<"enter r"<<endl;
	cin>>r;
	int arr[r];
	for(int i=0;i<r;i++){
   		cin>>arr[i];
	}
	selsort(r,arr);
}
void selsort(int r,int *arr){
	int pos;
	for(int i=0;i<r-1;i++){
		int min=arr[i];
		for(int j=i+1;j<r;j++){
			if(arr[j]<min){
				min=arr[j];
				pos=j;
			}
		}
		if(arr[i]>min){
			int temp=arr[i];
			arr[i]=arr[pos];
			arr[pos]=temp;
		}
	}
	for(int i=0;i<r;i++){
		cout<<arr[i]<<" ";
	}
}
