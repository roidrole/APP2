#include <stdio.h>

const int SIN_SUMMAND_AMOUNT = 9;
const int COS_SUMMAND_AMOUNT = SIN_SUMMAND_AMOUNT;
const float PI = 3.1415926535897932384626433832795;

//Libraries
int factorielle(int n) {
    int total = 1;
    for(int i=1; i <= n;i++){
        total *= i;
    }
    return total;
}

double exponent(double base, int exponent){
    if(exponent == 0){
        return 1;
    }
    const double multiplier = base;
    for (int i = 1; i < exponent; i++){
        base *= multiplier;
    }
    return base;
}

//A function that returns -1 if input is event, or 1 if input is odd.
int getSign(int input){
    if(input % 2 == 0){
        return 1;
    } else {
        return -1;
    }
}

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

float sin(float in){
    float output = 0;
    for (int i = 0; i < SIN_SUMMAND_AMOUNT; i++){
        output += getSign(i)*exponent(in, 2*i+1)/factorielle(2*i+1);
    }
    return output;
}

float cos(float in){
    float out = 0;
    for(int i = 0; i <COS_SUMMAND_AMOUNT; i++)
    {
        out += getSign(i)*exponent(in, 2*i)/factorielle(2*i);
    }
    return out;
}













int main(){
    printf("findChar\n");
    printf("%d", findChar("you_mom_is_hat", 'a'));
    printf("\n");
    printf("%d", findChar("you_mom_is_hat", 'y'));
    printf("\n");
    
    printf("palindromeCheck\n");
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
    printf("\n");

    int number = 5;
    printf("exponent:%f\n", exponent(-PI, number));
    printf("factorielle:%d\n", factorielle(number));
    printf("floatorielle:%f\n", (float)factorielle(number));
    printf("division:%f\n", exponent(-PI, number)/(float)factorielle(number));
    printf("\n");

    printf("****sin*****\n");
    printf("%f",sin(0));
    printf("\n");
    printf("%f",sin(1));
    printf("\n");
    printf("%f",sin(-PI));
    printf("\n");
    printf("%f",sin(PI/2));
    printf("\n");
    printf("%f",sin(PI/4));
    printf("\n");

    printf("****cos*****\n");
    printf("%f",cos(0));
    printf("\n");
    printf("%f",cos(1));
    printf("\n");
    printf("%f",cos(-PI));
    printf("\n");
    printf("%f",cos(PI/2));
    printf("\n");
    printf("%f",cos(PI/4));
}