#include <iostream>
#include <fstream> //Bibilioteka do obs³ugi plików
#include <cstdlib>

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{

    fstream plik; //Zmienna z pliku fstream
    //MTBF, mean time between failures - œredni czas bezawaryjnej pracy dysku
    plik.open("wizytowka.txt",ios::in);

    if(plik.good()==false)//Sprawdza czy plik istnieje
    {
        cout<<"Plik nie istnieje";
        exit(0);
    }

    string linia;
    int nr_linii = 1;

    while(getline(plik,linia))//Jak linie w pliku siê skoñcz¹ to getline zwróci false, dlatego mo¿emy go wrzuciæ do while'a
    {
        switch(nr_linii)
        {
            case 1: imie = linia; break;
            case 2: nazwisko = linia; break;
            case 3: nr_tel = atoi(linia.c_str()); break;//Dziêki takiemu zapisowi przekonwertujemy stringa na inta
        }

        nr_linii++;
    }

    plik.close(); //Trzeba pamiêtaæ o tym ¿e ¿eby zapisaæ coœ do pliku trzeba go najpierw otworzyæ w programie \
    i póŸniej zamkn¹æ

    cout<<imie<<endl;
    cout<<nazwisko<<endl;
    cout<<nr_tel<<endl;

    return 0;
}
