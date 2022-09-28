#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define COUNT 100

int main(void){
	
	int i,j, key;
	int num[COUNT];
	
	srand((int)time(NULL));
	
	for(i=0;i<COUNT;i++){
		num[i] = rand() % COUNT + 1;
	}
	
	for(i=1; i<COUNT; i++){
		key = num[i];
		j = i -1;
		while(j>=0 && num[j]>key){
			num[j+1] = num[j];
			j--;
		}
		num[j+1] = key;
	}
	
	for(i=0;i<COUNT;i++){
		printf("%d ", num[i]);
	}
	
}
