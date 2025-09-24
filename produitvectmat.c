#include <stdio.h>

void produit_vecteur_matrice(int vecteur[], int lignes, int colonnes, int matrice[][colonnes], int resultat[]) {
    for (int j = 0; j < colonnes; j++) {
        resultat[j] = 0;
        for (int i = 0; i < lignes; i++) {
            resultat[j] += vecteur[i] * matrice[i][j];
        }
    }
}

void afficher_vecteur(int vecteur[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", vecteur[i]);
    }
    printf("\n");
}

int main() {
    // Exemple : vecteur de taille 3, matrice 3x2
    int vecteur[3] = {1, 2, 3};
    int matrice[3][2] = {
        {4, 5},
        {6, 7},
        {8, 9}
    };
    int resultat[2];

    produit_vecteur_matrice(vecteur, 3, 2, matrice, resultat);

    printf("Résultat du produit vecteur × matrice : ");
    afficher_vecteur(resultat, 2);

    return 0;
}

