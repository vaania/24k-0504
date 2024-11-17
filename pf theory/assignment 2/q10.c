#include<stdio.h>

int main(){
    int outerspace , a , innerspace, i , j , l;

    printf("Enter any number :");
    scanf("%d", &a);

    outerspace = (a*2)-2;
    innerspace = 0;

    for(i = 0; i <  a-1; i++){
        for(j = 0; j < outerspace; j++){
            printf(" ");
        }
        printf("*");
        for(l = 0; l < innerspace; l++){
            printf(" ");
        }

        if(l != 0)
            printf("*");
        printf("\n");

        outerspace--;
        if(i == 0)
            innerspace++;
        else
            innerspace+=2;
    }
    for(i = 0 ;  i < a; i++){
        printf("*");
    }
    for(i = 0;  i < innerspace; i++){
        printf(" ");
    }
    for(i = 0 ;  i < a; i++){
        printf("*");
    }
    printf("\n");
    innerspace = (innerspace*2)-1;
    outerspace = 1;
    for(i = 0; i < a-1;  i++){
        for(j = 0; j  < outerspace; j++){
            printf(" ");
        }
        printf("*");
        for(l = 0 ; l < innerspace; l++){
            printf(" ");
        }
        printf("*");
        printf("\n");
        innerspace-=2;
        outerspace++;
    }
    outerspace = a-2;
    innerspace = 1;
    for(i = 0; i < a-2; i++){
        for(j = 0; j < outerspace; j++){
            printf(" ");
        }
        printf("*");
        for(l = 0; l < outerspace; l++){
            printf(" ");
        }
        printf("*");
        for(j = 0;  j < innerspace; j++){
            printf(" ");
        }
        printf("*");
        for( j = 0; j < outerspace; j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
        outerspace --;
        innerspace+=4;
    }
    innerspace+=2;
    printf("*");
    for(j = 0; j < innerspace; j++){
        printf(" ");
    }
    printf("*");
    return 0;
}
