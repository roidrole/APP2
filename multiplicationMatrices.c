/********
Fichier: multiplicationMatrices.c
Auteurs: Raphaël Denicourt denr6130
         Samuel Guertin    gues2290
Date: 26 Septembre 2025
Description: Multiplie ensemble deux matrices carrés de taille n par n
********/

//Dimension des matrices carrées à multiplier (n × n)
//const int n = 3;

// Description: fonction qui multiplie ensemble deux matrices de taille n par n
// Préconditions: 
// - Les trois matrices doivent être de taille n × m
// - les deux premières matrices doivent contenir des valeurs telles que les valeurs de la matrice produite soient toutes entre -2147483648 et 2147483647.
// Postconditions: 
// - La matrice 
void matrixMutliplier(int a[n][n], int b[n][n], int out[n][n]){
    for (int row = 0; row < n; row++){
        for (int col = 0; col < n; col++){
            out[row][col] = 0;
            for (int i = 0; i < n; i++){
                out[row][col] += (a[row][i] * b[i][col]);
            }
        }
    }
}