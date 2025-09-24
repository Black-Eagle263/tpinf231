
#include <stdio.h>

void entrerNombbre(int n, float t[]) {
    for(int j = 0; j < n; j++) {
        printf("Entrer le nombre n°%d : ", j + 1);
        scanf("%f", &t[j]);
    }
}

void Recherche(int n, float nb, float t[]) {
    printf("Veuillez entrer le numéro du nombre recherché :\n");
    scanf("%f", &nb);
    int f = 0; // Pour savoir si le nombre a été trouvé
    for(int i = 0; i < n; i++) {
        if( i+1 == nb) {
            printf("Le nombre cherché est %f\n",t[i]);
            f = 1; // Mettre à jour si trouvé
            break; 
        }
    }
    if (!f) {
        printf("Le nombre %f n'a pas été trouvé dans le tableau.\n", nb);
    }
}

int main() {
    int n;
    float nb;
    printf("Veuillez entrer le nombre d'éléments de votre tableau :\n");
    scanf("%d", &n);
    float t[n]; 
    entrerNombbre(n, t);
    Recherche(n, nb, t);

    return 0; 
}
