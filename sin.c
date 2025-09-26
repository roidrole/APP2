/********
Fichier: sin.c
Auteurs: Raphaël Denicourt denr6130
         Samuel Guertin    gues2290
Date: 24 Septembre 2025
Description: Calcule le sinus d'une valeur à deux décimales de précision.
********/

#include <math.h>
#include <stdio.h>

//Une valeur supérieure à 6 brise la précondition de lib.fatorielle(2*i)
const int SIN_SUMMAND_AMOUNT = 6;
const float PI = 3.1415926535897932384626433832795;


//Description: fonction qui calcule la factorielle d'un nombre
//Préconditions : in <= 12 (integer overflow)
//Postconditions : Entier qui est la factorielle de in
int factorielle(int in) {
    int total = 1;
    for(int i=1; i <= in;i++){
        total *= i;
    }
    return total;
}

//Description: fonction qui calcule l'exposant
//Préconditions : Des intrants tels que le résultat est inférieur à un très grand nombre. Les limites sont à la factorielle
//Postconditions : Entier qui est la factorielle de in
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

//Description: fonction qui détermine le signe du prochain terme d'une série alternée
//Préconditions : Entier
//Postconditions : -1 (impair) ou 1 (pair)
int getSign(int input){
    if(input % 2 == 0){
        return 1;
    } else {
        return -1;
    }
}

//Description: fonction qui calcule le sinus
//Préconditions : La valeur entrante doit être entre -π et π
//Postconditions : Retourne une valeur entre 1 et -1
float sinus(float in){
    float output = 0;
    for (int i = 0; i < SIN_SUMMAND_AMOUNT; i++){
        output += getSign(i)*exponent(in, 2*i+1)/factorielle(2*i+1);
    }
    return output;
}

//Description: fonction de test
//Postconditions: 1 si le test échoue,  0 en réussite
int main()
{
    int result = 0;
    if(fabs(sinus(0)-sin(0)) > 0.01)
    {
        result = 1;
    }
    if(fabs(sinus(1)-sin(1)) > 0.01)
    {
        result = 1;
    }
    if(fabs(sinus(-PI)-sin(-PI)) > 0.01)
    {
        result = 1;
    }
    if(fabs(sinus(PI)-sin(PI)) > 0.01)
    {
        result = 1;
    }
    if(fabs(sinus(PI/2)-sin(PI/2)) > 0.01)
    {
        result = 1;
    }
    if(fabs(sinus(PI/4)-sin(PI/4)) > 0.01)
    {
        result = 1;
    }
    printf("\n sinus: %d\n",result);
}