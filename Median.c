
#include <stdio.h>

void entrerNombre(int n, float t[]) {
    for(int j = 0; j < n; j++) {
        printf("Entrer le nombre n°%d : ", j + 1);
        scanf("%f", &t[j]);
    }
}

void Tri(int n, float t[]) {
    float temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if(t[j] > t[j + 1]) {
                temp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = temp;
            }
        }
    }
}

float Median(int n, float t[]) {
    if(n % 2 != 0) {
        return t[n / 2]; // Pour un nombre impair d'éléments
    } else {
        return (t[n / 2 - 1] + t[n / 2]) / 2; // Pour un nombre pair d'éléments
    }
}

int main() {
    int n;
    printf("Entrer le nombre d'éléments de votre tableau : ");
    scanf("%d", &n);
    float t[n];
    entrerNombre(n, t);
    Tri(n, t);
    float median = Median(n, t);
    printf("La médiane des nombres est : %f\n", median);

    return 0;
}
