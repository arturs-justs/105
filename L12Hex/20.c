/* 20.c
Programmas autors: A. Justs
Prg.veidota 2019 gada 23 novembrii
Versija: 0.0.1
Programma mani iztaujaa un veic apreekjinus lietojot user-funkctions */

#include <stdio.h>

void f61()
{
	printf("Sveiks, kaa Tevi sauc?: \n"); // datu ievade
}
void f62()
{
	printf("Kaads ir Tavs vecums?: \n"); // datu ievade
}
void f63()
{
	printf("Cik liels Tu esi augumaa? (Augumsmetros): \n"); // datu ievade
}

int main()
{
	char vards[20]; // Simbolu virkne - masiivs.(20 simboli)
	int vecums;
	float augums;

	f61(); // tiek izsaukta f-ja f61
	scanf("%s", vards); // skanee simbolu virkni (string)
	f62(); // tiek izsaukta f-ja f62
	scanf("%d", &vecums); // Esi veeriigs ar ampersanda ziimi!
	f63(); // tiek izsaukta f-ja f63
	scanf("%f", &augums); // //Decimaalatdaliitaajs ir punktasimbols: "."
	printf("Mans vards ir: %s \n", vards );
	printf("Esmu: %d gadus jauns, %d. gadaprodukts \n", vecums, 2019-vecums);
	printf("Garumaa esmu padevies: %f cm \n", augums*100 );
}
