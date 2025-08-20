#include<stdio.h>

void mul( &arr; const int size ){

	for(int i = 0; i < size; ++i){
		arr[i] = arr[i] * 2;
		printf("%d", arr[i]);
	}
	

}

int main(){

	const int size = 5;
	int arr[size] = {};
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);
	}
	mul(*arr, size);
}
