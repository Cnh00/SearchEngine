#ifndef INDEX_H_INCLUDED
#define INDEX_H_INCLUDED
#include "stat.h"
#include <vector>

class Index{
public:
    virtual void indexer(vector<Stat>)=0;//ajouter le vecteur des stats a l'index

    virtual vector<Stat> retournerIndex()=0;//retourer l'index dans le flux output


};


#endif // INDEX_H_INCLUDED
