#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

int main(){

    string s = "parrot carrot car";
    char input;
    int count = 0;

    while(count != s.size() - 1){

        cin >> input;
        if (input != s[count]){
            cout << "Неправильный символ";
        }
        else{
            cout << input;
            count++;
        }
    }


    return 0;
}
