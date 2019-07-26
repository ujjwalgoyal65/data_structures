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

void r_array(int arr[],int n)
{
	int middle=(n-1)/2;
	int k=n-1,temp=0;
	int *ptr=arr;
	for(int j=0;j<=middle;j++)
	{
		temp=ptr[j];
		ptr[j]=ptr[k-j];
		ptr[k-j]=temp;
	}
}
	
	
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
printf("\n");
}


