/********
Fichier: additionMatrices.c
Auteurs: Raphaël Denicourt denr6130
         Samuel Guertin    gues2290
Date: 24 Septembre 2025
Description: Additionne deux matrices de taille m par n.
********/
#include <stdio.h>

//Number of column for addition
const int n = 3;
//Number of rows of the matixes for addition
const int m = 3;

// Description: fonction qui additionne deux matrices de taille m par n
//Préconditions
// - Les trois matrices doivent être de taille n × m
// - les deux premières matrices doivent contenir des valeurs telles que leur somme est entre -2147483648 et 2147483647.
//Postconditions : 
//La matrice out contient des valeurs entre -2147483648 et 2147483647 qui sont la somme des valeurs de a et b.
void matrixAdder(int a[m][n], int b[m][n], int out[m][n]){
    for (int row = 0; row < m; row++){
        for (int col = 0; col < n; col++){
            out[row][col] = a[row][col] + b[row][col];
        }
    }
}


//Description: fonction de test
//Postconditions: 1 si le test échoue,  0 en réussite
int main()
{
    int result = 0;
    int out[m][n] = {};
    int a[m][n];
    int b[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            a[i][j] = i+j;
            b[i][j] = i*2+1;
        }
    }
    matrixAdder(a, b, out);
    int test[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if(out[i][j] != test[i][j])
            {
                result = 1;
            }
        }
    }
    printf("matrixAdder: %d\n",result);
}