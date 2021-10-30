#include<ncurses/ncurses.h>
using namespace std;
int main(){
	initscr();
	char nama[256], alamat[256], hobi[256];
	//input
	getstr(nama);
	getstr(alamat);
	getstr(hobi);
	//output
	mvprintw(6,25,"Nama   : ");
	printw(nama);
	mvprintw(7,25,"Alamat : ");
	printw(alamat);
	mvprintw(8,25,"Hobi   : ");
	printw(hobi);
	refresh();
	
	getch();
	endwin();
	return 0;
}
