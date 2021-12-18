#include <ncurses/ncurses.h>
using namespace std;

int main(){
	//memulai layar ncurses
	initscr();
	
	//menampilkan output dengan baris dan kolom
	mvprintw (10,43,"FROM HAHAHA TO YA GITU LAH :'(");

	refresh();
	getch();
	
	//menghapus layar ncurses
	endwin();
}
