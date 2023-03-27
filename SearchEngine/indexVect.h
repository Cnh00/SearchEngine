#ifndef INDEXVECT_H_INCLUDED
#define INDEXVECT_H_INCLUDED
#include "stat.h"
#include "index.h"
#include <vector>
#include <fstream>

class IndexVect{
public:
    vector<Stat> index;
    vector<string> indexedFiles;

    IndexVect(int nb);
    IndexVect();
    void indexer(vector<Stat>);//ajouter le vecteur des stats a l'index
    vector<Stat> retournerIndex();//retourer l'index dans le flux output
    void sauvegarder_index();
    void restorer_index();
};


#endif // INDEXVECT_H_INCLUDED
