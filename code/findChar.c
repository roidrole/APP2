/********
Fichier: findChar.c
Auteurs: Raphaël Denicourt denr6130
         Samuel Guertin    gues2290
Date: 24 Septembre 2025
Description: trouve la position de première instance d'un charactère dans un tableau de charactères
********/
#include <stdio.h>

// Description: fonction qui trouve la position de première instance d'un charactère dans un tableau de charactères
// Préconditions: 
// - le tableau de charactères doit contenir seulement des lettres arabes minuscules sans accents
// - le charactère doit être une lettre arabe minuscule
// Postconditions: 
// - Position de la première instance du charactère dans le tableau de charactères, ou -1
int trouveChar(char word[], char character)
{
    int i = -1;
    do {
        i++;
        if(word[i] == character){
            return i;
        }
    } while (word[i] != 0);
    return -1;
}

//Description: fonction de test
int main()
{
    printf("Tests pour la recherche de characteres:\n");
    printf("pour \"\" et lettre quelconque. Attendu -1. Resultat: %d\n",trouveChar("", 'a'));
    printf("pour \"abcd\" et 't'. Attendu -1. Resultat: %d\n",trouveChar("abcd", 't'));
    printf("pour \"abcd\" et 'a'. Attendu 0. Resultat: %d\n",trouveChar("abcd", 'a'));
    printf("pour \"abcd\" et 'c'. Attendu 2. Resultat: %d\n",trouveChar("abcd", 'c'));
    printf("pour \"acdc\" et 'c'. Attendu 1. Resultat: %d\n",trouveChar("acdc", 'c'));
    printf("pour \"ab/cd\" et '/'. Attendu 2. Resultat: %d\n",trouveChar("ab/cd", '/'));
    printf("pour \"voiciuntreslongmotafindetesterlecasoulemotesttreslongetlecharacterenestpasdanscemotmalgrelalongueurabsurdedeceluici\" et 'z'. Attendu -1. Resultat: %d\n",trouveChar("voiciuntreslongmotafindetesterlecasoulemotesttreslongetlecharacterenestpasdanscemotmalgrelalongueurabsurdedeceluici", 'z'));
}