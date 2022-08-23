//2)	Separate letter, digit and other characters

#include<stdio.h>

#include<iostream>
#include <vector>

using namespace std;
int i;

vector<char> letterArray;
vector<char> digitArray;
vector<char> otherArray;

void letters(string str){

    cout<< "\nLetters in the string: ";

    for (i = 0; str[i] != '\0';i++){
        if (isalpha(str[i])){
            letterArray.push_back(str[i]);
        }
    }

    for(int i=0;i<letterArray.size();i++){
        cout<< letterArray[i]<<" ";
    }
    cout<<endl;
}

void digits(string str){

    cout<< "\nDigits in the string: ";

    for (i = 0; str[i] != '\0';i++){
        if (isdigit(str[i])){
             digitArray.push_back(str[i]);
        }
    }

    for(int i=0;i<digitArray.size();i++){
        cout<< digitArray[i]<<" ";
    }
    cout<<endl;
}

void other(string str){

    cout<< "\nOthers in the string: ";

    for (i = 0; str[i] != '\0';i++){
        if (!isdigit(str[i]) && !isalpha(str[i]) && str[i] != ' '&& str[i] != '\n' && str[i] != '\0'){
             otherArray.push_back(str[i]);
        }
    }

    for(int i=0;i<otherArray.size();i++){
        cout<< otherArray[i]<<" ";
    }
    cout<<endl;

}

void check(string str){

    letters(str);
    digits(str);
    other(str);
}

int main(){

    string fullString;

    cout<< "Enter string: ";

    getline(cin,fullString);

    check(fullString);

    return 0;
}
