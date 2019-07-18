#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,num,t=0;
	printf("Enter the size of array");
	scanf("%d",&n);
        int arr[n];
	printf("Enter the elements of array\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		}
	printf("Enter the number u want to rotate");
	scanf("%d",&num);
	for(int j=0;j<num;j++){
		t=arr[0];
		for(int k=0;k<n-1;k++){
			arr[k]=arr[k+1];
		}
		arr[n-1]=t;
		for(int i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
}


