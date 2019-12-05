/* 34.c
Programmas autors: A. Justs
Prog.veidota 2019 gada 5 decembrii
Versija: 0.0.1

Masiva izveidoshana , aizpildishana un nolasishana */

# include <stdio.h>

int main()
{
int mas[100]; // izveido masiivu ar 100 elementiem
int i;

for(i=0; i<100; i++) // masiiva elementu inicializaacija
{
mas[i] = i*i; // tekoshais elements tiek noteikts kaa x*x
}

/* paraadit "masiiva" saturu */
for (i=0; i<100; i++)
printf ("%d %d \n", i, mas[i]);
}
