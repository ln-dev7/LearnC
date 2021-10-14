#include <stdio.h>
#include <stdlib.h>

void triplePointeur(int *pointeurSurNombre);
void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes);


int main(int argc, char *argv[])
{
    int age = 18;
    int *pointeurSurAge = &age;
    printf("L'adresse de la variable age est : %d\n", &age);
    printf("La valeur de la variable pointeurSurAge est : %d\n", *pointeurSurAge);

    int nombre = 5;

    triplePointeur(&nombre); // On envoie l'adresse de nombre à la fonction
    printf("%d\n", nombre); // On affiche la variable nombre. La fonction a directement modifié la valeur de la variable car elle connaissait son adresse

    int heures = 0, minutes = 90;
    decoupeMinutes(&heures, &minutes);
    printf("%d heures et %d minutes", heures, minutes);

    return 0;
}

void triplePointeur(int *pointeurSurNombre)
{
    *pointeurSurNombre *= 3; // On multiplie par 3 la valeur de nombre
}

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes)
{
    *pointeurHeures = *pointeurMinutes / 60;
    *pointeurMinutes = *pointeurMinutes % 60;
}
