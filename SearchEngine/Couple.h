#ifndef COUPLE_H_INCLUDED
#define COUPLE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Couple{
public:
    string chemin;
    double score;

friend bool operator<(Couple c1,Couple c2);
};


#endif // COUPLE_H_INCLUDED
