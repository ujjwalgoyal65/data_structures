#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
	int arr[argc-1];
	for(int i=1;i<argc;i++){
		arr[i-1]=atoi(argv[i]);
	}
	int n=(argc-1)/2;
	int temp=arr[n-1];
	for(int i=n-1;i>0;i--){
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
	int temp1=arr[n];
	for(int j=n;j<argc-1;j++){
		arr[j]=arr[j+1];
	}
	arr[argc-2]=temp1;
        for(int i=0;i<argc-1;i++){
		printf("%d ",arr[i]);
	}

	return 0;
}
