/********
Fichier: sin.c
Auteurs: Raphaël Denicourt denr6130
         Samuel Guertin    gues2290
Date: 24 Septembre 2025
Description: Calcule le sinus d'une valeur à deux décimales de précision.
********/

#include <math.h>
#include <stdio.h>

//Une valeur supérieure à 6 brise la précondition de fatorielle(2*i)
const int SIN_SUMMAND_AMOUNT = 6;
const float PI = 3.1415926535897932384626433832795;


//Description: fonction qui calcule la factorielle d'un nombre
//Préconditions : in <= 12 pour éviter de dépasser les limites du int
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
//Postconditions : résultat du calcul de la puissance
double puissance(double base, int exponent){
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
int signe(int input){
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
        output += signe(i)*puissance(in, 2*i+1)/factorielle(2*i+1);
    }
    return output;
}

//Description: fonction de test
int main()
{
    printf("Tests pour le sinus\n");
    printf("Pour %f: Attendu: %f, Recu: %f\n", 0.0F, sin(0), sinus(0));
    printf("Pour %f: Attendu: %f, Recu: %f\n", 1.0F, sin(1), sinus(1));
    printf("Pour %f: Attendu: %f, Recu: %f\n", -PI, sin(-PI), sinus(-PI));
    printf("Pour %f: Attendu: %f, Recu: %f\n", PI, sin(PI), sinus(PI));
    printf("Pour %f: Attendu: %f, Recu: %f\n", PI/2, sin(PI/2), sinus(PI/2));
    printf("Pour %f: Attendu: %f, Recu: %f\n", PI/4, sin(PI/4), sinus(PI/4));
}