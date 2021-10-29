#include<ncurses/ncurses.h>
#include<iostream>
using namespace std;

int main(){
	initscr();
	char nama[100], alamat[100], hobi[100];
	//input
	getstr(nama);
	getstr(alamat);
	getstr(hobi);
	//output
	cout<<"Nama\t : "<<nama<<endl;
	cout<<"Alamat\t : "<<alamat<<endl;
	cout<<"Hobi\t : "<<hobi<<endl;
	
	getch();
	endwin();
	return 0;
	
}
