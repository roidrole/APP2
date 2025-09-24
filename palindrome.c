#include <stdio.h>

void main()
{
    char cheese[3] = "aba";
    int bingbong = -1;
    bingbong = palindromeCheck("aba");
    printf("%d",bingbong);
}

int palindromeCheck(char string[]){
    int answer = 0;
    for(int i = 0;i > sizeof(string);)
    {
        for(int j = sizeof(string);j>0;)
        {
            if(string[i] != string[j])
            {
                answer = 1;
            }
            j--;
        }
        i++;
    }
    return answer;
}