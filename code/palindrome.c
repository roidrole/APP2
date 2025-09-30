/********
Fichier: palindrome.c
Auteurs: Raphaël Denicourt denr6130
         Samuel Guertin    gues2290
Date: 24 Septembre 2025
Description: Vérifie si le mot provenu est un palindrome
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

// Description: fonction qui vérifie si le mot provenu est un palindrome
// Préconditions:
// - le tableau de charactères doit contenir seulement des lettres arabes minuscules sans accents
// Postconditions: 
// - retourne 1 si le tableau de charactères contient un palindrome, et retourne 0 sinon
int palindromeTest(char string[])
{
    int stringLength = trouveChar(string,0);
    int j = stringLength;
    for(int i = 0;i < stringLength/2;i++)
    {
        j--;
        if(string[i] != string[j])
        {
            return 0;
        }
    }
    return 1;
}

//Description: fonction de test
int main()
{
    printf("Tests pour la recherche de de palindromes:\n");
    printf("pour \"a\". Attendu 1. Resultat: %d\n",palindromeTest("a"));
    printf("pour \"aabb\". Attendu 0. Resultat: %d\n",palindromeTest("aabb"));
    printf("pour \"aba\". Attendu 1. Resultat: %d\n",palindromeTest("aba"));
    printf("pour \"abab\". Attendu 0. Resultat: %d\n",palindromeTest("abab"));
    printf("pour \"aabbaa\". Attendu 1. Resultat: %d\n",palindromeTest("aabbaa"));
    printf("pour \"\". Attendu 1. Resultat: %d\n",palindromeTest(""));
}