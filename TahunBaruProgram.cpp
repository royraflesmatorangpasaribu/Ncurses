#include<ncurses/ncurses.h>
#include<windows.h>

//PROGRAM DIBUAT OLEH ROY RAFLES MATORANG PASARIBU

int main(){
	char nama[256];

	//memulai layar ncurses
	initscr();
	
	//mencetak output di baris... dan kolom...
	mvprintw(10, 40, "Masukkan Nama Anda    : ");
	//input
	getstr(nama);
	mvprintw(11, 40, "Loading");
	
	//looping loading
	for(int baris=48; baris<=57; baris++){
		mvprintw(11, baris, ".");
		refresh();
		Sleep(100);
	}
	clear();
	while(true){
		//membersihkan layar ncurses
		clear();
		
		//mencetak output di baris... dan kolom...
		mvprintw(10, 48, "Selamat Tahun Baru");
		mvprintw(11, 48, " ");
		printw(nama);
		refresh();
		Sleep(500);
			
	}
	getch();
	endwin();
}
