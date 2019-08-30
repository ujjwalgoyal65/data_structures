#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int partition(int arr[],int low,int high){
	srand(time(0));
	int pivot_index=(rand()%(high-low+1));
	int pivot=arr[pivot_index];
	int i=low-1;
	for(int j=low;j<high;j++){
		if(arr[j]<=pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[pivot_index]);
	return i+1;
}
void quicksort(int arr[],int start,int end){
	if(start>=end)
		return ;
	int pi=partition(arr,start,end);
	quicksort(arr,start,pi-1);
	quicksort(arr,pi+1,end);
}
void swap(int &n1,int &n2){
	int temp=n1;
	n1=n2;
	n2=temp;
}
int main(int argc,char* argv[]){
	int n=argc-1;
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=atoi(argv[i+1]);
	}
	quicksort(arr,0,n);
	 for(int i=0;i<n;i++){
               cout<< arr[i];
        }

}


