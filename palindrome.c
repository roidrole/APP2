/********
Fichier: palindrome.c
Auteurs: Raphaël Denicourt denr6130
         Samuel Guertin    gues2290
Date: 24 Septembre 2025
Description: Vérifie si le mot provenu est un palindrome
********/

// Description: fonction qui vérifie si le mot provenu est un palindrome
// Préconditions:
// - le tableau de charactères doit contenir seulement des lettres arabes minuscules sans accents
// Postconditions: 
// - retourne 1 si le tableau de charactères contient un palindrome, et retourne 0 sinon
int palindromeCheck(char string[]){
    int stringLength = findChar(string,0);
    int j = stringLength;
    for(int i = 1;i < stringLength/2;i++)
    {
        j--;
        if(string[i] != string[j])
        {
            return 0;
        }
    }
    return 1;
}