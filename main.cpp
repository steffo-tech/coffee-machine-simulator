#include <iostream>
using namespace std;
int main() {
int scelta;
string scelt;
double prezzo;
cout<<"1 - Caffè";
cout<<"\n2 - Cappuccino";
cout<<"\n3 - Tè";
cout<<"\n4 - Acqua";
cout<<"\nSeleziona una bevanda scegliendo il numero corrispondente: ";
cin>>scelta;
switch (scelta) {
case 1:
scelt="Caffè";
prezzo=1;
break;
case 2:
scelt="cappuccino";
prezzo=1.50; 
break;
case 3:
scelt= "Tè";
prezzo= 1.20;
break;
case 4:
scelt= "acqua";
prezzo= 0.50;
break;
default:
cout<<"Scelta non valida.";
prezzo=0;
break;
}
if (prezzo!=0)
cout<<"Hai scelto: "<<scelt<<" - prezzo: "<<prezzo<<"€";
return 0;
}