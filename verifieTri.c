
#include <stdio.h>


void entrerNombre(int n, float t[]) {
    for(int j = 0; j < n; j++) {
        printf("Entrer le nombre n°%d : ", j + 1);
        scanf("%f", &t[j]);
    }
}


int Tri(int n, float t[]) {
    for(int i = 0; i < n - 1; i++) {
        if(t[i] > t[i + 1]) {
            return 0; // Retourne 0 si le tableau n'est pas trié
        }
    }
    return 1; // Retourne 1 si le tableau est trié
}

int main() {
    int n;

    printf("Veuillez entrer le nombre d'éléments de votre tableau :\n");
    scanf("%d", &n);
    float t[n]; // Déclaration du tableau

    entrerNombre(n, t); 

    if(Tri(n, t)) {
        printf("Les éléments sont triés dans l'ordre croissant.\n");
    } else {
        printf("Les nombres ne sont pas triés.\n");
    }

    return 0; 
}
