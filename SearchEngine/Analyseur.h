#ifndef ANALYSEUR_H_INCLUDED
#define ANALYSEUR_H_INCLUDED
#include "stat.h"
#include <vector>
class Analyseur {
    public:
        virtual vector<Stat> analyser(string chemin ,const vector<string>)=0;

};


#endif // ANALYSEUR_H_INCLUDED
