#include <iostream>
#include <conio.h>
using namespace std;

int General_Function(int seviye, int seviye2, long long sonuc, long long sonuc2, long long toplam, long long toplam2, long long xp, long long xp2, long long islem, short int sayac)
{
	for (int i = 1; i < seviye; i++)
	{
		sonuc = (i * 2000) + 500;
		toplam += sonuc;
	}
	if (sayac == 1)
	{
		toplam2 = toplam + xp;
		cout << "Toplam xp: " << toplam2 << endl << endl;
	}
	else if (sayac == 2)
	{
		int k = 1;
		toplam2 = toplam + xp + xp2;
		for (; ;)
		{
			islem = (k * 2000) + 500;
			if (toplam2 < islem)
				break;
			toplam2 -= islem;
			k += 1;
		}
		cout << "Seviyeniz: " << k << " (" << toplam2 << "/" << (k * 2000) + 500 << ")" << endl << endl;
	}
	else if (sayac == 3)
	{
		toplam += xp; toplam2 += xp2;
		for (int j = 1; j < seviye2; j++)
		{
			sonuc2 = (j * 2000) + 500;
			toplam2 += sonuc2;
		}
		long long fark;  fark = fabs(toplam2 - toplam);
		cout << endl << "Fark: " << fark << endl << endl;
	}
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Turkish"); string x;
	cout << endl << "Bir se�enek se�in" << endl << endl << " (1)Mycity XP Hesaplama" << endl << " (2)Mycity Coin Hesaplama" << endl << " (3)��k��" << endl;
r:
	x = _getch();
	if (x == "1")//Mycity XP Hesaplama
	{
		int seviye, seviye2, seviyeMaxXp; long long xp, xp2;
	xp1:
		cout << endl << "		MYCITY TOPLAM XP HESAPLAMA" << endl << endl << " (1)Toplam xp'mi bulma" << endl << " (2)�leriye/Geriye d�n�k seviye hesaplama" << endl << " (3)�ki durum aras�ndaki fark" << endl << " (9)G�ncelleme Ge�mi�i" << endl << " (A)Hakk�nda" << endl << endl << " (C)Mycity Coin Hesaplama'ya ge�" << endl << " (E)Programdan ��k" << endl;
	xp10:
		x = _getch();
		if (x == "1")//Toplam XP bulma
		{
		xp11:
			cout << endl << "...�u ana kadar edindi�iniz toplam xp'yi bulur..." << endl << endl;
			xpTOTLevelError:
			cout << "Seviyenizi yaz�n: ";
			cin >> seviye;
			if (seviye < 1 || seviye > 10000)
			{
				cout << endl << "HATA: Girdi�iniz seviye 1 ile 10000 aras�nda olmal�d�r." << endl;
				goto xpTOTLevelError;
			}
			seviyeMaxXp = (seviye * 2000) + 500;
			xpTOTValueError:
			cout << "Profilinizde g�z�ken birikmi� xp say�s�n� yaz�n (??? / " << seviyeMaxXp << "): ";
			cin >> xp;
			if (xp < 0)
			{
				cout << endl << "HATA: Girilen xp miktar� negatif olamaz." << endl;
				goto xpTOTValueError;
			}
			General_Function(seviye, 0, 0, 0, 0, 0, xp, 0, 0, 1);
			cout << " (T)Tekrar Dene" << endl << " (B)Ana Men�" << endl;
		xp12:
			x = _getch();
			if (x == "t" || x == "T")
				goto xp11;
			else if (x == "b" || x == "B")
				goto xp1;
			else goto xp12;
		}
		else if (x == "2")//�leriye d�n�k seviye hesaplama
		{
		xp13:
			cout << endl << "...�leriye/Geriye d�n�k seviyenizi hesaplamaya yarar..." << endl << endl;
			xpFWDBWDLevelError:
			cout << "Seviyenizi yaz�n: ";
			cin >> seviye;
			if (seviye < 1 || seviye > 10000)
			{
				cout << endl << "HATA: Girdi�iniz seviye 1 ile 10000 aras�nda olmal�d�r." << endl;
				goto xpFWDBWDLevelError;
			}
			seviyeMaxXp = (seviye * 2000) + 500;
			xpFWDBWDValueError:
			cout << "Profilinizde g�z�ken birikmi� xp say�s�n� yaz�n (??? / " << seviyeMaxXp << "): ";
			cin >> xp;
			if (xp < 0)
			{
				cout << endl << "HATA: Girilen xp miktar� negatif olamaz." << endl;
				goto xpFWDBWDValueError;
			}
			cout << "�lerde ka� xp almay� hedefliyorsunuz?" << endl << "(Geriye d�n�k hesap yapmak i�in girilecek de�erin ba��na eksi i�areti koyun).. ";
			cin >> xp2;
			General_Function(seviye, 0, 0, 0, 0, 0, xp, xp2, 0, 2);
			cout << " (T)Tekrar Dene" << endl << " (B)Ana Men�" << endl;
		xp14:
			x = _getch();
			if (x == "t" || x == "T")
				goto xp13;
			else if (x == "b" || x == "B")
				goto xp1;
			else goto xp14;
		}
		else if (x == "3")//�ki durum aras�ndaki fark
		{
		xp15:
			cout << endl << "...�ki farkl� seviyede olan oyuncular�n aras�ndaki xp fark�n� bulur..." << endl << endl;
			xpCOMPLevel1Error:
			cout << "Birinci seviyeyi gir: "; cin >> seviye;
			if (seviye < 1 || seviye > 10000)
			{
				cout << endl << "HATA: Girdi�iniz seviye 1 ile 10000 aras�nda olmal�d�r." << endl;
				goto xpCOMPLevel1Error;
			}
			xpCOMPValue1Error:
			cout << "Artan xp: "; cin >> xp;
			if (xp < 0)
			{
				cout << endl << "HATA: Girilen xp miktar� negatif olamaz." << endl;
				goto xpCOMPValue1Error;
			}
			xpCOMPLevel2Error:
			cout << "�kinci seviyeyi gir: "; cin >> seviye2;
			if (seviye2 < 1 || seviye > 10000)
			{
				cout << endl << "HATA: Girdi�iniz seviye 1 ile 10000 aras�nda olmal�d�r." << endl;
				goto xpCOMPLevel2Error;
			}
			xpCOMPValue2Error:
			cout << "Artan xp: "; cin >> xp2;
			if (xp2 < 0)
			{
				cout << endl << "HATA: Girilen xp miktar� negatif olamaz." << endl;
				goto xpCOMPValue2Error;
			}
			General_Function(seviye, seviye2, 0, 0, 0, 0, xp, xp2, 0, 3);
			cout << " (T)Tekrar Dene" << endl << " (B)Ana Men�" << endl;
		xp16:
			x = _getch();
			if (x == "t" || x == "T")
				goto xp15;
			else if (x == "b" || x == "B")
				goto xp1;
			else goto xp16;
		}
		else if (x == "9")//G�ncelleme ge�mi�i
		{
			xpUpdate:
			cout << endl << endl << "...G�ncelleme Ge�mi�i..." << endl << endl << " Programda yap�lan de�i�iklikleri burada g�rebilirsiniz." << endl << endl << "*Ayr�nt�lar�n� g�rmek istedi�iniz s�r�m�n parantez i�indeki numaras�n� yaz�p ENTER tu�una bas�n." << endl << "*Ana men�ye d�nmek i�in B harfini yaz�p ENTER tu�una bas�n." << endl << endl;
			cout << " (103)1.0.3" << endl;
			cout << " (1022)1.0.2.2" << endl;
			cout << " (1021)1.0.2.1" << endl;
			cout << " (102)1.0.2" << endl;
			cout << " (101)1.0.1" << endl << endl;
			cout << " (B)Ana Men�" << endl;
		xpUpdate1:
			cin >> x;
			if (x == "b" || x == "B")
				goto xp1;
			else if (x == "101")
			{
				cout << endl << "...1.0.1 s�r�m�ndeki de�i�iklikler..." << endl << endl;
				cout << "+�leriye d�n�k seviye hesaplama ve �ki durum aras�ndaki fark'� bulma se�enekleri eklendi." << endl << endl;
				cout << " (9)G�ncelleme Ge�mi�i'ne geri d�n" << endl << " (B)Ana Men�" << endl;
			xpUpdate101:
				x = _getch();
				if (x == "9")
					goto xpUpdate;
				else if (x == "b" || x == "B")
					goto xp1;
				else goto xpUpdate101;
			}
			else if (x == "102")
			{
				cout << endl << "...1.0.2 s�r�m�ndeki de�i�iklikler..." << endl << endl;
				cout << "+G�ncelleme ge�mi�i eklendi." << endl << "+Hakk�nda k�sm� eklendi." << endl << "+XP Hesaplay�c�s� ile Coin Hesaplay�c�s� aras�nda ge�i� yolu sa�land�." << endl << "+Hesaplama hatas� d�zeltmeleri." << endl << endl;
				cout << " (9)G�ncelleme Ge�mi�i'ne geri d�n" << endl << " (B)Ana Men�" << endl;
			xpUpdate102:
				x = _getch();
				if (x == "9")
					goto xpUpdate;
				else if (x == "b" || x == "B")
					goto xp1;
				else goto xpUpdate102;
			}
			else if (x == "1021")
			{
				cout << endl << "...1.0.2.1 s�r�m�ndeki de�i�iklikler..." << endl << endl;
				cout << "+Geriye d�n�k seviye hesaplama se�ene�i. �zellikle sezon kasanlar�n i�ine yarayacak bir ekleme." << endl << endl;
				cout << " (9)G�ncelleme Ge�mi�i'ne geri d�n" << endl << " (B)Ana Men�" << endl;
			xpUpdate1021:
				x = _getch();
				if (x == "9")
					goto xpUpdate;
				else if (x == "b" || x == "B")
					goto xp1;
				else goto xpUpdate1021;
			}
			else if (x == "1022")
			{
				cout << endl << "...1.0.2.2 s�r�m�ndeki de�i�iklikler..." << endl << endl;
				cout << "+Girilen seviyenin 1'den daha d���k girilmesi durumunda [BUNU YAPINCA EL�NE NE GE�T�?] art�k sistem uyar� mesaj� verecek ve bu i�lemi ger�ekle�tirmeyecektir." << endl << "+Profilde g�r�len xp miktar�n�n negatif girilmesi engellendi. Bunun i�in �leriye/Geriye d�n�k seviye hesaplama'y� kullan�n." << endl << "+Birka� yaz�m hatas� d�zeltmesi" << endl << endl;
				cout << " (9)G�ncelleme Ge�mi�i'ne geri d�n" << endl << " (B)Ana Men�" << endl;
			xpUpdate1022:
				x = _getch();
				if (x == "9")
					goto xpUpdate;
				else if (x == "b" || x == "B")
					goto xp1;
				else goto xpUpdate1022;
			}
			else if (x == "103")
			{
				cout << endl << "...1.0.3 s�r�m�ndeki de�i�iklikler..." << endl << endl;
				cout << "+Kod �zerinde k���k toparlamalar." << endl << "+'�ki durum aras�ndaki fark' se�ene�ine a��klama eklendi." << endl << endl;
				cout << " (9)G�ncelleme Ge�mi�i'ne geri d�n" << endl << " (B)Ana Men�" << endl;
			xpUpdate103:
				x = _getch();
				if (x == "9")
					goto xpUpdate;
				else if (x == "b" || x == "B")
					goto xp1;
				else goto xpUpdate103;
			}
			else goto xpUpdate1;
		}
		else if (x == "a" || x == "A")//Program hakk�nda
		{
			cout << endl << " S�r�m 1.0.3" << endl << " [Yay�nlanma Tarihi: 13.05.2024]" << endl << endl;
			cout << " (B)Ana Men�" << endl;
		xpAbout:
			x = _getch();
			if (x == "b" || x == "B")
				goto xp1;
			else goto xpAbout;
		}
		else if (x=="c" || x=="C")//Mycity Coin Hesaplay�c�s�na ge�i�
			goto coin1;
		else if (x=="e" || x=="E")//Programdan ��k��
		{}
		else goto xp10;//yukar�daki se�eneklerden hi�biri ise...
	}
	else if (x == "2")//Mycity Coin Hesaplama
	{
		long long sonuc1, sonuc2, sonuc3, y;
	coin1:
		cout << endl << "		MYCITY COIN HESAPLAYICISI" << endl << endl << " Bu program, istatistiklerinizi belli standartlara g�re paraya d�n��t�rerek 'en az,ortalama ve en �ok (��pheli modu)' sahip olabilece�iniz paray� hesaplar." << endl << endl;
		cout << " (1)Ba�lat" << endl << " (2)Nas�l �al���r?" << endl << " (3)Hakk�nda" << endl << " (9)G�ncelleme Ge�mi�i" << endl << endl << " (X)Mycity XP Hesaplama'ya Ge�" << endl << " (E)Programdan ��k" << endl;
	coin10:
		x = _getch();
		if (x == "1")//Coin calculator'u ba�lat�r.
		{
		coin2:
			cout << endl << "...De�erleri girelim..." << endl << endl;
			cout << "	Polis" << endl << "+Tutuklanan oyuncular: ";
			cin >> y;
			sonuc1 = sonuc2 = sonuc3 = 0;
			sonuc1 += y * 150, sonuc2 += y * 150, sonuc3 += y * 150;
			cout << endl << "	H�rs�z	" << endl << "+Soygunlar: ";
			cin >> y;
			sonuc1 += y * 250, sonuc2 += y * 463, sonuc3 += y * 1100;
			cout << endl << "	Bal�k��" << endl << "+Avlanan bal�k: ";
			cin >> y;
			if (y < 150)//E�er oyuncu 150 bal�ktan az tutmu�sa [goldenmare yakalamam�� olma ihtimali g�z �n�nde bulunduruluyor]
			{
				sonuc1 += y * 120, sonuc2 += y * 150, sonuc3 += y * 254;
			}
			else
			{
				sonuc1 += y * 169, sonuc2 += y * 211, sonuc3 += y * 254;
			}
			cout << endl << "	Maden" << endl << "+Toplanan Alt�n: ";
			cin >> y;
			sonuc1 += y * 110, sonuc2 += y * 110, sonuc3 += y * 110;
			cout << endl << "+Sat�lan kristal:" << endl << " Sar�: ";
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
			cin >> y;
			sonuc1 += y * 1200, sonuc2 += y * 1200, sonuc3 += y * 1200;
			cout << endl << "	�ift�i" << endl << "+Sat��: ";
			cin >> y;
			sonuc1 += y * 10, sonuc2 += y * 53, sonuc3 += y * 1300;
			cout << "+Sat�lan Meyveler: ";
			cin >> y;
			sonuc1 += y, sonuc2 += y * 5, sonuc3 += y * 130;
			cout << endl << "	�ef" << endl << "+Tamamlanan sipari�ler: ";
			cin >> y;
			sonuc1 += y * 400, sonuc2 += y * 700, sonuc3 += y * 729;
			cout << endl << endl << " En az: " << sonuc1 << "$" << endl << " Ortalama: " << sonuc2 << "$" << endl << " En �ok: " << sonuc3 << "$" << endl << endl;
			cout << " (T)Tekrar Dene" << endl << " (B)Ana Men�" << endl;
		coin3:
			x = _getch();
			if (x == "t" || x == "T")//Tekrar deneme se�ene�i
				goto coin2;
			else if (x == "b" || x == "B")//Ana men�ye d�nd�r�r
				goto coin1;
			else goto coin3;
		}
		else if (x == "2")//Nas�l �al���r?
		{
			cout << endl << endl << "...Birim ba��na de�erler..." << endl << endl << " En az" << endl;
			cout << "+H�rs�z=250$" << endl << "+Bal�k��=120$ (k�sa vadede) , 169$ (uzun vadede)" << endl << "+�ift�i=10$ (tohum ba��na) , 1$ (meyve ba��na)" << endl << "+�ef=400$" << endl << endl;
			cout << " Ortalama" << endl;
			cout << "+H�rs�z=463$" << endl << "+Bal�k��=150$ (k�sa vadede) , 211$ (uzun vadede)" << endl << "+�ift�i=53$ (tohum ba��na) , 5$ (meyve ba��na)" << endl << "+�ef=700$" << endl << endl;
			cout << " En �ok (��pheli modu)" << endl;
			cout << "+H�rs�z=1100$" << endl << "+Bal�k��=254$" << endl << "+�ift�i=1300$ (tohum ba��na) , 130$ (meyve ba��na)" << endl << "+�ef=729$" << endl << endl;
			cout << "...Sabit olanlar..." << endl << endl << "+Polis=150$" << endl << "+Maden:" << endl << " +Toplanan alt�n=110$" << endl << " +Sar� Kristal=200$" << endl << " +Mavi Kristal=342$" << endl << " +Mor Kristal=600$" << endl << " +Ye�il Kristal=800$" << endl << " +K�rm�z� Kristal=1200$" << endl << endl;
			cout << " (B)Ana Men�" << endl;
		coin4:
			x = _getch();
			if (x == "b" || x == "B")
				goto coin1;
			else goto coin4;
		}
		else if (x == "3")//Hakk�nda
		{
			cout << endl << " S�r�m 1.0.3" << endl << " [Yay�nlanma Tarihi: 13.05.2024]" << endl << endl;
			cout << " (B)Ana Men�" << endl;
		coinAbout:
			x = _getch();
			if (x == "b" || x == "B")
				goto coin1;
			else goto coinAbout;
		}
		else if (x == "9")//G�ncelleme Ge�mi�i
		{
		coinUpdate:
			cout << endl << endl << "...G�ncelleme Ge�mi�i..." << endl << endl;
			cout << " Programda yap�lan de�i�iklikleri burada g�rebilirsiniz." << endl << endl << "*Ayr�nt�lar�n� g�rmek istedi�iniz s�r�m�n parantez i�indeki numaras�n� yaz�p ENTER tu�una bas�n." << endl << "*Ana men�ye d�nmek i�in B harfini yaz�p ENTER tu�una bas�n." << endl << endl;
			cout << " (103)1.0.3" << endl;
			cout << " (1021)1.0.2.1" << endl;
			cout << " (102)1.0.2" << endl;
			cout << " (101)1.0.1" << endl << endl << " (B)Ana Sayfa" << endl;
		coinUpdate1:
			cin >> x;
			if (x == "b" || x == "B")
				goto coin1;
			else if (x == "101")
			{
				cout << endl << "...1.0.1 s�r�m�ndeki de�i�iklikler..." << endl << endl;
				cout << "+G�ncelleme Ge�mi�i eklendi. (ehehehe)" << endl << "+Metin d�zeninde birka� de�i�iklik" << endl;
				cout << "+De�i�tirilen de�erler:" << endl << endl << "            Bal�k��" << endl << " En az (k�sa vadede):125$--->120$" << endl << " En az (uzun vadede):239$--->169$" << endl << " Ortalama (uzun vadede):253$--->211$" << endl << endl;
				cout << " (B)Ana Men�" << endl << " (9)G�ncelleme Ge�mi�i'ne geri d�n" << endl;
			coinUpdate101:
				x = _getch();
				if (x == "b" || x == "B")
					goto coin1;
				else if (x == "9")
					goto coinUpdate;
				else goto coinUpdate101;
			}
			else if (x == "102")
			{
				cout << endl << "...1.0.2 s�r�m�ndeki de�i�iklikler..." << endl << endl;
				cout << "+Art�k Mycity XP Hesaplay�c�s� ile Coin Hesaplay�c�s� bir arada! Bu y�zden ikisi aras�nda d�zen olarak uyumun sa�lanabilmesi i�in birka� de�i�ikli�e gidildi." << endl << endl;
				cout << " (B)Ana Men�" << endl << " (9)G�ncelleme Ge�mi�i'ne geri d�n" << endl;
			coinUpdate102:
				x = _getch();
				if (x == "b" || x == "B")
					goto coin1;
				else if (x == "9")
					goto coinUpdate;
				else goto coinUpdate102;
			}
			else if (x == "1021")
			{
				cout << endl << "...1.0.2.1 s�r�m�ndeki de�i�iklikler..." << endl << endl;
				cout << "+Yaz�m hatas� d�zeltmeleri" << endl << "+De�i�tirilen de�erler:" << endl << endl << "	H�rs�z" << endl << " En �ok: 500$--->1100$" << endl << endl << "	�ift�i" << endl << " En �ok (tohum ba��na): 500$--->1300$" << endl << " En �ok (meyve ba��na): 50$--->130$" << endl << endl;
				cout << " (B)Ana Men�" << endl << " (9)G�ncelleme Ge�mi�i'ne geri d�n" << endl;
			coinUpdate1021:
				x = _getch();
				if (x == "b" || x == "B")
					goto coin1;
				else if (x == "9")
					goto coinUpdate;
				else goto coinUpdate1021;
			}
			else if (x == "103")
			{
				cout << endl << "...1.0.3 s�r�m�ndeki de�i�iklikler..." << endl << endl;
				cout << "+Kod �zerinde k���k toparlamalar." << endl << endl;
				cout << " (9)G�ncelleme Ge�mi�i'ne geri d�n" << endl << " (B)Ana Men�" << endl;
			coinUpdate103:
				x = _getch();
				if (x == "b" || x == "B")
					goto coin1;
				else if (x == "9")
					goto coinUpdate;
				else goto coinUpdate103;
			}
			else goto coinUpdate1;
		}
		else if (x=="x" || x=="X")
			goto xp1;
		else if (x=="e" || x=="E")
		{}
		else goto coin10;
	}
	else if (x == "3")//Programdan ��k��
	{}
	else goto r;
}