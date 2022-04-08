//PiggyBankAssignment
#include <iostream>
using namespace std;

int main () {
double peso;
double reais;
double soles;
double usd;

cout<<"Enter Number of Colombian Pesos"<<"\n";
cin >> peso;
cout<<"Enter Number of Brazilian Reais"<<"\n";
cin >> reais;
cout<<"Enter Number or Peruvian Soles"<<"\n";
cin >> soles;

double peso_usd = peso * 0.05;
double reais_usd = reais * 0.21;
double soles_usd = soles * 0.27;

usd = peso_usd + reais_usd + soles_usd;

cout<<usd;
   return 0; 
}