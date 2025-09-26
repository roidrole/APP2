#include <stdio.h>
#include "findChar.h"
#include "palindrome.h"
#include "sin.h"
#include "cos.h"
#include "additionMatrices.h"
#include "lib.h"

//Setting these to values such that 2*(value-1) + 1 ­>= 17 results in int overflow
//Could use long/unsinged int for more possible values
const int SIN_SUMMAND_AMOUNT = 9;
const int COS_SUMMAND_AMOUNT = SIN_SUMMAND_AMOUNT;
//Size of square matrixes for multiplication and number of column for addition
const int n = 3;
//Number of rows of the matixes for addition
const int m = 3;
const float PI = 3.1415926535897932384626433832795;

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

int findChar(char word[], char character){
    int i = -1;
    do {
        i++;
        if(word[i] == character){
            return i;
        }
    } while (word[i] != 0);
    return -1;
}

int palindromeCheck(char string[]){
    int stringLength = findChar(string,0);
    int j = stringLength;
    for(int i = 1;i < stringLength/2;i++)
    {
        j--;
        if(string[i] != string[j])
        {
            return 0;
        }
    }
    return 1;
}

float sin(float in){
    float output = 0;
    for (int i = 0; i < SIN_SUMMAND_AMOUNT; i++){
        output += getSign(i)*exponent(in, 2*i+1)/factorielle(2*i+1);
    }
    return output;
}

float cos(float in){
    float out = 0;
    for(int i = 0; i < COS_SUMMAND_AMOUNT; i++){
        out += getSign(i)*exponent(in, 2*i)/factorielle(2*i);
    }
    return out;
}

void matrixAddPrinter(int matrice[m][n]){
    for(int y = 0; y < n;y++)
    {
        for(int x = 0; x < m;x++)
        {
            printf("%d ", matrice[x][y]);
        }
        printf("\n");
    }
}

void matrixMultPrinter(int matrice[n][n]){
    for(int y = 0; y < n; y++)
    {
        for(int x = 0; x < n;x++)
        {
            printf("%d ", matrice[x][y]);
        }
        printf("\n");
    }
}

void matrixAdder(int a[m][n], int b[m][n], int out[m][n]){
    for (int row = 0; row < m; row++){
        for (int col = 0; col < n; col++){
            out[row][col] = a[row][col] + b[row][col];
        }
    }
}

void matrixMutliplier(int a[n][n], int b[n][n], int out[n][n]){
    for (int row = 0; row < n; row++){
        for (int col = 0; col < n; col++){
            out[row][col] = 0;
            for (int i = 0; i < n; i++){
                out[row][col] += (a[row][n] * b[n][col]);
            }
        }
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

    printf("****sin*****\n");
    printf("%f\n",sin(0));
    printf("%f\n",sin(1));
    printf("%f\n",sin(-PI));
    printf("%f\n",sin(PI/2));
    printf("%f\n",sin(PI/4));

    printf("****cos*****\n");
    printf("%f\n",cos(0));
    printf("%f\n",cos(1));
    printf("%f\n",cos(-PI));
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