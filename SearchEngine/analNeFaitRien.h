#ifndef ANALNEFAITRIEN_H_INCLUDED
#define ANALNEFAITRIEN_H_INCLUDED
#include"Analyseur.h"

class AnalNeFaitRien: public Analyseur {
    public:
        vector<Stat> analyser(string chemin ,vector<string>);

};

#endif // ANALNEFAITRIEN_H_INCLUDED
