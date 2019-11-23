/* 22.c
Programmas autors: A. Justs
Prg.veidota 2019 gada 23 novembrii
Versija: 0.0.1
Programma cikliskam robezhas e apreekjinam */

#include <stdio.h>
#include <math.h>

int main()
{
	int k; // cikla mainigais
	double lim; // robezhas mainigaa defineeshana

	for (k=1; k<=500; k++ )  // ja "k tuvojas veertiibai 500 = 2.715569"
	{
	lim = pow((1+1./k),k);
	printf("k=%d lim=%f \n", k, lim);
	}
}
