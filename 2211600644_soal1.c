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
T0 = 60; 
sb = 0; 
KN1 = K1+0.1; 

bb = 0; 
stv = jarak; 
stat = 0; 
ta = 0; 

cout << "\n~ Name : Khadafi Sianga ~\n";
cout << "\n~ NIM : 2211600644 ~\n" << "\nSusun program untuk mencetak pukul berapa ( Jam : Menit : Detik ) Badu dapat mendahului Ali\n";
   	
cout << "\nJarak Antara Titik A dan Titik B = " << jarak << " meter" ; 
cout<< "\nKecepatan Awal Ali = " << K1 << "m/dt "; 
cout << "\nKecepatan Ali Naik menjadi = " << KN1 << "m/dt"; 
cout << "\nKecepatan Awal Badu = " << K2 << "m/dt"; 
cout << "\nSelang Waktu 1 Menit Badu berangkat = " << T0 << " detik kemudian\n"; 
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
   	int H = 8, M = 00, S = 00;
   	detik = ketemu - (waktu.j * 3600);
   	waktu.j = ketemu/3600;
   	waktu.m = (ketemu-waktu.j*3600)/60;
   	waktu.d = (ketemu-waktu.m*60)%60; 
 
  
 cout << "\nAli berangkat dari titik A ke titik B pukul  " << H << ":" << M << ":" << S ;  
 cout <<endl <<"Badu dapat mendahului Ali pada Pukul  " << waktu.j+H<< ":" << waktu.m+M << ":" << waktu.d+S << endl;
 }