#include <stdio.h>

int main(){
    printf("%d", findChar("you_mom_is_hat", 'a'));
}

int findChar(char word[], char character){
    for (int i = 0; word[i] != 0; i++){
        if(word[i] == character){
            return i;
        }
    }
    return -1;
}

int palindromeCheck(char string[]){
    int stringLength = findChar(string,0);
    int j = 0;
    for(int i = 0;i > stringLength;)
    {
        j = (stringLength - i);
        if(string[i] != string[j])
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main(){
    printf("%d", findChar("you_mom_is_hat", 'a'));
    
    printf("\n");
    printf("%d",palindromeCheck("a"));
    printf("\n");
    printf("%d",palindromeCheck("aabb"));
    printf("\n");
    printf("%d",palindromeCheck("aba"));
    printf("\n");
    printf("%d",palindromeCheck("abab"));
    printf("\n");
    printf("%d",palindromeCheck("aabbaa"));
    printf("\n");
    printf("%d",palindromeCheck(""));
}