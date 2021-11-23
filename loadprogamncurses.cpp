#include<ncurses/ncurses.h>
#include<windows.h>

int main()
{
	initscr();
	while(true){
	clear();
	//output
  	mvprintw(5,4,"|");
  	mvprintw(4,4," ________________");
  	mvprintw(5,21,"|");
  	mvprintw(6,4," Loading Program");
  	
  	//looping baris bertambah ke kanan
  	for(int baris=5;baris<=17;baris++){
    mvprintw(5,baris,"=");
    refresh();
    //waktu looping
	Sleep(100);
                  
  	}
		
	}
	getch();
	endwin();
}
