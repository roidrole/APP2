/********
Fichier: palindrome.c
Auteurs: Raphaël Denicourt denr6130
         Samuel Guertin    gues2290
Date: 24 Septembre 2025
Description: Vérifie si le mot provenu est un palindrome
********/

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