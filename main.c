#include <stdio.h>


int findChar(char word[], char character){
    for (int i = 0; i < sizeof(word); i++){
        if(word[i] == character){
            return i;
        }
    }
    return -1;
}
int main(){
    printf("%d", findChar("you_mom_is_hat", 'a'));
}