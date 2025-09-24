
#include <stdio.h>
#include <stdlib.h>

void entrerMatrice(int n, int m, float a[n][m]) {
    printf("Entrer les éléments de la matrice:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Élément [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }
}

void afficherMatrice(int n, int m, float a[n][m]) {
    printf("Matrice:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }
}

void produitMatrice(int n, int m, float a[n][m], float b[m][n], float p[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            p[i][j] = 0; // Initialiser l'élément à 0
            for (int k = 0; k < m; k++) {
                p[i][j] += a[i][k] * b[k][j]; // Produit matriciel
            }
        }
    }
}

int main() {
    int n, m;

    printf("Entrez le nombre de lignes de la première matrice: ");
    scanf("%d", &n);
    printf("Entrez le nombre de colonnes de la première matrice (et le nombre de lignes de la deuxième matrice): ");
    scanf("%d", &m);
    
    float a[n][m]; // Première matrice
    float b[m][n]; // Deuxième matrice
    float p[n][n]; // Matrice produit

    printf("Entrer la première matrice:\n");
    entrerMatrice(n, m, a);
    afficherMatrice(n, m, a);

    printf("Entrer la deuxième matrice:\n");
    entrerMatrice(m, n, b);
    afficherMatrice(m, n, b);

    produitMatrice(n, m, a, b, p);

    printf("Matrice produit:\n");
    afficherMatrice(n, n, p);

    return 0;
}
