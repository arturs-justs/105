/* 21.c
Programmas autors: A. Justs
Prg.veidota 2019 gada 23 novembrii
Versija: 0.0.1
Programma paraada iespeejamo datu tipa paarpluudi */

#include <stdio.h>
#include <limits.h>
int  main()
{
	int a = 50000; // 50,000
	int b = 1000000; // 1,000,000
	int c = a * b; // Gaidāmais rezultāts ir 50000000000

	printf("int datu tipa izmers ir: %d baiti \n", sizeof(int) );
	printf("Apreekjinam a un b reizinaajumu: \n" );
	printf("a = %d, b = %d \n", a, b);
	printf("c = a * b = %d * %d = %d \n", a,b,c ); // rezultāts uz ekrāna : -1539607552
}
