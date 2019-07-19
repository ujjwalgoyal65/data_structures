#include<stdio.h>
#include<stdlib.h>
int main(int argv,char* argc[])
{
	int temp,arr[argv-1];
	for(int i=1;i<argv;i++)
	{
		arr[i-1]=atoi(argc[i]);
	}
	int middle=(argv-1)/2;
	int k=argv-2;
	for(int j=0;j<=middle;j++)
	{
		temp=arr[j];
		arr[j]=arr[k-j];
		arr[k-j]=temp;
	}
	printf("reverse of the array is:\n");
	for(int i=0;i<argv-1;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
	


		

