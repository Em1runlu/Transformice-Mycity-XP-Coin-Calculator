#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int seviye, xp, sonuc, i, toplam;
	char y;
	cout << "       MYCITY TOPLAM XP HESAPLAMA PROGRAMI" << endl << "Bu program �u ana kadar edindi�iniz xp say�s�n� size g�sterir." << endl << "Say�y� yaz ve ENTER tu�una bas." << endl << endl;
	r1:
	cout << "Seviyenizi yaz�n:";
	cin >> seviye;
	toplam = 0;
	for (i = 1; i < seviye; i++)
	{
		sonuc = (i * 2000 + 500);
		toplam += sonuc;
	}
	cout << "Profilinizde g�z�ken birikmi� xp say�s�n� yaz�n:";
	cin >> xp;
	int toplam2 = toplam + xp;
	cout << "Toplam xp=" << toplam2 << endl;
	cout << "(B) Ba�a d�n" << endl << "(E) ��k��" << endl;
	r2:
	y = _getch();
	if (y == 'B' || y == 'b')
		goto r1;
	else if (y == 'E' || y == 'e')
	{
	}
	else goto r2;
}