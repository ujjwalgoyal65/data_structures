#include<stdio.h>
int main()
{
	int n,temp,arr[100];
	printf("enter the elements in array:");
	scanf("%d",&n);
	printf("enter the elements of the array:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int middle=n/2;
	int k=n-1;
	for(int j=0;j<=middle;j++)
	{
		temp=arr[j];
		arr[j]=arr[k-j];
		arr[k-j]=temp;
	}
	printf("reverse of the array is:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
	


		

