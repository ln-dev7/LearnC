#include <stdio.h>
#include <stdlib.h>

// void nom_fonction(){} // Quand une fonction ne retourne rien on l'ecrit ainsi.


double conversion(double euros)
{

    double francs = 0;

    francs = 655.5 * euros;

    return francs;
}

void punition(int nombre_de_lignes)
{
        int i;
        for(i = 0; i < nombre_de_lignes; i++)
        {
            printf("Je dois coder chaque jour !!!\n");
        }
}

void aire_rectangle(double longueur, double largeur)
{
    double aire = 0;
    aire = longueur * largeur;
    printf("Le rectangle pour longueur %f et pour largeur %f a une aire de %f metre caree.\n", longueur, largeur, aire);
}

int les_fonctions()
{
    printf("10 Euros = %fFCFA\n", conversion(10));
    punition(7);
    aire_rectangle(30, 5);

    return 0;
}
