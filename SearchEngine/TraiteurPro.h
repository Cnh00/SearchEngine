#ifndef TRAITEURPRO_H_INCLUDED
#define TRAITEURPRO_H_INCLUDED

#include<vector>
#include<string>
#include "traiteurText.h"

class TraiteurPro : public TraiteurText{
private:
    string Fichiersource;
    public:
        TraiteurPro(string Fichiersource);
        TraiteurPro();
        vector<string> traitement(const vector<string> textATraite);
};

#endif // TRAITEURPRO_H_INCLUDED
