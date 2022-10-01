#define parent(x) (x-1)/2

void buildheap(int *list, int num){
	for(int i =1;i<num;i++){
		int child = i;
		while(child > 0){
			int root = parent(child);
			if(list[root] < list[child]){
				int temp = list[root];
				list[root] = list[child];
				list[child] = temp;
			}
			
			child = root;
		}
	}
}

int main(void){
	
	int num = 9;
	int list[] = {15,4,8,11,6,3,1,6,5};
	
	printf("\n\nBefore heap sort:\n");
	for (int i = 0;i<num;i++){
		printf("%d ", list[i]);
	}
	
	buildheap(list, num);
	for(int i = num-1;i>0;i--){
		int temp = list[i];
		list[i] = list[0];
		list[0] = temp;
		buildheap(list, i);
	}
	
	printf("\n\nAfter heap sort:\n");
	for (int i = 0;i<num;i++){
		printf("%d ", list[i]);
	}
	
	return 0;
}
