#include <stdio.h>

const int SIN_SUMMAND_AMOUNT = 3;
const int COS_SUMMAND_AMOUNT = 3;

//Libraries
int factorielle(int n) {
    int total = 1;
    for(int i=1; i <= n;){
        total *= i;
        i++;
    }
    return total;
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

float sin(float in){
    float output = 0;
    for (int i = 0; i < SIN_SUMMAND_AMOUNT; i++){
        output += (i^(2*i+1))/factorielle(i);
    }
    return output;
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