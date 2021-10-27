//ncurses itu digunakan untuk mengolah terminal (terminal yang dibuat ncurses)
//cetak kata nama "Roy Rafles Matorang Pasaribu"->buffer ->terminal
#include<ncurses/ncurses.h>
using namespace std;

int main(){
	//initscr itu gunanya untuk memulai terminal ncurses
	initscr();
	
	//printw("text") dia akan langsung tampil di baris 1 dan kolom 1 
	//printw("Roy Rafles Matorang Pasaribu");

	//mvprintw(baris,kolom,text)
	mvprintw(6,17,"Roy Rafles Matorang Pasaribu");
	
	//getcharacter = meminta inputan 1 karakter
	getch();
	//mengoutputkan text yang dioutputkan dari buffer ke terminal
	refresh();
	//keluar dari terminal ncurses
	endwin();
	
}
