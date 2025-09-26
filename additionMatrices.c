/********
Fichier: additionMatrices.c
Auteurs: Raphaël Denicourt denr6130
         Samuel Guertin    gues2290
Date: 24 Septembre 2025
Description: Additionne deux matrices de taille m par n.
********/


//Number of column for addition
const int n = 3;
//Number of rows of the matixes for addition
const int m = 3;

// Description: fonction qui additionne deux matrices de taille m par n
// - Les trois matrices doivent être de taille n × m
// - les deux premières matrices doivent contenir des valeurs telles que leur somme est entre -2147483648 et 2147483647.
void matrixAdder(int a[m][n], int b[m][n], int out[m][n]){
    for (int row = 0; row < m; row++){
        for (int col = 0; col < n; col++){
            out[row][col] = a[row][col] + b[row][col];
        }
    }
}