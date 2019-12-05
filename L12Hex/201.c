/* 201.c
Programmas autors: A. Justs
Programma veidota 2019. gada 5. decembrii
Versija : 0.0.1
Programma paarveido graadus radiaanos peec lietotaaja ievades
*/

#include <stdio.h>
#include <math.h>

int main()
{

	float degrees;
	printf("Ievadi graadus:\t");
	scanf("%f", &degrees);  // Ievada graadus, decimaalskaitlis

	float radians = degrees * M_PI / 180.0; // Apreekina radiaanus
		
	printf("%.2f graadi ir %.2f radiaani.\n", degrees, radians);

}
