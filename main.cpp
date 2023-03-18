#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main(){
    ifstream infile;
    infile.open("fiszki.txt");
    map <string, string> slownik;
    string slowo1, slowo2;
    char znak;
    while(infile>>slowo1>>znak>>slowo2){
        slownik[slowo1] = slowo2;
    }
    return 0;
}
