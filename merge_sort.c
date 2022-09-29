int sorted[8];
void merge(int list[], int left, int mid, int right){
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;
	
	while(i<=mid && j <= right){
		if(list[i] <= list[j]){
			sorted[k++] = list[i++];
		}
		else{
			sorted[k++] = list[j++];
		}
	}
	
	if(i>mid){
		for(l=j; l<=right;l++)
			sorted[k++] = list[l];
	}
	else{
		for(l=i; l<=mid;l++)
			sorted[k++] = list[l]; 
	}
	
	for(int i = left; i<=right;i++)
		list[i] =sorted[i];
}

void merge_sort(int list[], int left, int right){
	int mid;
	if(left < right){
		mid = (left + right) /2;
		merge_sort(list, left, mid);
		merge_sort(list, mid+1, right);
		merge(list, left, mid, right);		
	}
}

void main() {
	
	int list[8] = {21,10,12,20,25,13,15,22};
	
	merge_sort(list, 0, 7);
	
	for(int i =0; i<8; i++){
		
		printf("%d ", list[i]);
	}
}
