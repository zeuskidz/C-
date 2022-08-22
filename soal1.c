// Tugas-02 Soal-1
// Khadafi Sinaga - 2211600644
#include <iostream>
#include <conio.h>
using namespace std;

struct jam{
    int d, m, j;
};

main()
{
	jam waktu;
    int detik;
   	int H = 8, M = 52, S = 45, TDW, TDA;
   	int durasi = 5000;
   		cout <<endl <<"Berangkat pukul " <<H <<":"<<M <<":"<<S  <<endl;
   		cout <<endl <<"Pukul "<<H <<" lewat, " <<M <<" menit, " <<S <<" detik" <<endl;
   		cout <<"Durasi " <<durasi <<endl;
   	H = H * 3600;
   	M = M * 60;
   	TDW = H + M + S;
   	TDA = H + M + S + durasi;
   //cout<< endl<< "Total durasi awal adalah " << TDW <<" Detik" <<endl;
   //cout<< endl<< "Total durasi akhir adalah " << TDA <<" Detik" <<endl;
   	detik = TDA - (waktu.j * 3600);
   	waktu.j = TDA/3600;
   	waktu.m = (TDA-waktu.j*3600)/60;
   	waktu.d = (detik-waktu.m*60)%60;
   	while (waktu.j ==24);

    if (waktu.j >= 24)
		cout <<endl <<"Tiba ditempat tujuan " << waktu.j-24<< "  :" << waktu.m << "  :" << waktu.d << endl;
			else
    			cout <<endl <<"Tiba ditempat tujuan " << waktu.j<< ":" << waktu.m << ":" << waktu.d  << endl;
    if (waktu.j >= 48)
		cout <<endl << "Error Time over 2 Days" << endl;
    return 0;
}