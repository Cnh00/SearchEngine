#ifndef INDEXMAP_H_INCLUDED
#define INDEXMAP_H_INCLUDED


#include "stat.h"
#include <vector>
#include<map>

struct values {
    string chemin ;
    double statMot;

};
class indexMap{
public:
    map<string , vector <values> > index;


    void indexer(vector<Stat>);//ajouter le vecteur des stats a l'index
    vector<Stat> retournerIndex(vector<string> );//retourer l'index dans le flux output

};
#endif // INDEXMAP_H_INCLUDED
