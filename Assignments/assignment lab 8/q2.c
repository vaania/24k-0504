#include <stdio.h>

int main (){
	
	int rows=2, columns=2;
	int array[2][2];
	int i,j;
	
	printf("Enter elements of array (%d x %d):\n", rows,columns);
	for(i=0; i<rows; i++){
		for(j=0; j<columns; j++){
			printf("element[%d][%d]:", i, j);
			scanf("%d", &array[i][j]);
		}
	}
	 printf("\nThe transpose of entered array is:\n");
    for (j=0; j<rows; j++) {
        for (i=0; i<columns; i++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
	
	
	return 0;
}