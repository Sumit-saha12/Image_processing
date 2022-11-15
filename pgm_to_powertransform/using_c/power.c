#include <stdio.h>
#include <math.h>
int main(){
    FILE *p;
    int i,j,row,col,max,s;
    char a[10],b[100];
    p=fopen("sumit.pgm","r");
    fscanf(p,"%s\n",a);
    fscanf(p,"%[^\n]\n",b);
    fscanf(p,"%d %d\n",&col,&row);
    fscanf(p,"%d\n",&max);

    int m[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            fscanf(p,"%d/n",&m[i][j]);
        }
    }
    fclose(p);

    FILE *q;
    q=fopen("output.pgm","w");
    fprintf(p,"%s\n",a);
    fprintf(p,"%s\n",b);
    fprintf(p,"%d %d\n",col,row);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            s=2*pow (m[i][j],(1/2.5));
            fprintf(q,"%d\n",s);
            // fprintf("%d",s);
        }
    }
    fclose(q);
    return 0;
}