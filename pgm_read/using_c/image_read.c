#include<stdio.h>


void main(){
	FILE *p, *q;
	char a[10];
	char b[100];
	int col;
	int row;
	int max,j,i;
	p = fopen("sumit.pgm", "r");
	fscanf(p, "%s\n", a);
	fscanf(p, "%[^\n]\n", b);
	fscanf(p, "%d %d\n", &col, &row);
	fscanf(p, "%d\n", &max);
	int img[row][col];
	for(i = 0; i< row; i++){
		for(j = 0; j<col; j++){
			fscanf(p,"%d\n", &img[i][j]);		
		}	
	}
	fclose(p);
	q = fopen("output.pgm","w");
	fprintf(q, "%s\n", a);
	fprintf(q, "%s\n", b);
	fprintf(q, "%d %d\n", col, row);
	fprintf(q, "%d\n", max);
	for(i = 0; i< row; i++){
		for(j = 0; j<col; j++){
			fprintf(q,"%d\n", img[i][j]);		
		}	
	}
	fclose(q);
}
