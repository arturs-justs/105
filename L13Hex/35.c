  /* 34.c
Programmas autors: A. Justs
Prog.veidota 2019 gada 5 decembrii
Versija: 0.0.1
Masiva izveidoshana , aizpildishana un nolasishana */

#include <stdio.h>
#include <math.h>

 int main()
 {
 float mas[101]; // izveido masiivu ar 10 elementiem
 int i;

 for(i=0; i<101; i++) // masiiva elementu inicializaacija
 {
 mas[i] = sqrt(i); // tekoshais elements tiek noteikts kaa x*x
 }
 /* paraadit "masiiva" saturu */
 for (i=0; i<101; i++)
 printf ("%d %f\n", i, mas[i]);
 }
