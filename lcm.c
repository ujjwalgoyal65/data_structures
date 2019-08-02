#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
	int arr[argc-1];
	for(int i=1;i<argc;i++){
		arr[i-1]=atoi(argv[i]);
	}
	int l=lcm(arr,argc-1);
	printf("lcm is %d",l);
	return 0;
}
int lcm(int arr[],int n){
	int u=0,count=0;
	for(int j=arr[0];j<10000;j=j+arr[0]){
		for(int i=0;i<n;i++){
			if(j%arr[i]==0){
				count++;
			}
		}
		if(count==n)
		{
			u=j;
			break;
		}
		count=0;
	}
	return u;
}

