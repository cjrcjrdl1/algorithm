#include <stdio.h>
#define MAX_SIZE 9

int partition(int list[], int left, int right){
	int pivot, i, temp;
	
	pivot = list[right];
	i = left - 1;
	
	for(int j = left; j<right; j++){
		if(list[j] <= pivot){
			i++;
			temp = list[i];
			list[i] = list[j];
			list[j] = temp;
		}
	}
	
	i++;
	temp = list[i];
	list[i] = list[right];
	list[right] = temp;
	
	return i;
}

void quick_sort(int list[], int left, int right){
	if(left < right){
		int q = partition(list, left, right);
		quick_sort(list, left, q-1);
		quick_sort(list, q+1, right);
	}
}

void main() {
	int i;
	
	int list[MAX_SIZE] = {5,3,8,4,9,1,6,2,7};
	
	quick_sort(list, 0, MAX_SIZE-1);
	
	for(i = 0; i<MAX_SIZE;i++){
		printf("%d ", list[i]);
	}
	
	
}
