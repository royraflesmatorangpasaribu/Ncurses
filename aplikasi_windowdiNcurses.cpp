#include <ncurses/ncurses.h>
using namespace std;

int main(){
	int x = 1, y = 1;
	initscr();
	
	//newwin(height, width, start_x, start_y)
	WINDOW * win = newwin(15, 15, 1, 1);
	// x-min = 1, x-max = 13
	// y-min = 1, y-max = 13
	refresh();
	
	box(win, 0, 0);
	wmove(win, y, x);
	wprintw(win, "+");
	wrefresh(win);
	
	while(true){
		char movement = wgetch(win);
		
		switch(movement){
			case 'a':
				// Cek apakah kursor (objek) sudah di ujung kiri
				if(x == 1){
					x = 13;
				}else{
					x--;
				}
				break;
			case 'd':
				if(x == 13){
					x = 1;
				}else{
					x++;
				}
				break;
			case 'w':
				if(y == 1){
					y = 13;
				}else{
					y--;
				}
				break;
			case 's':
				if(y == 13){
					y = 1;
				}else{
					y++;
				}
				break;
		}
		
		wclear(win);
		box(win, 0, 0);
		wmove(win, y, x);
		wprintw(win, "+");
		wrefresh(win);
		
		// Looping berhenti
	}
	
	getch();
	endwin();
}
