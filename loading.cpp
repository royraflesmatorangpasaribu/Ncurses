#include<ncurses/ncurses.h>
#include<windows.h>

int main(){
	//memulai layar ncurses
	initscr();
	
	//mencetak output di baris... dan kolom...
	mvprintw(10, 40, "Menampilkan Program Animasi Nama");
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
		mvprintw(10, 48, "Selamat datang");
		mvprintw(11, 42, "Roy");
		refresh();
		Sleep(500);
		
		mvprintw(11, 46, "Rafles");
		refresh();
		Sleep(500);
		
		mvprintw(11, 53, "Matorang");
		refresh();
		Sleep(500);	
		
		mvprintw(11, 62, "Pasaribu");
		refresh();
		Sleep(500);	
	}
	getch();
	endwin();
}
