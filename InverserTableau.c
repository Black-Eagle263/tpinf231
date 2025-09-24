
#include <stdio.h>

void entrerNombre(int n, float t[]) {
    for (int j = 0; j < n; j++) {
        printf("Entrer le nombre n°%d : ", j + 1);
        scanf("%f", &t[j]);
    }
}

void inverserTab(int n, float t[], float b[]) {
    for (int i = 0; i < n; i++) {
        b[i] = t[n - 1 - i]; // Inverse les éléments
    }
}

void afficherTab(int n, float t[]) {
    printf("Tableau inversé : ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", t[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Entrer le nombre d'éléments : ");
    scanf("%d", &n);

    float t[n]; // Tableau original
    float b[n]; // Tableau inversé

    entrerNombre(n, t);
    inverserTab(n, t, b);
    afficherTab(n, b);

    return 0;
}
