#include <iostream>
#include <conio.h>
using namespace std;
string dialog[]
{
	//Language: Turkish
	//NOT: MET�NLER�N BA�INDAK� G�R�NT�LER MET�N D�ZEN�N� KORUMAK AMACIYLA �NEML�D�R.

	//Ana Men�
	{"		MYCITY XP & COIN HESAPLAYICI"},//Index 0
	{" (1)Toplam Xp'mi Bulma"},//Index 1
	{" (2)�leriye/Geriye D�n�k Seviye Hesaplama"},//Index 2
	{" (3)�ki Durum Aras�ndaki Fark"},//Index 3
	{" (4)Coin Hesaplay�c�'y� �al��t�r"},//Index 4
	{" (5)Coin Hesaplay�c� Nas�l �al���r?"},//Index 5
	{" (9)G�ncelleme Ge�mi�i"},//Index 6
	{" (A)Hakk�nda"},//Index 7
	{" (E)Programdan ��k"},//Index 8

	//(1)Toplam Xp'mi Bulma
	{"...�u ana kadar edindi�iniz toplam xp'yi bulur..."},//Index 9
	{"Seviyenizi yaz�n: "},//Index 10
	{"HATA: Girilen seviye 1 ile 10000 aras�nda olmal�d�r."},//Index 11
	{"Profilinizde g�z�ken birikmi� xp say�s�n� yaz�n (??? / "},//Index 12
	{"HATA: Girilen xp miktar� negatif olamaz."},//Index 13
	{"Toplam xp: "},//Index 14
	{" (R)Tekrar Dene"},//Index 15
	{" (M)Ana Men�"},//Index 16

	//(2)�leriye/Geriye D�n�k Seviye Hesaplama
	{"...XP ekleyerek/��kararak ileriye/geriye d�n�k seviyenizi hesaplamaya yarar..."},//Index 17
	{"�lerde ka� xp almay� hedefliyorsunuz?"},//Index 18
	{"NOT: E�er ge�mi�teki seviyenizi buldurmas�n� istiyorsan�z EKS� ��ARET� koyun.. "},//Index 19
	{"Seviyeniz: "},//Index 20

	//(3)�ki Durum Aras�ndaki Fark
	{"...�ki farkl� seviyede olan oyuncular�n aras�ndaki xp fark�n� bulur..."},//Index 21
	{"Birinci oyuncunun seviyesini girin: "},//Index 22
	{"Birinci oyuncunun birikmi� xp'sini girin (??? / "},//Index 23
	{"�kinci oyuncunun seviyesini girin: "},//Index 24
	{"�kinci oyuncunun birikmi� xp'sini girin (??? / "},//Index 25
	{"Fark: "},//Index 26

	//(4)Coin Hesaplay�c�'y� �al��t�r
	{"...De�erleri girelim..."},//Index 27
	{"	Polis"},//Index 28
	{"+Tutuklanan oyuncular: "},//Index 29
	{"	H�rs�z"},//Index 30
	{"+Soygunlar: "},//Index 31
	{"	Bal�k��"},//Index 32
	{"+Avlanan bal�k: "},//Index 33
	{"	Madenci"},//Index 34
	{"+Toplanan alt�n: "},//Index 35
	{"+Sat�lan kristal: "},//Index 36
	{" Sar�: "},//Index 37
	{" Mavi: "},//Index 38
	{" Mor: "},//Index 39
	{" Ye�il: "},//Index 40
	{" K�rm�z�: "},//Index 41
	{"	�ift�i"},//Index 42
	{"+Sat��: "},//Index 43
	{"+Sat�lan meyveler: "},//Index 44
	{"	�ef"},//Index 45
	{"+Tamamlanan sipari�ler: "},//Index 46
	{" En az: "},//Index 47
	{" Ortalama: "},//Index 48
	{" En �ok: "},//Index 49

	//(5)Coin Hesaplay�c� Nas�l �al���r?
	{" Bu program, istatistiklerinizi belli standartlara g�re paraya d�n��t�rerek sahip olabilece�iniz paray� hesaplar."},//Index 50
	{" Burada 3 farkl� t�rden hesaplama yap�l�r:"},//Index 51
	{"+En az"},//Index 52
	{"+Ortalama"},//Index 53
	{"+En �ok (��pheli Modu)"},//Index 54
	{"...Birim Ba��na De�erler..."},//Index 55
	{" En az"},//Index 56
	{"+H�rs�z = 250$"},//Index 57
	{"+Bal�k�� = 120$ (k�sa vadede) , 169$ (uzun vadede)"},//Index 58
	{"+�ift�i = 10$ (tohum ba��na) , 1$ (meyve ba��na)"},//Index 59
	{"+�ef = 400$"},//Index 60
	{" Ortalama"},//Index 61
	{"+H�rs�z = 463$"},//Index 62
	{"+Bal�k�� = 150$ (k�sa vadede) , 211$ (uzun vadede)"},//Index 63
	{"+�ift�i = 53$ (tohum ba��na) , 15$ (meyve ba��na)"},//Index 64
	{"+�ef = 700$"},//Index 65
	{" En �ok (��pheli Modu)"},//Index 66
	{"+H�rs�z = 1100$"},//Index 67
	{"+Bal�k�� = 254$"},//Index 68
	{"+�ift�i = 1300$ (tohum ba��na) , 200$ (meyve ba��na)"},//Index 69
	{"+�ef = 729$"},//Index 70
	{"...Sabit Olanlar..."},//Index 71
	{"+Polis = 150$"},//Index 72
	{"+Madenci:"},//Index 73
	{" +Toplanan alt�n = 115$"},//Index 74
	{" +Sar� Kristal = 200$"},//Index 75
	{" +Mavi Kristal = 342$"},//Index 76
	{" +Mor Kristal = 600$"},//Index 77
	{" +Ye�il Kristal = 800$"},//Index 78
	{" +K�rm�z� Kristal = 1200$"},//Index 79

	//(9)G�ncelleme Ge�mi�i
	{"...G�ncelleme Ge�mi�i..."},//Index 80
	{" Programda yap�lan de�i�iklikleri burada g�rebilirsiniz."},//Index 81
	{"*Ayr�nt�lar�n� g�rmek istedi�iniz s�r�m�n parantez i�indeki numaras�n� yaz�p ENTER tu�una bas�n."},//Index 82
	{"*Ana men�ye d�nmek i�in M harfini yaz�p ENTER tu�una bas�n."},//Index 83
	{" (9)G�ncelleme Ge�mi�i'ne Geri D�n"},//Index 84
	{"	MYCITY XP HESAPLAYICI"},//Index 85
	{"	MYCITY COIN HESAPLAYICI"},//Index 86

	//(A)Hakk�nda
	{"	HAKKINDA"},//Index 87
	{" S�r�m 1.0.4 (T�rk�e)"},//Index 88
	{" [Yay�nlanma Tarihi: 18.05.2024]"},//Index 89
	{" Emir �nl� (@emirunlusoftware) taraf�ndan haz�rland�."},//Index 90
	{" https://github.com/emirunlusoftware"},//Index 91
	{" T�rk�e �eviri: "},//Index 92
	{"Emir �nl� (@emirunlusoftware)"},//Index 93

	//1.0.1
	{" (101)1.0.1"},//Index 94
	{"...1.0.1 s�r�m�ndeki de�i�iklikler..."},//Index 95
	{"+'�leriye D�n�k Seviye Hesaplama' ve '�ki Durum Aras�ndaki Fark' se�enekleri eklendi."},//Index 96
	{"+Metin d�zeninde birka� de�i�iklik."},//Index 97
	{"+De�i�tirilen de�erler:"},//Index 98
	{"	Bal�k��"},//Index 99
	{" En az (k�sa vadede): 125$--->120$"},//Index 100
	{" En az (uzun vadede): 239$--->169$"},//Index 101
	{" Ortalama (uzun vadede): 253$--->211$"},//Index 102

	//1.0.2
	{" (102)1.0.2"},//Index 103
	{"...1.0.2 s�r�m�ndeki de�i�iklikler..."},//Index 104
	{"+'G�ncelleme Ge�mi�i' eklendi."},//Index 105
	{"+'Hakk�nda' k�sm� eklendi."},//Index 106
	{"+XP Hesaplay�c� ile Coin Hesaplay�c� aras�nda ge�i� yolu sa�land�."},//Index 107
	{"+Baz� hesaplama hatas� d�zeltmeleri."},//Index 108
	{"+Art�k Mycity XP Hesaplay�c�s� ile Coin Hesaplay�c�s� bir arada! Bu y�zden ikisi aras�nda d�zen olarak uyumun sa�lanabilmesi i�in birka� de�i�ikli�e gidildi."},//Index 109

	//1.0.2.1
	{" (1021)1.0.2.1"},//Index 110
	{"...1.0.2.1 s�r�m�ndeki de�i�iklikler..."},//Index 111
	{"+Geriye D�n�k Seviye Hesaplama se�ene�i. �zellikle sezon kasanlar�n i�ine yarayacak bir ekleme."},//Index 112
	{"+Yaz�m hatas� d�zeltmeleri"},//Index 113
	//"+De�i�tirilen de�erler:" (Index 98)
	{"	H�rs�z"},//Index 114
	{" En �ok: 500$--->1100$"},//Index 115
	{"	�ift�i"},//Index 116
	{" En �ok (tohum ba��na): 500$--->1300$"},//Index 117
	{" En �ok (meyve ba��na): 50$--->130$"},//Index 118

	//1.0.2.2
	{" (1022)1.0.2.2"},//Index 119
	{"...1.0.2.2 s�r�m�ndeki de�i�iklikler..."},//Index 120
	{"+Girilen seviyenin 1'den daha d���k girilmesi durumunda [BUNU YAPINCA EL�NE NE GE�T�?] art�k sistem uyar� mesaj� verecek ve bu i�lemi ger�ekle�tirmeyecektir."},//Index 121
	{"+Profilde g�r�len xp miktar�n�n negatif girilmesi engellendi. Bunun i�in �leriye/Geriye d�n�k seviye hesaplama'y� kullan�n."},//Index 122
	//"+Yaz�m hatas� d�zeltmeleri." (Index 113)

	//1.0.3
	{" (103)1.0.3"},//Index 123
	{"...1.0.3 s�r�m�ndeki de�i�iklikler..."},//Index 124
	{"+Kod �zerinde k���k toparlamalar."},//Index 125
	{"+'�ki Durum Aras�ndaki Fark' se�ene�ine a��klama eklendi."},//Index 126

	//1.0.4
	{" (104)1.0.4"},//Index 127
	{"...1.0.4 s�r�m�ndeki de�i�iklikler..."},//Index 128
	{"+Hepsi bir arada! Art�k XP ve Coin hesaplay�c�lar� tek bir men�de."},//Index 129
	{"+Bu yaz�l�m� terc�me etmek art�k daha kolay, kod taban�ndaki birka� de�i�iklik bu kolayl��� sa�lad�."},//Index 130
	{"+Ana Men�'ye gitmek i�in M tu�una bas�n, B tu�una de�il. Ve tekrar denemek i�in R tu�una bas�n, T tu�una de�il."},//Index 131
	//"+Metin d�zeninde birka� de�i�iklik." (Index 97)
	//"+Yaz�m hatas� d�zeltmeleri." (Index 113)
	//"+De�i�tirilen de�erler:" (Index 98)
	//" �ift�i" (Index 116)
	{" Ortalama (meyve ba��na): 5$--->15$"},//Index 132
	{" En �ok (meyve ba��na): 130$--->200$"},//Index 133
	{"	Madenci"},//Index 134
	{" Toplanan alt�n: 110$--->115$"},//Index 135

	//Ekstralar
	{"Devam etmek i�in ENTER tu�una bas�n..."},//Index 136
	{"...Coin Hesaplay�c� Nas�l �al���r?..."},//Index 137
	{" SONU�LAR"},//Index 138
};

