#include <stdio.h>
/*************** variables*****************/
int iNumero[10];
int sais = 0;
int choice = 0;
/****************************proto**************************************/
void saisie ();
int choix();
void print ();
void croissant();
void decroissant();

/************************ definitions **********************************/
void saisie() {
    for (int x = 0; x < 10; x++) {
        printf("Entrez un nombre \n");
        scanf("%d", &sais);
        iNumero[x] = (sais);
    }

}

int choix() {

    printf("1-Tri croissant\n2-Tri décroissant\n");
    scanf("%i",&choice);
}

void print() {
    for (int x = 0; x < 10; x++) {
        printf("%i\n",iNumero[x]);
    }
}

void croissant() {
    int temp=0;
    for (int y = 0; y < 9; y++) {
    for (int x = 0; x < 9; x++) {
            if (iNumero[x] > iNumero[x + 1]) {
                temp = iNumero[x];
                iNumero[x] = iNumero[x + 1];
                iNumero[x + 1] = temp;
            }
        }
    }
}

void decroissant() {
    int temp = 0;
    for (int y = 0; y < 9; y++) {
        for (int x = 0; x < 9; x++) {
            if (iNumero[x] < iNumero[x + 1]) {
                temp = iNumero[x];
                iNumero[x] = iNumero[x + 1];
                iNumero[x + 1] = temp;
            }
        }
    }
}


int main() {
saisie();
choix();
if (choice ==1) {
    croissant();
    print();
} else{
    decroissant();
    print();
}
return 0;}
