#include <stdio.h>

int main (){
	
	int array[2][3][3] = {
	{ {1,2,3},
	  {4,5,6},
	  {7,8,9}
	},
	{ {2,4,6},
	  {8,10,12},
	  {14,16,18}
	}
	};
	int i,j,k;
	int pageSum=0;
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			for(k=0; k<3; k++){
				pageSum += array[i][j][k]; 
			}
			
		}
	}
	printf("The sum of all elements of array is: %d\n", pageSum);
	 	
	return 0;
}