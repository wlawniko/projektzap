#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void gra(map<string, string>mapa, vector<string>lista)
{
    srand( time( NULL ) );
    int wylosowane[10];
    for(int i = 0; i < 10; i++)
    {
        wylosowane[i] = -1;
    }
    for(int i=0; i<10; i++)
    {
        int liczba=rand()%(lista.size());
        int czybylo = 0;
        for(int j = 0; j < 10; j++)
        {
            if(wylosowane[j] == liczba)
            {
                czybylo = 1;
                j = 10;
            }
        }
        if(czybylo == 1)
        {
            i--;
        }
        else{
            wylosowane[i] = liczba;
        }
    }
    cout<<"Podaj angielskie tlumaczenie tych slow: \n";
    string odpowiedz, slowo;
    int dobre = 0;
    for(int i = 0; i < 10; i++)
    {
        slowo = lista[wylosowane[i]];
        cout<<i+1<<". "<<slowo<<" - ";
        cin>>odpowiedz;
        if(odpowiedz == mapa[slowo])
        {
            cout<<"dobrze\n";
            dobre++;
        }
        else{
            cout<<"zle\n";
        }
    }
    cout<<"Udalo ci sie odgadnac "<<dobre<<"/10\n";
}
int main()
{
    ifstream infile;
    infile.open("fiszki.txt");
    map <string, string> slownik;
    vector <string>lista;
    string slowo1, slowo2;
    char znak;
    while(infile>>slowo1>>znak>>slowo2){
        slownik[slowo1] = slowo2;
        lista.push_back(slowo1);
    }
    gra(slownik, lista);
    return 0;
}
