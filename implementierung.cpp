#include "Header.h"


Zug::Zug(string n)
{
    this->name = n;
}

string Zug::getName()
{
    return this->name;
}

void Zug::setAnzWaggon(int anzahl)
{
    this->anzWaggons = anzahl;
}

void Zug::listWaggons()
{
    cout<< "\n### ZUG - DATEN ###\n";
    for (int i = 0; i< this->anzWaggons;i++)
    {
        waggons[i].printData();
    }
}

double Zug::durchschnittslaenge()
{
    double durchschnitt = 0;
    for (int i = 0; i < this->anzWaggons; i++)
    {
        durchschnitt += waggons[i].getLaenge();
    }
    return (durchschnitt / this->anzWaggons);
}

bool Zug::findWagNr(int gesuchtNr)
{
    bool verfuegbarkeit = false;
    for(int i = 0; i < this->anzWaggons; i++)
    {
        if (gesuchtNr == waggons[i].getWaggonNr())
        {
            verfuegbarkeit = true;
            break;
        }
    }
    return verfuegbarkeit;
}

Zug::~Zug()
{
}






Waggon::Waggon()
{
//    cout << "\n(Default) Konstruktor für Waggon " << this->waggonNr << " aufgerufen./n";
}


Waggon::Waggon(int nr, double length)
{
    this->waggonNr = nr;
    this->laenge = length;
    
//    cout<< "\nErweiterter Konstruktor für Waggon" << this->waggonNr << " aufgerufen./n";
}

int Waggon::getWaggonNr()
{
    return this->waggonNr;
}

void Waggon::setWaggonNr(int nr)
{
    this->waggonNr = nr;
}

double Waggon::getLaenge()
{
    return this->laenge;
}

void Waggon::printData()
{
    cout<<"\nNummer des Waggons: " << this->waggonNr << "     Länge des Waggons: " << this->laenge << endl;
}

Waggon::~Waggon()
{
//    cout<< "\nDestruktor des Waggon " << this->waggonNr << " aufgerufen./n";
}
