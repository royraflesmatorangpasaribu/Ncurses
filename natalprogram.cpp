#include<ncurses/ncurses.h>
#include<windows.h>

int main(){
	//deklarasi variabel
	char nama[100];

	//memulai layar ncurses
	initscr();
	
	//mencetak output di baris... dan kolom...
	mvprintw(10, 40, "Masukkan Nama Anda    : ");
	//input
	getstr(nama);
	
	//looping loading
	for(int baris=48; baris<=59; baris++){
		mvprintw(11, baris, "o");
		refresh();
		Sleep(100);
	}
	//membersihkan layar
	clear();
	
	while(true){
		//membersihkan layar ncurses
		clear();
		//mencetak output di baris... dan kolom...
		mvprintw(10, 48, "Selamat Natal 2021");
		mvprintw(11, 48, " ");
		printw(nama);
		refresh();
		Sleep(500);
			
	}
	getch();
	endwin();
}
