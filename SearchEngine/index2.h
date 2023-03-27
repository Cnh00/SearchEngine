#ifndef INDEX2_H_INCLUDED
#define INDEX2_H_INCLUDED
#include "index.h"

class Index2{
private:
    int* longuerIndex=0 ;


public:
    void indexer(vector<Stat>);//ajouter le vecteur des stats a l'index

    vector<Stat> retournerIndex();//retourer l'index dans le flux output

    vector<Stat> chercher(string );


};


#endif // INDEX2_H_INCLUDED
