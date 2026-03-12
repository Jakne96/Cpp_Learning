#include <iostream>

using namespace std;

int populacja = 1; int godzin;

int main(){

/*while(populacja <=1000000000)
{
    godzin++;
    populacja *= 2;
    cout<<"minelo godzin:"<<godzin;
    cout<<" liczba bakterii:"<<populacja<<endl;
}
*/
do
{
    godzin++;
    populacja *= 2;
    cout<<"minelo godzin:"<<godzin;
    cout<<" liczba bakterii:"<<populacja<<endl;
}while(populacja <=1000000000);


return 0;
}


/*#include <iostream>

using namespace std;

string imie; int liczba;

int main()
{
    cout <<"Podaj imie:";
    cin>>imie;
    cout<<"Podaj dodatnia liczbe calkowita:";
    cin>>liczba;

    for(int i=1; i<=liczba; i++)
    {
        cout<<i<<". "<< imie <<endl;
    }
    return 0;
}
*/

/*

#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    for(int i=15; i>=0; i--)
    {
        Sleep(1000);
        system("cls");
        cout<<i<<endl;
    }
    cout << "JEBUT";
    return 0;
}
*/
