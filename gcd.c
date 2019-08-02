#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
	int count=0,u=0;
	int arr[argc-1];
	for(int i=1;i<argc;i++){
		arr[i-1]=atoi(argv[i]);
	}
	int g=gcd(arr,argc-1);
	printf("gcd is %d",g);
}
int gcd(int arr[],int n){
	int count=0,u=0;
	for(int j=1;j<=arr[0];j++){
		for(int k=0;k<n;k++){
			if(arr[k]%j==0){
				count++;
			}
		}if(count==n){
			u=j;
		}
		count=0;
	}
	return u;
}
