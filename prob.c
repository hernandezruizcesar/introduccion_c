#include<stdio.h>

int fibonacci(int a){
	if(a==1 || a==0 || a==2){ return 1;}
	else{ return fibonacci(a)+fibonacci(a-1); }
}

int main(){
	int a;
	printf("Dame el valor->");
	scanf("%d",&a);
	printf("resultado %d",fibonacci(a));
}
