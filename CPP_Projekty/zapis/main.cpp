#include <iostream>
#include <fstream> //Bibilioteka do obs³ugi plików
using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    cout << "Podaj imie: "; cin>>imie;
    cout << "Podaj nazwisko: "; cin>>nazwisko;
    cout << "Podaj numer telefonu: "; cin>>nr_tel;

    fstream plik; //Zmienna z pliku fstream
    //MTBF, mean time between failures - œredni czas bezawaryjnej pracy dysku
    plik.open("wizytowka.txt",ios::out | ios::app); //Otwarcie pliku do zapisu, jak mamy ios::app, to dopisujemy nowe wartoœci zamiast nadpisywaæ

    plik<<imie<<endl; //Tak sie zapisuje do pliku
    plik<<nazwisko<<endl;
    plik<<nr_tel<<endl;

    plik.close(); //Trzeba pamiêtaæ o tym ¿e ¿eby zapisaæ coœ do pliku trzeba go najpierw otworzyæ w programie \
    i póŸniej zamkn¹æ


    return 0;
}