void About()
{
	cout << endl << endl << dialog[87] << endl << endl << dialog[88] << endl << dialog[89] << endl << endl << dialog[90] << endl << dialog[91] << endl << endl << dialog[92] << dialog[93] << endl << endl;
	cout << dialog[16] << endl;
}

void UpdateLog()
{
	cout << endl << endl << dialog[80] << endl << endl << dialog[81] << endl << endl << dialog[82] << endl << dialog[83] << endl << endl;
	cout << dialog[127] << endl;
	cout << dialog[123] << endl;
	cout << dialog[119] << endl;
	cout << dialog[110] << endl;
	cout << dialog[103] << endl;
	cout << dialog[94] << endl << endl;
	cout << dialog[16] << endl;
}

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
		cout << endl << dialog[14] << toplam2 << endl << endl;
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
		cout << endl << dialog[20] << k << " (" << toplam2 << "/" << (k * 2000) + 500 << ")" << endl << endl;
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
		cout << endl << dialog[26] << fark << " xp" << endl << endl;
	}
	return 0;
}

int LvlMaxXP(int SvyMaxXp, int seviye)
{
	SvyMaxXp = (seviye * 2000) + 500;
	return SvyMaxXp;
}

int main()
{
	setlocale(LC_ALL, "Turkish"); string x;
	int seviye, seviye2; long long xp, xp2, min, avg, max, y;
main:
	cout << endl << endl << dialog[0] << endl << endl << dialog[1] << endl << dialog[2] << endl << dialog[3] << endl << endl << dialog[4] << endl << dialog[5] << endl << endl << dialog[6] << endl << dialog[7] << endl << dialog[8] << endl;
main_x:
	x = _getch();
	if (x == "1")//(1)Toplam Xp'mi Bulma
	{
	main1:
		cout << endl << endl << dialog[9] << endl << endl;
		xpTOTLevelError:
		cout << dialog[10];
		cin >> seviye;
		if (seviye < 1 || seviye > 10000)
		{
			cout << endl << dialog[11] << endl;
			goto xpTOTLevelError;
		}
		xpTOTValueError:
		cout << dialog[12] << LvlMaxXP(0, seviye) << "): ";
		cin >> xp;
		if (xp < 0)
		{
			cout << endl << dialog[13] << endl;
			goto xpTOTValueError;
		}
		General_Function(seviye, 0, 0, 0, 0, 0, xp, 0, 0, 1);
		cout << dialog[15] << endl << dialog[16] << endl;
	main11:
		x = _getch();
		if (x == "r" || x == "R")
			goto main1;
		else if (x == "m" || x == "M")
			goto main;
		else goto main11;
	}
	else if (x == "2")//(2)�leriye/Geriye D�n�k Hesaplama
	{
	main2:
		cout << endl << endl << dialog[17] << endl << endl;
		xpFWDBWDLevelError:
		cout << dialog[10];
		cin >> seviye;
		if (seviye < 1 || seviye > 10000)
		{
			cout << endl << dialog[11] << endl;
			goto xpFWDBWDLevelError;
		}
		xpFWDBWDValueError:
		cout << dialog[12] << LvlMaxXP(0, seviye) << "): ";
		cin >> xp;
		if (xp < 0)
		{
			cout << endl << dialog[13] << endl;
			goto xpFWDBWDValueError;
		}
		cout << dialog[18] << endl << dialog[19];
		cin >> xp2;
		General_Function(seviye, 0, 0, 0, 0, 0, xp, xp2, 0, 2);
		cout << dialog[15] << endl << dialog[16] << endl;
	main21:
		x = _getch();
		if (x == "r" || x == "R")
			goto main2;
		else if (x == "m" || x == "M")
			goto main;
		else goto main21;
	}
	else if (x == "3")//(3)�ki Durum Aras�ndaki Fark
	{
	main3:
		cout << endl << endl << dialog[21] << endl << endl;
		xpDIFFLevel1Error:
		cout << dialog[22]; cin >> seviye;
		if (seviye < 1 || seviye > 10000)
		{
			cout << endl << dialog[11] << endl;
			goto xpDIFFLevel1Error;
		}
		xpDIFFValue1Error:
		cout << dialog[23] << LvlMaxXP(0, seviye) << "): "; cin >> xp;
		if (xp < 0)
		{
			cout << endl << dialog[13] << endl;
			goto xpDIFFValue1Error;
		}
		xpDIFFLevel2Error:
		cout << dialog[24]; cin >> seviye2;
		if (seviye2 < 1 || seviye > 10000)
		{
			cout << endl << dialog[11] << endl;
			goto xpDIFFLevel2Error;
		}
		xpDIFFValue2Error:
		cout << dialog[25] << LvlMaxXP(0, seviye2) << "): "; cin >> xp2;
		if (xp2 < 0)
		{
			cout << endl << dialog[13] << endl;
			goto xpDIFFValue2Error;
		}
		General_Function(seviye, seviye2, 0, 0, 0, 0, xp, xp2, 0, 3);
		cout << dialog[15] << endl << dialog[16] << endl;
	main31:
		x = _getch();
		if (x == "r" || x == "R")
			goto main3;
		else if (x == "m" || x == "M")
			goto main;
		else goto main31;
	}
	else if (x == "4")//(4)Coin Hesaplay�c�'y� Ba�lat
	{
		main4:
		cout << endl << endl << dialog[27] << endl << endl;
		cout << dialog[28] << endl << dialog[29];
		cin >> y;
		min = avg = max = 0;
		min += y * 150, avg += y * 150, max += y * 150;
		cout << endl << dialog[30] << endl << dialog[31];
		cin >> y;
		min += y * 250, avg += y * 463, max += y * 1100;
		cout << endl << dialog[32] << endl << dialog[33];
		cin >> y;
		if (y < 150)//E�er oyuncu 150 bal�ktan daha az bal�k avlam��sa [Oyuncunun Goldenmare yakalamad��� kabul ediliyor.]
		{
			min += y * 120, avg += y * 150, max += y * 254;
		}
		else
		{
			min += y * 169, avg += y * 211, max += y * 254;
		}
		cout << endl << dialog[34] << endl << dialog[35];
		cin >> y;
		min += y * 115, avg += y * 115, max += y * 115;
		cout << endl << dialog[36] << endl << dialog[37];
		cin >> y;
		min += y * 200, avg += y * 200, max += y * 200;
		cout << dialog[38];
		cin >> y;
		min += y * 342, avg += y * 342, max += y * 342;
		cout << dialog[39];
		cin >> y;
		min += y * 600, avg += y * 600, max += y * 600;
		cout << dialog[40];
		cin >> y;
		min += y * 800, avg += y * 800, max += y * 800;
		cout << dialog[41];
		cin >> y;
		min += y * 1200, avg += y * 1200, max += y * 1200;
		cout << endl << dialog[42] << endl << dialog[43];
		cin >> y;
		min += y * 10, avg += y * 53, max += y * 1300;
		cout << dialog[44];
		cin >> y;
		min += y, avg += y * 15, max += y * 200;
		cout << endl << dialog[45] << endl << dialog[46];
		cin >> y;
		min += y * 400, avg += y * 700, max += y * 729;
		cout << endl << endl << dialog[138] << endl << dialog[47] << min << "$" << endl << dialog[48] << avg << "$" << endl << dialog[49] << max << "$" << endl << endl;
		cout << dialog[15] << endl << dialog[16] << endl;
	main41:
		x = _getch();
		if (x == "r" || x == "R")
			goto main4;
		else if (x == "m" || x == "M")
			goto main;
		else goto main41;
	}
	else if (x == "5")//(5)Coin Hesaplay�c� Nas�l �al���r?
	{
		cout << endl << endl << dialog[137] << endl << endl << dialog[50] << endl << dialog[51];
		cout << endl << endl << dialog[52] << endl << dialog[53] << endl << dialog[54] << endl << endl;
		cout << dialog[136] << endl;
	main5:
		x = _getch();
		if (x == "\r") {}
		else goto main5;
		cout << endl << dialog[55] << endl << endl << dialog[56] << endl;
		cout << dialog[57] << endl << dialog[58] << endl << dialog[59] << endl << dialog[60] << endl << endl;
		cout << dialog[61] << endl;
		cout << dialog[62] << endl << dialog[63] << endl << dialog[64] << endl << dialog[65] << endl << endl;
		cout << dialog[66] << endl;
		cout << dialog[67] << endl << dialog[68] << endl << dialog[69] << endl << dialog[70] << endl << endl;
		cout << dialog[136] << endl;
	main51:
		x = _getch();
		if (x == "\r") {}
		else goto main51;
		cout << endl << dialog[71] << endl << endl << dialog[72] << endl << dialog[73] << endl << dialog[74] << endl << dialog[75] << endl << dialog[76] << endl << dialog[77] << endl << dialog[78] << endl << dialog[79] << endl << endl;
		cout << dialog[16] << endl;
	main52:
		x = _getch();
		if (x == "m" || x == "M")
			goto main;
		else goto main52;
	}
	else if (x == "9")//(9)G�ncelleme Ge�mi�i
	{
	update:
		UpdateLog();
	update_x:
		cin >> x;
		if (x == "m" || x == "M")
			goto main;
		else if (x == "101")
		{
			cout << endl << endl << dialog[95] << endl;
			cout << endl << endl << dialog[85] << endl << dialog[96];
			cout << endl << endl << dialog[86] << endl << dialog[105] << endl << dialog[97] << endl << dialog[98];
			cout << endl << endl << dialog[99] << endl << dialog[100] << endl << dialog[101] << endl << dialog[102];
			cout << endl << endl << dialog[84] << endl << dialog[16] << endl;
		v101:
			x = _getch();
			if (x == "9")
				goto update;
			else if (x == "m" || x == "M")
				goto main;
			else goto v101;
		}
		else if (x == "102")
		{
			cout << endl << endl << dialog[104] << endl;
			cout << endl << endl << dialog[85] << endl << dialog[105] << endl << dialog[106] << endl << dialog[107] << endl << dialog[108];
			cout << endl << endl << dialog[86] << endl << dialog[109];
			cout << endl << endl << dialog[84] << endl << dialog[16] << endl;
		v102:
			x = _getch();
			if (x == "9")
				goto update;
			else if (x == "m" || x == "M")
				goto main;
			else goto v102;
		}
		else if (x == "1021")
		{
			cout << endl << endl << dialog[111] << endl;
			cout << endl << endl << dialog[85] << endl << dialog[112];
			cout << endl << endl << dialog[86] << endl << dialog[113] << endl << dialog[98] << endl << endl << dialog[114] << endl << dialog[115];
			cout << endl << endl << dialog[116] << endl << dialog[117] << endl << dialog[118];
			cout << endl << endl << dialog[84] << endl << dialog[16] << endl;
		v1021:
			x = _getch();
			if (x == "9")
				goto update;
			else if (x == "m" || x == "M")
				goto main;
			else goto v1021;
		}
		else if (x == "1022")
		{
			cout << endl << endl << dialog[120] << endl;
			cout << endl << endl << dialog[85] << endl << dialog[121] << endl << dialog[122] << endl << dialog[113];
			cout << endl << endl << dialog[84] << endl << dialog[16] << endl;
		v1022:
			x = _getch();
			if (x == "9")
				goto update;
			else if (x == "m" || x == "M")
				goto main;
			else goto v1022;
		}
		else if (x == "103")
		{
			cout << endl << endl << dialog[124] << endl;
			cout << endl << endl << dialog[85] << endl << dialog[125] << endl << dialog[126];
			cout << endl << endl << dialog[84] << endl << dialog[16] << endl;
		v103:
			x = _getch();
			if (x == "9")
				goto update;
			else if (x == "m" || x == "M")
				goto main;
			else goto v103;
		}
		else if (x == "104")
		{
			cout << endl << endl << dialog[128] << endl;
			cout << endl << endl << dialog[129] << endl << dialog[130] << endl << dialog[131] << endl << dialog[97] << endl << dialog[113];
			cout << endl << endl << dialog[86] << endl << dialog[98] << endl << endl << dialog[116] << endl << dialog[132] << endl << dialog[133];
			cout << endl << endl << dialog[134] << endl << dialog[135];
			cout << endl << endl << dialog[84] << endl << dialog[16] << endl;
		v104:
			x = _getch();
			if (x == "9")
				goto update;
			else if (x == "m" || x == "M")
				goto main;
			else goto v104;
		}
		else goto update_x;
	}
	else if (x == "a" || x == "A")//(A)Hakk�nda
	{
		About();
	about:
		x = _getch();
		if (x == "m" || x == "M")
			goto main;
		else goto about;
	}
	else if (x == "e" || x == "E") {}//(E)Programdan ��k
	else goto main_x;
}