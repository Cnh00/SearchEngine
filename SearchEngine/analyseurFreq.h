#ifndef ANALYSEURFREQ_H_INCLUDED
#define ANALYSEURFREQ_H_INCLUDED

#include "stat.h"
#include <vector>
#include"Analyseur.h"
class AnalyseurFreq: public Analyseur {
    public:
        vector<Stat> analyser(string chemin , vector<string>mots);

};



#endif // ANALYSEURFREQ_H_INCLUDED
