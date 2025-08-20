#include<stdio.h>

void Prime(int num){
	int rem = 0;
	for(int i = 1; i <= num; ++i){
		if(num % i == 0){
			rem = rem + 1;
		}
	}
	if(num == 1 || num == 0){
		return;
	}

	else if (rem == 2){
                printf("parz");
        }else printf("baxadryal");

		
	
}
int main(){
	int fin = 0;
	int num = 0;
	scanf("%d", &num);
	Prime(num);
	



	return 0;
}
