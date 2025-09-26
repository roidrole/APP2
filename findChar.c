/********
Fichier: findChar.c
Auteurs: Raphaël Denicourt denr6130
         Samuel Guertin    gues2290
Date: 24 Septembre 2025
Description: trouve la position de première instance d'un charactère dans un tableau de charactères
********/


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