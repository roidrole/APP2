/********
Fichier: main.c
Auteurs: Raphaël Denicourt denr6130
         Samuel Guertin    gues2290
Date: 24 Septembre 2025
Description: Fichier responsable de tester les fonctions des autres fichiers
********/

#include <stdio.h>
//#include "lib.c" 
#include "lib.c"
#include "findChar.c"
#include "palindrome.c"
#include "sin.c"
#include "cos.c"
#include "additionMatrices.c"
#include "multiplicationMatrices.c"


//Setting these to values such that 2*(value-1) + 1 ­>= 17 results in int overflow
//Could use long/unsinged int for more possible values
const float PI = 3.1415926535897932384626433832795;
/*
//Libraries
int factorielle(int in) {
    int total = 1;
    for(int i=1; i <= in;i++){
        total *= i;
    }
    return total;
}

double exponent(double base, int exponent){
    if(exponent == 0){
        return 1;
    }
    const double multiplier = base;
    for (int i = 1; i < exponent; i++){
        base *= multiplier;
    }
    return base;
}

//A function that returns -1 if input is event, or 1 if input is odd.
int getSign(int input){
    if(input % 2 == 0){
        return 1;
    } else {
        return -1;
    }
}
*/

void matrixAddPrinter(int matrice[m][n]){
    for(int x = 0; x < n;x++)
    {
        for(int y = 0; y < m;y++)
        {
            printf("%d ", matrice[x][y]);
        }
        printf("\n");
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

int main(){
    printf("findChar\n");
    printf("%d\n", findChar("you_mom_is_hat", 'a'));
    printf("%d\n", findChar("you_mom_is_hat", 'y'));
    printf("palindromeCheck\n");
    printf("%d\n",palindromeCheck("a"));
    printf("%d\n",palindromeCheck("aabb"));
    printf("%d\n",palindromeCheck("aba"));
    printf("%d\n",palindromeCheck("abab"));
    printf("%d\n",palindromeCheck("aabbaa"));
    printf("%d\n",palindromeCheck(""));

    printf("factorielle\n");
    printf("%d\n", factorielle(1));
    printf("%d\n", factorielle(5));
    printf("%d\n", factorielle(10));
    printf("%d\n", factorielle(12));
    //Ne donne pas la valeur de 13!
    printf("%d\n", factorielle(13));
    
    printf("****sin*****\n");
    printf("%f\n",sin(0));
    printf("%f\n",sin(1));
    printf("%f\n",sin(-PI));
    printf("%f\n",sin(PI));
    printf("%f\n",sin(PI/2));
    printf("%f\n",sin(PI/4));

    printf("****cos*****\n");
    printf("%f\n",cos(0));
    printf("%f\n",cos(1));
    printf("%f\n",cos(-PI));
    printf("%f\n",cos(PI));
    printf("%f\n",cos(PI/2));
    printf("%f\n",cos(PI/4));
    
    int out[m][n] = {};
    int a[m][n];
    int b[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            a[i][j] = i+j;
            b[i][j] = i*2+1;
        }
    }
    //a[0][0] = 0;
    a[0][1] = 2;
    printf("\nMatrix a:\n");
    matrixAddPrinter(a);
    printf("\nMatrix b:\n");
    matrixAddPrinter(b);
    printf("\nMatrix a + b:\n");
    matrixAdder(a, b, out);
    matrixAddPrinter(out);
    printf("\nMatrix a × b:\n");
    matrixMutliplier(a, b, out);
    matrixMultPrinter(out);
}