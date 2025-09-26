/********
Fichier: cos.c
Auteurs: Raphaël Denicourt denr6130
         Samuel Guertin    gues2290
Date: 24 Septembre 2025
Description: Calcule le cosinus d'une valeur.
********/

const int SIN_SUMMAND_AMOUNT = 5;

//Description: fonction qui calcule le sinus
//Préconditions : La valeur entrante doit être entre -π et π
//Postconditions : Retourne une valeur entre 1 et -1

float sin(float in){
    float output = 0;
    for (int i = 0; i < SIN_SUMMAND_AMOUNT; i++){
        output += getSign(i)*exponent(in, 2*i+1)/factorielle(2*i+1);
    }
    return output;
}
