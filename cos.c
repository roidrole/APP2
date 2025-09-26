/********
Fichier: cos.c
Auteurs: Raphaël Denicourt denr6130
         Samuel Guertin    gues2290
Date: 24 Septembre 2025
Description: Calcule le cosinus d'une valeur
********/

//Une valeur supérieure à 9 brise la précondition de lib.fatorielle(2*i)
const int COS_SUMMAND_AMOUNT = 6;

//Description: fonction qui calcule le cosinus
//Préconditions : La valeur entrante doit être entre -π et π
//Postconditions : Retourne une valeur entre 1 et -1

float cos(float in){
    float out = 0;
    for(int i = 0; i < COS_SUMMAND_AMOUNT; i++){
        out += getSign(i)*exponent(in, 2*i)/factorielle(2*i);
    }
    return out;
}
