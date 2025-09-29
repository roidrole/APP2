/********
Fichier: cos.c
Auteurs: Raphaël Denicourt denr6130
         Samuel Guertin    gues2290
Date: 24 Septembre 2025
Description: Calcule le cosinus d'une valeur
********/

#include <math.h>
#include <stdio.h>

//Une valeur supérieure à 6 brise la précondition de fatorielle(2*i)
const int COS_SUMMAND_AMOUNT = 6;
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

//Description: fonction qui calcule le cosinus
//Préconditions : La valeur entrante doit être entre -π et π
//Postconditions : Retourne une valeur entre 1 et -1
float cosinus(float in){
    float out = 0;
    for(int i = 0; i < COS_SUMMAND_AMOUNT; i++){
        out += signe(i)*puissance(in, 2*i)/factorielle(2*i);
    }
    return out;
}

//Description: fonction de test
//Postconditions: 1 si le test échoue,  0 en réussite
int main()
{
    printf("Tests pour le cosinus\n");
    printf("Pour %f: Attendu: %f, Recu: %f\n", 0.0F, cos(0), cosinus(0));
    printf("Pour %f: Attendu: %f, Recu: %f\n", 1.0F, cos(1), cosinus(1));
    printf("Pour %f: Attendu: %f, Recu: %f\n", -PI, cos(-PI), cosinus(-PI));
    printf("Pour %f: Attendu: %f, Recu: %f\n", PI, cos(PI), cosinus(PI));
    printf("Pour %f: Attendu: %f, Recu: %f\n", PI/2, cos(PI/2), cosinus(PI/2));
    printf("Pour %f: Attendu: %f, Recu: %f\n", PI/4, cos(PI/4), cosinus(PI/4));
}