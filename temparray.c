#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
	int u=0;
	int arr[argc-2];
	for(int i=1;i<argc-1;i++){
		arr[i-1]=atoi(argv[i]);
	}
	int n=atoi(argv[argc-1]);
	rotate_array(arr,argc-2,n);
	return 0;
}
void rotate_array(int arr[],int n,int num){
	int t=num;
	int m=n;
	if(t>m){
		int s=t%m;
		int temp[s];
		for(int j=0;j<s;j++){
			temp[j]=arr[m-s+j];
		}
		for(int i=m-s-1;i>=0;i--){
			arr[i+s]=arr[i];
		}
		for(int i=0;i<s;i++){
			arr[i]=temp[i];
		}
	}
	else
	{
		int temp[t];
		for(int j=0;j<t;j++){
			temp[j]=arr[m-t+j];
		}
		for(int i=m-t-1;i>=0;i--){
			arr[i+t]=arr[i];
		}
		for(int i=0;i<t;i++){
			arr[i]=temp[i];
		}
	}

	for(int k=0;k<m;k++){
		printf("%d ",arr[k]);
	}
}
