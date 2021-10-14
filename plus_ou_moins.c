#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int plus_ou_noins()
{
    int nombreMystere, nombre, coups = 1, niveau, max, min, jeu, jouer_encore;

    jeu = 1;

    while(jeu){
        printf("----- CHOISIR LA DIFFICULTE -----\n");
        printf("1. De 1 a 100 \n");
        printf("2. De 1 a 1000 \n");
        printf("3. De 1 a 10000 \n");
        scanf("%d", &niveau);

        switch(niveau){
        case 1:
            max = 100;
            min = 1;
            break;
        case 2:
            max = 1000;
            min = 1;
            break;
        case 3:
            max = 10000;
            min = 1;
            break;
        default:
            printf("Vous avez selectionne ni 1, 2 ou 3. On vous attribu la difficulte 2.\n\n");
            max = 1000;
            min = 1;
            break;
        }

        srand(time(NULL));
        nombreMystere = (rand() % (max - min + 1)) + min;

        printf("Quel est le nombre ?\n");
        scanf("%d", &nombre);

        while(nombre != nombreMystere){
            if (nombre > nombreMystere){
                printf("Le nombre saisi est grand\n");
                printf("Quel est le nombre ?\n");
                scanf("%d", &nombre);
                coups++;
            }
            if (nombre < nombreMystere){
                printf("Le nombre saisi est petit\n");
                printf("Quel est le nombre ?\n");
                scanf("%d", &nombre);
                coups++;
            }
        }

        if (nombre == nombreMystere){
            printf("Vous avez trouve le nombre en %d coup(s) \n", coups);
        }

        printf(" Voulez-vous rejouer ( appuyez  pour 1 oui et tout autre chiffre pour non ) ?\n");
        scanf("%d", &jouer_encore);

        if ( jouer_encore == 1) {
            jeu = 1;
        } else {
            jeu = 0;
        }
    }

    return 0;
}

