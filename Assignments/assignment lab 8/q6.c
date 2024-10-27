#include<stdio.h>
int main(){

 int mat[3][3]={{1,3,6},
                {2,5,7},
                {3,6,9}
			   };
 int saddlepoint=0;
 int i, j, k;
 for(i=0; i<3; i++){
 	int rowmin=mat[i][0];
 	int colindex=0;
 	 for(j=0; j<3; j++){
 	 	if(mat[i][j]<rowmin){
 	 		colindex=j;
		  }
	  }
	  saddlepoint=1;
	  for(k=0; k<3; k++){
	  	if(mat[k][colindex]>rowmin){
	  		saddlepoint=0;
	  		break;
		  }
	  }
	  if(saddlepoint){
	  	printf("saddlepoint is %d", rowmin);
	  	saddlepoint=1;
	  }
 }	if(!saddlepoint){
 	printf("No saddlepoint found!");
 }		   

return 0;
}