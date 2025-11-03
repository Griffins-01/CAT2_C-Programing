/*
NAME:GRIFFINS NYAMWANGE NYANDUSI
REGNO:PA106/G/28742/25
DESCRIPTION:PROGRAM TO SHOW A 2D ARRAY
*/

#include<stdio.h>

int main(){
	
	int scores[2][2]={
		{65, 92},
		{84, 72}	
	};
	
	
	int i,j;
	
	for( i = 0 ; i < 2 ; i++){
		for( j = 0 ; j <2 ; j++){
			printf("%d ", scores[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}