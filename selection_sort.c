#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define COUNT 100

int main(void){
	
	int i,j,min,temp;
	int num[COUNT];
	
	srand(int(time(NULL)));
	
	for(i=0;i<COUNT;i++){
		num[i] = rand() % COUNT + 1;
	}
	
	for(i=0; i<COUNT; i++){
		min = i;
		for(j=i+1;j<COUNT;j++){
			if(num[j]<num[min]){
				min = j;
			}
		}
		
		temp = num[i];
		num[i] = num[min];
		num[min] = temp;
	}
	
	for(i=0;i<COUNT;i++){
		printf("%d ", num[i]);
	}
	
}
