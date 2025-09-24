
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

void sommeMatrice(int n, int m, float a[n][m], float b[n][m], float rst[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rst[i][j] = a[i][j] + b[i][j];
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

int main() {
    int n, m;

    printf("Entrer le nombre de lignes de la matrice: ");
    scanf("%d", &n);
    printf("Entrer le nombre de colonnes de la matrice: ");
    scanf("%d", &m);

    float a[n][m], b[n][m], rst[n][m];

    printf("Entrer la première matrice:\n");
    entrerMatrice(n, m, a);
    
    printf("Entrer la deuxième matrice:\n");
    entrerMatrice(n, m, b);

    sommeMatrice(n, m, a, b, rst);

    printf("La somme des matrices est:\n");
    afficherMatrice(n, m, rst);

    return 0;
}
