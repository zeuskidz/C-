// TUGAS-UAS No. 1
// Khadafi Sinaga - 2211600644
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
struct jam{
    int d, m, j;
};
int main ()
{ 
jam waktu;
int jarak, det, ketemu, stat, T0, sb, bb, ta, stv; 
double K1, K2, KN1;
jarak = 1000; 
K1 = 2.0; 
K2 = 3; 
T0 = 10; 
sb = 0; 
KN1 = K1+0.1; 

bb = 0; 
stv = jarak; 
stat = 0; 
ta = 0; 

cout << "\n~ Name : Khadafi Sianga ~\n";
cout << "\n~ NIM : 2211600644 ~\n" << "\nSusun program untuk mencetak pada detik keberapa setelah pukul 8 Ali dan Badu berpapasan di jalan."
<< "\nJuga mencetak jarak Badu dengan titik B setelah detik mereka berpapasann\n";
   	
cout << "\nJarak Antara Titik A dan Titik B = " << jarak << " meter" ; 
cout<< "\nKecepatan Awal Ali = " << K1 << "m/dt "; 
cout << "\nKecepatan Ali Naik menjadi = " << KN1 << "m/dt"; 
cout << "\nKecepatan Awal Badu = " << K2 << "m/dt"; 
for(det=1; ; det++) 
{ if(ta <= jarak || stv >= 0) 
{ 
if(ta <= jarak) 
{ 
ta += K1; } 
if(stv >= 0) 
{ 
stv -= K2; 
} 
if(ta >= stv && stat == 0) 
{ 
ketemu = det; 
stat = 1; 
} 
if(T0 != 0) 
{ 
if(det % T0 == 0) 
{ 
K1 += KN1; 
} 
} 
if(sb != 0) 
{ 
if(det % sb == 0) 
{ K2 += bb; 
} 
} 
} 
else break; 
}
   int detik;
   	int H = 8, M = 00, S = 10;
   	detik = ketemu - (waktu.j * 3600);
   	waktu.j = ketemu/3600;
   	waktu.m = (ketemu-waktu.j*3600)/60;
   	waktu.d = (ketemu-waktu.m*60)%60; 
 
  
 cout << "\nBadu berangkat dari titik B ke titik A pukul  " << H << ":" << M << ":" << S ;  
 int Waktu, Jam, JlhJam, Selisih, Menit, JlhMenit, Detik,Tiba;   
 Jam = ketemu / 3600;   
 JlhJam = Jam * 3600;   
 Selisih  = ketemu - JlhJam;   
 Menit  = Selisih / 60;   
 JlhMenit = Menit * 60;   
 Detik  = Selisih - JlhMenit;  
 Tiba  = Jam + 8;   
 cout << "\nAli dan Badu berpapasan di jalan pada detik ke  = " << Detik <<endl;
 
 int AB; 
 
 AB=ketemu*K2; 
 cout<< "\nJarak Badu dengan titik B setelah mereka berpapasan = " <<AB << " meter"<<endl;
 }