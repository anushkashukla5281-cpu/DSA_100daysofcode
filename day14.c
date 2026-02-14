#include <stdio.h>
int main() {
int n, i, j, flag = 1;
scanf("%d", &n);
int a[n][n];
for(i = 0; i < n; i++)
for(j = 0; j < n; j++)
scanf("%d", &a[i][j]);
for(i = 0; i < n; i++)
for(j = 0; j < n; j++)
if((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0))
flag = 0;
if(flag)
printf("Identity Matrix");
else
printf("Not an Identity Matrix");
return 0;
}