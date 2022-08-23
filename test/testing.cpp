
//5) Divide the given string into two sub-strings where one string contains the word started with vowel and the other with consonant

#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int isVowel(char cha){
       char ch = tolower(cha);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return 1;
        }else if(ch>='a'&& ch<='z'){
            return 0;
        }
}

void wordSeparator(string str){
    int i,in1=0,in2=0;
   char vwlWords[1000],const[1000];


    for(i=0; str[i] != '\0';i++){
        if(isVowel(str[i]))
        {
            while(str[i]!=' ' && str[i]!='\0')
            {
                vwlWords[in1++]= str[i++];
                cout<<vwlWords<<endl;

            }
            i--;
            vwlWords[in1++]= ' ';
        }
        else
        {
           while(str[i]!=' ' && str[i]!='\0')
           {
                constWords[in2++]= str[i++];

           }
           i--;
           constWords[in2++]= ' ';
        }
    }
    vwlWords[in1]= '\0';
    constWords[in2]='\0';

    cout<<"\n\nVowel words: "<< vwlWords<<endl;
    cout<<"Consonant words: "<< constWords<<endl;

}

int main(){

    string fullString;

    cout<< "Enter string: ";

    getline(cin,fullString);

    wordSeparator(fullString);

    return 0;
}

