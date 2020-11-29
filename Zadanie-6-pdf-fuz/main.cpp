//
//  main.cpp
//  Zadanie-6-pdf-fuz
//
//  Created by Wojciech Szyjka on 29/11/2020.
//

#include<iostream>
#include<cstdlib>
using namespace std;
 
int NWD(int a, int b)
{
    int pom;
    
    while(b!=0)
    {
        pom = b;
        b = a%b;
        a = pom;
    }
    
    return a;
}
 
int main()
{
    int a, b;
 
    cout << "Podaj dwie liczby:  ";
    cin >> a;
    cout << endl << "a teraz drugą : " ;
    cin >> b ;
 
    cout << "NWD(" << a << "," <<b<< ") = "<< NWD(a,b) << endl;
 
    return 0;
}
