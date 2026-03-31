#include <iostream>
#include <time.h>
//#include <windows.h>

using namespace std;

void sortowanie_babelkowe(int *tab, int n)//wskaznik jest zastosowany zeby uzywac oryginalu tablicy a nie tworzenia jej kopii za kazdym razem
{
    for(int i=1; i<n;i++)
    {
        for(int j = n-1; j>=1; j--)
        {
            if(tab[j]<tab[j-1])
            {
                int bufor;
                bufor = tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=bufor;
            }
        }
    }
}

void quicksort(int *tab, int lewy, int prawy)
{
    int v =tab[(lewy+prawy)/2];
    int i,j,x;
    i = lewy;
    j = prawy;
    do {
        while(tab[i]<v) i++;
        while(tab[j]>v) j--;
        if(i<=j){
            x = tab[i];
            tab[i]=tab[j];
            tab[j]=x;
            i++; j--;
            
        }
    }while (i<=j);
    if(j>lewy) quicksort(tab,lewy,j);
    if(i<prawy) quicksort(tab,i,prawy);
}

int ile;

int main()
{
    cout <<"Porownanie czasow sortowania v.1" <<endl;
    cout<<"Ile losowych liczb w tablicy: ";
    
     cin >> ile;
    
    //dynamiczna alokacja tablicy
    int *tablica;
    tablica = new int[ile];
    
    //inicjowanie generatora
    srand(time(NULL));
    
    //Wczytywanie losowych liczb do tablicy
    for (int i=0; i < ile; i++)
    {
        tablica[i] = rand()%100000+1;
        cout<<tablica[i]<<" ";
    }
        cout <<endl;
       // cout<< "Sortuje teraz babelkowo"<<endl;
        cout<< "Sortuje teraz quicksortem"<<endl;//wymyslec jak to zrobic malejaco
        
        //sortowanie_babelkowe(tablica, ile);
        quicksort(tablica,0,ile-1);
        for(int i = 0; i <ile;i++)
        {
            cout<<tablica[i]<<" ";
        }
        
    delete [] tablica;



    return 0;
}
