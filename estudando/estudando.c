#include <stdio.h>
int main() {
 int dias, meses, anos, nasceu, ano;
 printf("Ano de nascimento:");
 scanf("%i", &nasceu);
 
anos = 2024 - nasceu ;

printf("meses = %i \n", anos * 12 );
printf("dias = %i \n", anos * 365 );
printf("anos = %i \n", anos );

}