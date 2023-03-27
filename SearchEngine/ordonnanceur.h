#ifndef ORDONNANCEUR_H_INCLUDED
#define ORDONNANCEUR_H_INCLUDED
#include "Stat.h"
#include<vector>
class Ordonnanceur {
    public:
        virtual vector<string> ordonnancer(const vector<Stat> index ,const vector<string>rq) =0;
};


#endif // ORDONNANCEUR_H_INCLUDED
