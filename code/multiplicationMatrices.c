/********
Fichier: multiplicationMatrices.c
Auteurs: Raphaël Denicourt denr6130
         Samuel Guertin    gues2290
Date: 26 Septembre 2025
Description: Multiplie ensemble deux matrices carrés de taille n par n
********/

#include <stdio.h>

//Dimension des matrices carrées à multiplier (n × n)
const int n = 3;

// Description: fonction qui multiplie ensemble deux matrices de taille n par n
// Préconditions: 
// - Les trois matrices doivent être de taille n × m
// - les deux premières matrices doivent contenir des valeurs telles que les valeurs de la matrice produite soient toutes entre -2147483648 et 2147483647.
// Postconditions: 
// - La matrice 
void matrixMultiplier(int a[n][n], int b[n][n], int out[n][n]){
    for (int row = 0; row < n; row++){
        for (int col = 0; col < n; col++){
            out[row][col] = 0;
            for (int i = 0; i < n; i++){
                out[row][col] += (a[row][i] * b[i][col]);
            }
        }
    }
}

void matrixMultPrinter(int matrice[n][n]){
    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < n;y++)
        {
            printf("%d ", matrice[x][y]);
        }
        printf("\n");
    }
}


//Description: fonction de test
int main()
{
    int result = 0;
    int out[n][n] = {};
    int a[n][n];
    int b[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            a[i][j] = i+j;
            b[i][j] = i*2+1;
        }
    }
    matrixMultiplier(a, b, out);
    int test[3][3] = {{13,13,13},{22,22,22},{31,31,31}};

    printf("Tests pour la multiplication de matrices: \n");
    printf("Matrice 1:\n");
    matrixMultPrinter(a);
    printf("\nMatrice 2:\n");
    matrixMultPrinter(b);
    printf("\nMatrice de retour attendue\n");
    matrixMultPrinter(test);
    printf("\nMatrice de retour recue\n");
    matrixMultPrinter(out);
}