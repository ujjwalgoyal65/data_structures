#include<iostream>
#include<cstdlib>
#include<cstring>
#include<time.h>
void randomstring(int );
using namespace std;
int main(int argc,char* argv[])
{
	int a=atoi(argv[argc-1]);
	randomstring(a);
	return 0;
}
void randomstring(int a){
	string str="";
	srand(time(NULL));
	for(int i=0;i<a;i){
		int n=rand()%1000;
		if((n>=65 && n<=91)||(n>=97 && n<=122)){
			i++;
			char ch=n;
			str=str+ch;
		}
	}
	cout<<str;
}
