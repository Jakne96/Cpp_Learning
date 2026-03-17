#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    /*ODGADYWANIE PLCI*/
//    string imie;
//
//    cout<<"Podaj imie:";
//    cin>>imie;
//
//    int dlugosc = imie.length();
//
//    if(imie[dlugosc - 1]=='a')
//        cout<<"Wydaje mi sie ze jestes kobieta";
//    else cout<<"Wydaje mi sie ze jestes mezczyzna";
        /*ODWRACANIE STRINGA*/
//    string wyraz;
//    cout<<"Podaj wyraz do odwrocenia:";
//    cin>>wyraz;
//
//    int dlugosc = wyraz.length();
//
//    for(int i =dlugosc-1;i>=0;i--){
//        cout<<wyraz[i];
//    }
        /*ZAPISYWANIE STRINGA ZE SPACJEMI*/
//string napis;
//cout<<"Podaj napis: ";
//
//getline(cin,napis);//jeœli robilibyœmy to cin'em to nie uwzglêdni³oby czegokolwiek po spacji.
//
//
//cout<<napis;
        /*KONKATENACJA DWÓCH STRINGÓW*/
//string jeden = "Ala ma ";
//string dwa = "kota";
//string trzy = jeden+dwa;
//cout<<trzy;

 /*ZAMIANA LITER NA SAME DU¯E I SAME MA£E*/
//string napis = "Ala ma kota";
//transform(napis.begin(),napis.end(),napis.begin(),::toupper);
//cout <<napis<<endl;
//transform(napis.begin(),napis.end(),napis.begin(),::tolower);
//cout <<napis<<endl;

/*ZNAJDOWANIE FRAZY W STRINGU*/
//string napis = "Ala ma kota";
//string szukaj = "kot";
//
//size_t pozycja = napis.find(szukaj);
//if(pozycja!=string::npos)
//    cout<<"Znaleziono na pozycji: "<<pozycja;
//else cout <<"Nie znaleziono";

/*USUWANIE CZÊŒCI STRINGA*/

//string napis = "Ala ma kota";
//napis.erase(3,3);//Od pozycji 3 i skasuj 3 znaki
//cout << napis;

/*WSTAWIANIE DO NAPISU*/
//string napis ="Ala ma kota";
//napis.insert(11," Filemona"); //Pozycja,string_do_dodania
//cout<<napis;

/*WSTAWIANIE DO NAPISU*/
//string napis ="Ala ma kota";
//napis.replace(4,2,"nie ma");//Od którego znaku, ile znaków zast¹piæ, czym zast¹piæ
//cout<<napis;

string napis = "Ala ma kota";
string nowynapis = napis.substr(4,7); //Wyjmij 7 liter od 4. znaku
cout<<nowynapis;

    return 0;
}
