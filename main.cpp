#include "Header.h"


int main()
{
    Zug z("OOP-Speedster");
    
    Waggon w1(1, 25.4);
    Waggon w2(2, 33.6);
    Waggon w3(3, 66.2);
    
    //Waggons hinzufügen
    
    z.waggons[0] = w1;
    z.waggons[1] = w2;
    z.waggons[2] = w3;
    
    //Zaehler setzen
    z.setAnzWaggon(3);
    
    z.listWaggons();
    
    cout << "\nDurchschnittslaenge der Waggons: " <<  z.durchschnittslaenge() << endl;
    
    int gesuchtNr = 1;
    
    cout << "\nVerfügbarkeit der gesuchten Waggon-Nr " << gesuchtNr << ": " << z.findWagNr(gesuchtNr) << endl << endl;
    
}
