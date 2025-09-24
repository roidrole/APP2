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
