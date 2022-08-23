//3)	Count how many vowels and consonants are there

#include<stdio.h>
#include<iostream>


using namespace std;
int i;

void counter(string str){
    int vowelCount=0, consonantCount=0;
    for (i = 0; str[i] != '\0';i++){
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
           vowelCount++;
        }
        else if( ch>='a'&& ch<='z'){
            consonantCount++;
        }
    }
    cout<<"Vowels: "<<vowelCount<<"\nConsonants: "<<consonantCount<<endl;
}

int main(){

    string fullString;

    cout<< "Enter character string: ";

    getline(cin,fullString);

    counter(fullString);


    return 0;
}


    //len = strlen(fullString);
