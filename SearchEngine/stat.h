#ifndef STAT_H_INCLUDED
#define STAT_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class Stat{
    public:
    string mot;
    string chemin;
    double statMot;
    friend bool operator<(
                          //const
                          Stat
                          //&
                          s1,
                          //const
                          Stat
                          //&
                          s2);

};


#endif // STAT_H_INCLUDED
