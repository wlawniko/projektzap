#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void gra(mapa, lista)
{
    srand( time( NULL ) );
    int liczby=rand()%(lista.size());
    for(int i=0; i<)
    {

    }
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
        lista.push (slowo1);
    }
    return 0;
}
