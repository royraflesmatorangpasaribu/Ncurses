#include <ncurses/ncurses.h>
#include<windows.h>
using namespace std;

int main(){
	//memulai layar ncurses
	initscr();

	mvprintw (10,43,"FROM HAHAHA TO YA GITU LAH :'(");

	refresh();
	getch();
	
	endwin();
}
