// Tugas-02 Soal-2
// Khadafi Sinaga - 2211600644

#include <iostream>

using namespace std;

int main()
{
		cout << "\n~ Name : Khadafi Sianga ~\n";
		cout << "\n~ NIM : 2211600644 ~\n"
			<< "\n\t\tSoal-2 Menginput 3 buah bilangan yang masing-masing menyatakan panjang garis sisi sebuah segitiga\n";
    int bil1, bil2, bil3;
    char coba;
	do {
    cout <<"Masukan bilangan pertama : ";
    cin >> bil1;

    cout <<"Masukan bilangan kedua : ";
    cin >> bil2;

    cout <<"Masukan bilangan ketiga : ";
    cin >> bil3;

    if(bil1==bil2 && bil1==bil3 && bil3==bil2)
    {
        cout<<"SAMA SISI"<<endl;
    }
    else if(bil1==bil2 || bil1==bil3 || bil3==bil2)
    {
        if(bil1!=bil2 || bil1!=bil3 || bil3!=bil2)
        {
            cout<<"SAMA KAKI"<<endl;
        }
    }
    else
    cout<<"SEMBARANG"<<endl;

    cout << "\nCoba lagi (Y/T) ? ";
    cin >> coba;
	
				
	}
	while (coba == 'y' || coba == 'Y');

	cout << "Keluar." << endl;
	return 0;
}