#include <stdio.h>

 int main (){
 	
  int m1[3][3]={ {1,2,3},
             {4,5,6},
             {7,8,9}
         };
  int m2[3][3]={ {1,3,5},
                 {7,9,11},
				 {13,15,17}
               };
  int a[3][3]={{0,0,0},
              {0,0,0},
			  {0,0,0}
		     };
  int i, j, k;
  int rowsA=3, rowsB=3, rowsC=3;
  int colsA=3, colsB=3, colsC=3;
  
   for (i = 0; i < rowsA; i++) {              
        for (j = 0; j < colsB; j++) {           
            for (k = 0; k < colsA; k++) {       
                a[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    for(i=0; i<rowsA; i++){
    	for(j=0; j<colsB; j++){
    		printf("%d ", a[i][j]);
		}
		printf("\n");
	}
   
 	
 	return 0;
 }