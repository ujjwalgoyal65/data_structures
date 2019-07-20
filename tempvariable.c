#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
	int u=0;;
	int arr[argc-2];
	printf("orginal array\n");
	for(int i=1;i<argc-1;i++){
		arr[i-1]=atoi(argv[i]);
		printf("%d ",arr[i-1]);
	}
	int t=atoi(argv[argc-1]);
	printf("\nAfter rotation\n");
	for(int i=0;i<t;i++){
		u=arr[argc-3];
		for(int j=argc-3;j>0;j--){
			arr[j]=arr[j-1];
		}
		arr[0]=u;
	}
	for(int k=0;k<argc-2;k++){
		printf("%d ",arr[k]);}
}
		


