// Tugas-03 Soal-1
// Khadafi Sinaga - 2211600644

#include<iostream>
#include<conio.h>
using namespace std;

// background 
int mid_bil(int bil1, int bil2, int bil3)

{
    // Scan bil2
    if ((bil1 < bil2 && bil2 < bil3) || (bil3 < bil2 && bil2 < bil1))
       return bil2;
 
    // Scan  bil1
    else if ((bil2 < bil1 && bil1 < bil3) || (bil3 < bil1 && bil1 < bil2))
       return bil1;
 
    else
       return bil3;
}
 
// front
int main() 


{
	int bil1, bil2, bil3;
	char coba;
	cout << "\n~ Name : Khadafi Sianga ~\n";
		cout << "\n~ NIM : 2211600644 ~\n"
			<< "\n\t\tSoal-1 Nilai Tengah dari 3 (tiga) buah bilangan bulat\n";
	do {
		
	cout<<"Masukan bilangan pertama : ";
	cin>>bil1;
	cout<<"Masukan bilangan kedua : ";
			cin >> bil2;
			
	if (bil1 == bil2 ){
	
	do
		{
			cout<<"Tidak boleh sama, ulangi bilangan kedua : ";
			cin >> bil2;			
		}
		while ( bil1 == bil2);}
	cout<<"Masukan bilangan ketiga : ";
	cin>>bil3;
	if (bil3 == bil2 || bil3 == bil1){
	
	do
		{
			cout<<"Tidak boleh sama, ulangi bilangan ketiga : ";
			cin >> bil3;			
		}
		while (bil3 == bil2 || bil3 == bil1);}
    cout <<"Nilai tengah adalah :" << mid_bil(bil1, bil2, bil3);
	cout << "\nCoba lagi (Y/T) ? ";
    cin >> coba;
	
				
	}
	while (coba == 'y' || coba == 'Y');

	cout << "Keluar." << endl;
	return 0;
}