
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int base()
{
    int taille, age, nombre1, nombre2, resultat, abs;
    const int PI = 3.14;

    taille = 175;
    age = 18;

    printf("Vous avez %d centimetres et %d ans\n", taille, age);
    //printf()
    printf("Entrez le nombre 1 : ");
    scanf("%d", &nombre1);
    printf("Entrez le nombre 2 : ");
    scanf("%d", &nombre2);
    resultat = nombre1 + nombre2;

    printf("%d + %d = %d\n", nombre1, nombre2, resultat);
    abs = fabs(resultat);
    // ceil() -> renvoi le premier nombre entier au dessus
    // floor() -> renvoi le premier nombre entier en dessous
    // pow(n1, n2) -> n1 a la puissance n2
    // sqrt() -> racine caree
    printf("la valeur absolu de %d est %d\n", resultat, abs);

    if(resultat >= 18 && resultat <= 77){
        printf("la Personne est majeure\n");
    }else if(resultat > 77){
        printf("la Personne est du 3e age\n");
    }
    else if(resultat >= 13){
        printf("la Personne est adolescente\n");
    }else{
        printf("la Personne est mineure\n");
    }

    switch(resultat){
    case 1:
        printf("tu es un bebe");
        break;
    case 5:
        printf("tu es un bebe +");
        break;
    default:
        printf("Oups je sais pas quoi dire");
        break;
    }

    return 0;
}
