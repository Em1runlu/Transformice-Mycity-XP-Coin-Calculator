#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	string x, z;
	cout << "Bir se�enek se�in..." << endl << endl << " (1)Mycity XP Calculator" << endl << " (2)Mycity Coin Calculator" << endl;
r0:
	z = _getch;
	if (z == "1")
	{
		int seviye, xp, sonuc, i, toplam;
		char a;
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
		a = _getch();
		if (a == 'B' || a == 'b')
			goto r1;
		else if (a == 'E' || a == 'e')
		{
		}
		else goto r2;
	}
	else if (y == "2")
	{
	r1:
		cout << endl << "		Mycity Coin Hesaplay�c�s�" << endl << endl << "  Bu program,istatistiklerinizi belli standartlara g�re paraya d�n��t�rerek 'en az,ortalama ve en �ok (��pheli modu)' sahip olabilece�iniz paray� hesaplar. " << endl << endl;
		cout << " (1)Ba�lat" << endl << " (2)Nas�l �al���r?" << endl << " (3)Hakk�nda" << endl << " (4)G�ncelleme Ge�mi�i" << endl;
	r1a:
		x = _getch();
		if (x == "1")
		{
		r4:
			cout << endl << endl << "...De�erleri girelim..." << endl << endl;
			cout << "	Polis	" << endl << "+Tutuklanan oyuncular: ";
			cin >> y; cout << endl;
			sonuc1 = 0, sonuc2 = 0, sonuc3 = 0;
			sonuc1 += y * 150, sonuc2 += y * 150, sonuc3 += y * 150;
			cout << "	H�rs�z	" << endl << "+Soygunlar: ";
			cin >> y; cout << endl;
			sonuc1 += y * 250, sonuc2 += y * 463, sonuc3 += y * 500;
			cout << "	Bal�k��	" << endl << "+Avlanan bal�k: ";
			cin >> y; cout << endl;
			if (y < 150)
			{
				sonuc1 += y * 120, sonuc2 += y * 150, sonuc3 += y * 254;
			}
			else
			{
				sonuc1 += y * 169, sonuc2 += y * 211, sonuc3 += y * 254;
			}
			cout << "	Maden	" << endl << "+Toplanan Alt�n: ";
			cin >> y; cout << endl;
			sonuc1 += y * 110, sonuc2 += y * 110, sonuc3 += y * 110;
			cout << "+Sat�lan kristal:" << endl << " Sar�: ";
			cin >> y;
			sonuc1 += y * 200, sonuc2 += y * 200, sonuc3 += y * 200;
			cout << " Mavi: ";
			cin >> y;
			sonuc1 += y * 342, sonuc2 += y * 342, sonuc3 += y * 342;
			cout << " Mor: ";
			cin >> y;
			sonuc1 += y * 600, sonuc2 += y * 600, sonuc3 += y * 600;
			cout << " Ye�il: ";
			cin >> y;
			sonuc1 += y * 800, sonuc2 += y * 800, sonuc3 += y * 800;
			cout << " K�rm�z�: ";
			cin >> y; cout << endl;
			sonuc1 += y * 1200, sonuc2 += y * 1200, sonuc3 += y * 1200;
			cout << "	�ift�i	" << endl << "+Sat��: ";
			cin >> y;
			sonuc1 += y * 10, sonuc2 += y * 53, sonuc3 += y * 500;
			cout << "+Sat�lan Meyveler: ";
			cin >> y; cout << endl;
			sonuc1 += y, sonuc2 += y * 5, sonuc3 += y * 50;
			cout << "	�ef	" << endl << "+Tamamlanan sipari�ler: ";
			cin >> y; cout << endl << endl;
			sonuc1 += y * 400, sonuc2 += y * 700, sonuc3 += y * 729;
			cout << "En az=" << sonuc1 << "$" << endl << "Ortalama=" << sonuc2 << "$" << endl << "En �ok=" << sonuc3 << "$" << endl << endl;
			cout << "(1)Tekrar Dene" << endl << "(2)Ba�a D�n" << endl;
		r5:
			x = _getch();
			if (x == "1")
				goto r4;
			else if (x == "2")
				goto r1;
			else goto r5;
		}
		else if (x == "2")
		{
			cout << endl << endl << "-----Birim ba��na de�erler-----" << endl << endl << " En az" << endl;
			cout << "+H�rs�z=250$" << endl << "+Bal�k��=120$ (k�sa vadede) , 169$ (uzun vadede)" << endl << "+�ift�i=10$ (tohum ba��na) , 1$ (meyve ba��na)" << endl << "+�ef=400$" << endl << endl;
			cout << " Ortalama" << endl;
			cout << "+H�rs�z=463$" << endl << "+Bal�k��=150$ (k�sa vadede) , 211$ (uzun vadede)" << endl << "+�ift�i=53$ (tohum ba��na) , 5$ (meyve ba��na)" << endl << "+�ef=700$" << endl << endl;
			cout << " En �ok (��pheli modu)" << endl;
			cout << "+H�rs�z=500$" << endl << "+Bal�k��=254$" << endl << "+�ift�i=500$ (tohum ba��na) , 50$ (meyve ba��na)" << endl << "+�ef=729$" << endl << endl;
			cout << "---------Sabit olanlar---------" << endl << endl << "+Polis=150$" << endl << "+Maden:" << endl << "+Toplanan alt�n=110$" << endl << "Sar� Kristal=200$" << endl << "Mavi Kristal=342$" << endl << "Mor Kristal=600$" << endl << "Ye�il Kristal=800$" << endl << "K�rm�z� Kristal=1200$" << endl << endl;
			cout << " (1)Ba�a D�n" << endl;
		r2:
			x = _getch();
			if (x == "1")
				goto r1;
			else goto r2;
		}
		else if (x == "3")
		{
			cout << endl << "S�r�m 1.0.1" << endl << endl;
			cout << " (1)Ba�a D�n" << endl;
		r3:
			x = _getch();
			if (x == "1")
				goto r1;
			else goto r3;
		}
		else if (x == "4")
		{
		r6:
			cout << endl << endl << "-----G�ncelleme Ge�mi�i-----" << endl << endl;
			cout << "  Yap�lan de�i�iklikler burda kay�tl�d�r." << endl << "  A�mak i�in parantez i�indeki say�y� yaz�p 'ENTER tu�una bas�n'." << endl << "  Ana sayfaya d�nmek i�in B harfini yaz�p 'ENTER tu�una bas�n'." << endl << endl;
			cout << "  (101)1.0.1" << endl << endl << " (B + ENTER Tu�u)Ana Sayfa" << endl;
		r6a:
			cin >> x;
			if (x == "101")
			{
				cout << endl << "-----1.0.1 s�r�m�nde yap�lan de�i�iklikler-----" << endl << endl;
				cout << "+G�ncelleme Ge�mi�i eklendi. (ehehehe)" << endl << "+Metin d�zeninde birka� de�i�iklik" << endl;
				cout << "+De�i�tirilen de�erler:" << endl << endl << "            Bal�k��" << endl << " En az (k�sa vadede):125$--->120$" << endl << " En az (uzun vadede):239$--->169$" << endl << " Ortalama (uzun vadede):253$--->211$" << endl << endl;
				cout << " (B)Ana Sayfa" << endl << " (U)G�ncelleme Ge�mi�i Sayfas�na D�n" << endl;
			r7:
				x = _getch();
				if (x == "B" || x == "b")
					goto r1;
				else if (x == "U" || x == "u")
					goto r6;
				else goto r7;
			}
			else if (x == "B" || x == "b")
				goto r1;
			else goto r6a;
		}
		else goto r1a;
	}
	else goto r0;
}