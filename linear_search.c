#include <stdio.h>
#include<stdlib.h>
int main(){
int n;
scanf("%d",&n);
int *arr=(int*)calloc(n,sizeof(int));
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int num;
scanf("%d",&num);
for(int i=0;i<n;i++){
if(num==arr[i]){
printf("index = %d",i);
break;
}
}
return 0;
}
