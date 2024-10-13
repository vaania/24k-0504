#include<stdio.h>

int main (){
	
	int size, index, i;
	
	printf("Enter size of array:\n");
	scanf("%d", &size);
	
	int arr[size];
	
	printf("Enter elements:\n");
	
	for (i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	
	for (i=0; i<size; i++){
		index = arr[i] < 0 ? -arr[i] : arr[i];
		
		if(index < size && arr[index] >= 0){
			arr[index]= -arr[index];
		}else if (index<size){
			printf("The repeating elements are: %d\n");
		}
	}
	
	return 0;
}