//4)Find out which vowels and consonants are existed in the above string

#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;
int i,j;

vector<char>vowelArray;
vector<char>consonantArray;


void counter(string str){

    for (i = 0; str[i] != '\0';i++){
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
           vowelArray.push_back(ch);
        }
        else if( ch>='a'&& ch<='z'){
            consonantArray.push_back(ch);
        }
    }
    cout<<"Vowels: ";
    for(i=0;i<vowelArray.size();i++)
    {
        cout<<vowelArray[i]<<" ";

    }

    cout<<"\nConsonants: ";
    for(i=0;i<consonantArray.size();i++)
    {
        cout<<consonantArray[i]<<" ";

    }
    cout<<endl;
}

int main(){

    string fullString;

    cout<< "Enter character string: ";
    getline(cin,fullString);

    counter(fullString);

    return 0;
}


    //len = strlen(fullString);

