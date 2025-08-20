#include<stdio.h>
int sum_of_digits(int num){
        int res = 0;
        int a = 0;
	while(num){
		a = num % 10;
		res = res + a;
		num = num / 10;
	}
	return res;
}

int main(){
	int num = 0;
	int result = 0;
	scanf("%d", &num);
	result = sum_of_digits(num);
	printf("%d", result);	
	return 0;
	
}
