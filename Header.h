#pragma once
#include <string>
#include <iostream>
using namespace std;


class Waggon
{
private:
    int waggonNr;
    double laenge;
public:
    Waggon();                       //default-Konstruktor: in Array Zug Deklaration benötigt
    Waggon(int, double);
    int getWaggonNr();
    void setWaggonNr(int);
    double getLaenge();
    void printData();
    ~Waggon();
};


class Zug
{
private:
        string name;
        int anzWaggons = 0;
public:
    Zug(string);
    Waggon waggons[5];
    void listWaggons();
    void setAnzWaggon(int);
    string getName();
    double durchschnittslaenge();
    bool findWagNr(int);
    ~Zug();
};


