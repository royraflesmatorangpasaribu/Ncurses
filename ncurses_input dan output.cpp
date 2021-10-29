#include<ncurses/ncurses.h>
using namespace std;
int main(){
	initscr();
	char nama[256], alamat[256], hobi[256];
	//input
	getstr(nama);
	getstr(alamat);
	getstr(hobi);
	clear();
	//output
	mvprintw(2,5,"Nama\t : ");
	printw(nama);
	mvprintw(3,5,"Alamat\t : ");
	printw(alamat);
	mvprintw(4,5,"Hobi\t : ");
	printw(hobi);
	refresh();
	
	getch();
	endwin();
	return 0;
}
