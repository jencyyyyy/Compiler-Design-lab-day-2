//5) Divide the given string into two sub-strings where one string contains the word started with vowel and the other with consonant

#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

string vwlWords = " ";
string constWords = " ";

int is_vowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        return 1;
    }
    return 0;
}

void word_start_with_vowel(string str) {

    int i,j,k,l,m,n,in1=0,in2=0;
    char vw[1000],cns[1000];

    for(i=0;str[i];i++){
        if(is_vowel(str[i])){
            while(str[i]!=' '&&str[i]!='\0'){
                vw[in1++] = str[i++];
            }
            i--;
            vw[in1++]  = ' ';
        }
        else if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'){
            while(str[i]!=' '&&str[i]!='\0'){
                cns[in2++] = str[i++];
            }
            i--;
            cns[in2++]  = ' ';
        }
    }
    vw[in1] = '\0';
    cns[in2] = '\0';
    printf("\n\nWords started with vowel : %s\n",vw);
    printf("Words started with consonant : %s\n",cns);
}

int main(){

    string str;

    cout<< "Enter string: ";

    getline(cin,str);

    word_start_with_vowel(str);

    return 0;
}
