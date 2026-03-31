//Practice Problem: Write a program that first asks the user for the number of elements, N, they wish to store.\
Then, read N integers into an array. Finally, use a loop to calculate and display the sum of all elements in the array.

#include <iostream>


using namespace std;


int liczba_elementow;

int main()
{

    cout << "Podaj liczbe elementow ";
    cin >> liczba_elementow;
    int tab[liczba_elementow];

    for (int i = 0; i < liczba_elementow; i++)
    {
        cout<< "Podaj "<< i+1 << " liczbe ";
        cin>> tab[i];
    }

        int suma = 0;
    for(int i = 0; i < liczba_elementow; i++)
    {
        suma = suma + tab[i];
    }

    cout<<"Suma wynosi: "<<suma<<endl;

    return 0;
}
