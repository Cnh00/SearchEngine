#ifndef ORDOSCORE_H_INCLUDED
#define ORDOSCORE_H_INCLUDED
#include "stat.h"
#include"ordonnanceur.h"

class OrdoScore :public Ordonnanceur {
    public:
        vector<string> ordonnancer(const vector<Stat> index ,const vector<string>rq);
};


#endif // ORDOSCORE_H_INCLUDED
