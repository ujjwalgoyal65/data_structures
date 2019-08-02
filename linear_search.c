#include <stdio.h>
#include<stdlib.h>
int main(){
int n;
printf("Enter the no. of elements");
scanf("%d",&n);
int *arr=(int*)calloc(n,sizeof(int));
printf("enter the elements\n");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int num;
printf("enter no. u want search ");
scanf("%d",&num);
for(int i=0;i<n;i++){
if(num==arr[i]){
printf("index = %d",i);
break;
}
}
return 0;
}
