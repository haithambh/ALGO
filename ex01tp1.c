#include <stdio.h> 

int main() {
    
    char matrix[5][5] = {
        {1, 2, 3, 4, 5},
        {7, 'a', 'b', 'c', 'd'},
        {6, 9, 4, 'z', 8},
        {5, 6, 'p', -3, 9},
        {2, 9, 't', 'm', 'k'}
    };
    
    // 1.1 - Afficher la matrice complète
    printf("La matrice complète :\n");  
    for (int i = 0; i < 5; i++) {  
        for (int j = 0; j < 5; j++) { 
            printf("%3c ", matrix[i][j]);  
        }
        printf("\n"); 
    }

   
    printf("\nLa matrice (lignes à indices pairs seulement) :\n");  
    for (int i = 0; i < 5; i += 2) {  
        for (int j = 0; j < 5; j++) {  
            printf("%3c ", matrix[i][j]); 
        }
        printf("\n");  // Passer à la ligne suivante après chaque ligne
    }

   
    printf("\nLa matrice (éléments d'indice impair dans chaque ligne) :\n");  
    for (int i = 0; i < 5; i++) { 
        for (int j = 1; j < 5; j += 2) { 
            printf("%3c ", matrix[i][j]);  
        }
        printf("\n");  // Passer à la ligne suivante après chaque ligne
    }

   
    printf("\nDiagonale principale : "); 
    for (int i = 0; i < 5; i++) {  // Parcourir les indices de 0 à 4
        printf("%3c ", matrix[i][i]);  
    }

    printf("\nDiagonale secondaire : ");  
    for (int i = 0; i < 5; i++) { 
        printf("%3c ", matrix[i][4 - i]);  
printf("\n"); 

    return 0;
}
}
