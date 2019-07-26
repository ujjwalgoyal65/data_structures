#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
	int arr[argc-1];
	for(int i=1;i<argc;i++){
		arr[i-1]=atoi(argv[i]);
	}
	sub_array(arr,argc-1);
	return 0;
}
void sub_array(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			for(int k=j;k<j+i+1;k++){
				printf("%d ",arr[k]);
			}
			printf("\n");
		}
	}
}
