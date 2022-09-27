#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define COUNT 100

int main(void){
	
	int i,j,temp;
	int num[COUNT];
	
	srand((int)time(NULL));
	
	for(i=0;i<COUNT;i++){
		num[i] = rand() % COUNT + 1;
	}
	
	for(i=0; i<COUNT-1; i++){
		for(j=0;j<COUNT-1-i;j++){
			if(num[j]>num[j+1]){
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	
	}
	
	for(i=0;i<COUNT;i++){
		printf("%d ", num[i]);
	}
	
}
