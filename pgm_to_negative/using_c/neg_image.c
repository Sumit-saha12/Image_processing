#include <stdio.h>
void main()
{
FILE *p;
int row, col, max;
char a[10], b[100];
p = fopen ("sumit.pgm","r");
fscanf(p,"%s\n",a);
fscanf(p,"%[^\n]\n",b);
fscanf(p,"%d%d\n",&col, &row);
fscanf(p,"%d\n",&max); 

int m[row][col];

for (int i = 0; i < row; i++)
{
for (int j = 0; j < col; j++)
{
fscanf(p,"%d\n",&m[i][j]);
}
}
fclose(p);

FILE *q;
q = fopen("neg_output.pgm","w");
fprintf(q,"%s\n",a);
fprintf(q,"%s\n",b);
fprintf(q,"%d %d\n",col, row); 
fprintf(q,"%d\n",max);
for (int i = 0; i < row; i++)
{
for (int j = 0; j < col; j++)
{
fprintf(q,"%d\n",max-m[i][j]);
}
}
fclose(q);
}
