#ifndef TRAITEURMAJ_H_INCLUDED
#define TRAITEURMAJ_H_INCLUDED

#include<vector>
#include<string>
#include "traiteurText.h"
using namespace std;
class TraiteurMaj : public TraiteurText{
    public:
        vector<string> traitement(const vector<string> textATraite);
};

#endif // TRAITEURMAJ_H_INCLUDED
