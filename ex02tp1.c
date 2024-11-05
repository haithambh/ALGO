#include <stdio.h>  

int main() {
    
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };


    printf("La matrice initiale :\n");  
    for (int i = 0; i < 4; i++) {  
        for (int j = 0; j < 4; j++) {  
            printf("%3d ", matrix[i][j]);  
        }
        printf("\n");  
    }

    for (int i = 1; i < 4; i++) {  
        for (int j = 0; j < i; j++) {  
            int temp = matrix[i][j];  
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;  
        }
    }

  
    printf("\nLa matrice après l'échange :\n");  
    for (int i = 0; i < 4; i++) {  
        for (int j = 0; j < 4; j++) {  
            printf("%3d ", matrix[i][j]);  
        }
        printf("\n");  
    }

    return 0;  
}
