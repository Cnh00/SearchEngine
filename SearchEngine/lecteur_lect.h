#ifndef LECTEUR_LECT_H_INCLUDED
#define LECTEUR_LECT_H_INCLUDED
#include "lecteur.h"
#include <iostream>
#include<vector>
#include <fstream>

using namespace std;

class Lecteur_lect:public Lecteur {
public:
    vector<string> lireDoc(string cheminDoc);
};


#endif // LECTEUR_LECT_H_INCLUDED
