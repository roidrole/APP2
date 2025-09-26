/********
Fichier: cos.c
Auteurs: Raphaël Denicourt denr6130
         Samuel Guertin    gues2290
Date: 24 Septembre 2025
Description: Calcule le cosinus d'une valeur
********/

const int COS_SUMMAND_AMOUNT = 9;

float cos(float in){
    float out = 0;
    for(int i = 0; i < COS_SUMMAND_AMOUNT; i++){
        out += getSign(i)*exponent(in, 2*i)/factorielle(2*i);
    }
    return out;
}
