#include<stdio.h>

void Grade(int a, int b){

int num = a;
while(b > 1){
	a = num * a;
	--b;
}
printf("%d", a);
}

int main(){
	
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	Grade(a, b);
	
	return 0;
}
