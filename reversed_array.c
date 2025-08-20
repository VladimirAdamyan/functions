#include<stdio.h>

void Arr(int *ptr){
	printf("%d", arr[i]);

}


int main(){

	const int size = 6;
	int arr[size] = {};
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);
	}
	int *ptr = &arr[i];
	Arr(*ptr);
}
