 #include <stdio.h>
#include <stdlib.h>
int main (){
printf ("nama : fahrun nizar\n");
printf ("nim : F1B019051\n ");
printf ("kelompok : 11\n");

	char matrik1 [3][3][3];
	int i, j, hasil [3][3];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Masukkan nilai matrik %i,%i = ", i, j);
	scanf("%s", &matrik1[i][j]);
		}
	}
	printf("\n");
	printf("nilai matrik dengan array 3 dimensi = \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
		hasil [i][j] = atoi (matrik1[i][j]); 
		printf("%i ", hasil[i][j]);
	}
		printf("\n");
	}
}

