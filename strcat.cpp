#include <iostream>
#include <string.h>

using namespace std;
main()
{
	char a[100] = "Teknik";
	char b[100] = "Informatika";
	cout<<"Program Menggabungkan 2 buah kata berupa string."<<endl<<endl;
	cout<<"Soal(Encoded): "<<endl;
	cout<<"KALIMAT 1: Teknik"<<endl;
	cout<<"KALIMAT 2: Informatika"<<endl;
	cout<<endl<<"Soal(Decoded): "<<strcat(a, b);
}

