#ifndef LECTEUR_H_INCLUDED
#define LECTEUR_H_INCLUDED
#include <iostream>
#include<vector>
#include <fstream>

using namespace std;

class Lecteur {
    public:
         virtual vector<string> lireDoc(string cheminDoc)=0;  // ouverture de fichier a partir du chemin

};


#endif // LECTEUR_H_INCLUDED
