/********
Fichier: findChar.c
Auteurs: Raphaël Denicourt denr6130
         Samuel Guertin    gues2290
Date: 24 Septembre 2025
Description: Librairies nécessaires au fonctionnement d'autres fonctions
********/


// Description: fonction qui vérifie si le mot provenu est un palindrome
// Préconditions:
// - in doit être inférieur ou égal à 12
// Postconditions: 
// - retourne 1 si le tableau de charactères contient un palindrome, et retounre 0 sinon
__u_int factorielle(int in) {
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