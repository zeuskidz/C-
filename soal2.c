// Tugas-02 Soal-2
// Khadafi Sinaga - 2211600644
#include "iostream"
#include "conio.h"
using namespace std;

struct {
	int jam, menit, detik;
}
berangkat, tiba, perjalanan;
int main() {

	berangkat.jam = 8;
	berangkat.menit = 52;
	berangkat.detik = 45;
	cout <<endl <<"Berangkat pukul = " <<berangkat.jam <<":" <<berangkat.menit <<":" <<berangkat.detik <<endl;

	tiba.jam = 23;
	tiba.menit = 15;
	tiba.detik = 10;
	cout <<endl <<"Tiba ditujuan pukul = " <<tiba.jam <<":" <<tiba.menit <<":" <<tiba.detik <<endl;

	if ((tiba.detik - berangkat.detik) < 0)
	{
		perjalanan.detik = (60 + tiba.detik) - berangkat.detik;
		tiba.menit--;
	}
	else {
		perjalanan.detik = tiba.detik - berangkat.detik;
	}
	if ((tiba.menit - berangkat.menit) < 0)
	{
		perjalanan.menit = (60 + tiba.menit) - berangkat.menit;
		tiba.jam--;
	}
	else {
		perjalanan.menit = tiba.menit - berangkat.menit;
	}
	if ((tiba.jam - berangkat.jam) < 0)
	{
		perjalanan.jam = (24 + tiba.jam) - berangkat.jam;
		tiba.jam--;
	}
	else {
		perjalanan.jam = tiba.jam - berangkat.jam;
	}

	cout <<endl <<"Waktu yang di habiskan dalam perjalanan " <<perjalanan.jam <<" Jam, " <<perjalanan.menit <<" Menit, dan " <<perjalanan.detik <<" Detik" <<endl;
	getch();
}