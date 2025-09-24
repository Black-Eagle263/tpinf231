#include <stdio.h>

// Fonction pour incrémenter une variable
int increment(int x) {
    return x + 1;
}

// Fonction pour additionner deux entiers en utilisant seulement +1
int addition(int a, int b) {
    int result = a;
    for (int i = 0; i < b; i = increment(i)) {
        result = increment(result);
    }
    return result;
}

// Fonction pour multiplier deux entiers en utilisant seulement +1
int multiplication(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i = increment(i)) {
        result = addition(result, a);
    }
    return result;
}

int main() {
    int a, b;

    printf("Entrez deux entiers positifs a et b :\n");
    scanf("%d %d", &a, &b);

    if (a > 0 && b > 0) {
        int produit = multiplication(a, b);
        printf("Le produit de %d et %d est : %d\n", a, b, produit);
    } else {
        printf("Les valeurs doivent être strictement positives.\n");
    }

    return 0;
}

