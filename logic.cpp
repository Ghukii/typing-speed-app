#include<iostream>
#include<string>
#include<ncurses.h>

using namespace std;

int main(){

    initscr();
    cbreak();
    noecho();

    string s = "parrot carrot car";
    printw("%s\n", s.c_str());

    char input;
    int count = 0;

    while(count < s.size()){

        input = getch();
        
        if(input == s[count]){
            printw("%c", input);
            count++;
        }
    
        refresh();
    }

    endwin();


    return 0;
}
