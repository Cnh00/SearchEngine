#ifndef TRAITEURPONCT_H_INCLUDED
#define TRAITEURPONCT_H_INCLUDED

#include<vector>
#include<string>
#include "traiteurText.h"
using namespace std;
class TraiteurPonct : public TraiteurText{
    public:
        vector<string> traitement(const vector<string> textATraite);
};


#endif // TRAITEURPONCT_H_INCLUDED
