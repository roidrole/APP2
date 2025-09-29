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

//Description: fonction de test
//Postconditions: 1 si le test échoue,  0 en réussite
int main()
{
    /*
    int result = 0;
    if(findChar("you_mom_is_hat", 'a') != 12)
    {
        result = 1;
    }
    if(findChar("you_mom_is_hat", 'y') != 0)
    {
        result = 1;
    }
    if(findChar("you_mom_is_hat", 'z') != -1)
    {
        result = 1;
    }
    printf("\n findChar: %d\n",result);*/
    printf("Recherche du charactere n dans \"anticonstitutionnellement\". Attendu 1. Resultat: %d\n",findChar("anticonstitutionnellement",'n'));
    printf("Recherche du charactere e dans \"bonjour\". Attendu -1. Resultat: %d\n",findChar("bonjour",'e'));
    printf("Recherche du charactere r dans \"bonjour\". Attendu 6. Resultat: %d\n",findChar("bonjour",'r'));
    printf("Recherche du charactere a dans \"allocommentcava\". Attendu 0. Resultat: %d\n",findChar("allocommentcava",'a'));
}