//1. Count number of words, letters, digits and other characters
#include<stdio.h>
#include<ctype.h>
#include <string.h>
#include<iostream>

using namespace std;
int i;
void word(string str){

    int state=0, wordCount=0;

    for (i = 0; str[i] != '\0';i++){
        if (str[i] == ' '){
            state=0;
        }else if(state == 0){
            state=1;
            wordCount++;
        }

    }
    cout<<"Words: "<<wordCount<<endl;
}

int characters(string str){

    int characterCount=0;

   for (i = 0; str[i] != '\0';i++){
        if (str[i] != ' '){
            characterCount++;
        }
    }
    cout<<"Characters: "<<characterCount<<endl;
    return characterCount;
}

int letters(string str){

    int letterCount=0;

   for (i = 0; str[i] != '\0';i++){
        if (isalpha(str[i])){
            letterCount++;
        }
    }
    cout<<"Letters: "<<letterCount<<endl;

    return letterCount;
}

int digits(string str){

    int digitCount=0;

   for (i = 0; str[i] != '\0';i++){
        if (isdigit(str[i])){
            digitCount++;
        }
    }
    cout<<"Digits: "<<digitCount<<endl;

    return digitCount;
}
void other(string str){

    int otherCount = characters(str) - letters(str) - digits(str);

    cout<<"Others: " <<otherCount<<endl;

}

void check(string str){

    word(str);
    other(str);
}

int main(){

    string fullString;

    cout<< "Enter string: ";

    getline(cin,fullString);

    check(fullString);

    return 0;
}
