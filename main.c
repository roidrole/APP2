#include <stdio.h>

const int SIN_SUMMAND_AMOUNT = 3;
const int COS_SUMMAND_AMOUNT = 3;


int findChar(char word[], char character){
    for (int i = 0; word[i] != 0; i++){
        if(word[i] == character){
            return i;
        }
    }
    return -1;
}


float sin(float in){
    float output = 0;
    for (int i = 0; i < SIN_SUMMAND_AMOUNT; i++){
        output += (i^(2*i+1))/factorial(i);
    }
    return output;
}

int main(){
    printf("%d", findChar("you_mom_is_hat", 'a'));
}