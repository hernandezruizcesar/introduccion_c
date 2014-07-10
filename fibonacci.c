#include<stdio.h>

int fibonacci(int a){
	if(a==2 || a==1){
		return 1;
	}else
	if(a==0){
		return 0;
	}else
	if(a>2){
		return fibonacci(a-1)+fibonacci(a-2);
	}
}

int main(){
	int c;
	printf("Dame un valor->");
	scanf("%d",&c);
	printf("El resultado es:%d",fibonacci(c));
}