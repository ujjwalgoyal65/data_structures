#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
	int arr[argc-1];
	for(int i=1;i<argc;i++){
		arr[i-1]=atoi(argv[i]);
	}
  	int u=arr[0],t=0;
	int l=argc-1;
	for(int i=1;i<argc-1;i++){
		if(u>arr[i]){
			u=arr[i];
			t=i;
		}
	}
	int o=l-t;
	int temp=0;
	for(int i=0;i<t;i++){
		temp=arr[0];
            for(int j=0;j<l;j++){
		    arr[j]=arr[j+1];
	    }
	    arr[l-1]=temp;
	}
	for(int i=0;i<l;i++){
		printf("%d ",arr[i]);
	}
}

