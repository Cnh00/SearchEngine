#include <iostream>
#include"analyseurFreq2.h"
#include"analyseurFreq.h"
#include"TraiteurMaj.h"
#include"TraiteurPonct.h"
#include"TraiteurPro.h"
#include"moteur.h"
#include"ordoScore.h"
#include"index.h"
#include"indexVect.h"
//#include"indexMap.h"
#include"Lecteur2.h"
#include"lecteur_lect.h"
#include<vector>
#include<string>
#include <iostream>
#include"analyseurFreq2.h"
#include"analyseurFreq.h"
#include"TraiteurMaj.h"
#include"TraiteurPonct.h"
#include"TraiteurPro.h"
#include"moteur.h"
#include"ordoScore.h"
#include"index.h"
#include"indexVect.h"
//#include"indexMap.h"
#include"Lecteur2.h"
#include"lecteur_lect.h"
#include<vector>
#include<string>
#include"stat.h"
#include<algorithm>
#include<dirent.h>
#include <map>

using namespace std;



struct values {
    string chemin ;
    double statMot;
};
class indexMap{
public:
    map<string , values> index;


    void indexer(vector<Stat>);//ajouter le vecteur des stats a l'index
    vector<Stat> retournerIndex(vector<string> );//retourer l'index dans le flux output

};

void indexMap::indexer(vector<Stat> a)
{
    for(auto i = a.begin(); i == a.end(); ++i)
    {
        for(auto j = index.begin(); j == index.end(); ++j)
        {
            if (j->first==i->mot )
            {
                j->second.statMot=i->statMot;

            }
            else
            {
                values v ;
                v.chemin = i->chemin;
                v.statMot = i->statMot;
                index.insert({i->mot, v});
            }
        }

    }


}

vector<Stat> indexMap::retournerIndex(vector<string> a){

    vector<Stat> VS ;
    Stat S ;
    int j =0 ;
    auto i = index .begin();
    while(i != index.end())
    {
        if ( i->first == a[j])
        {
            S.mot=i->first ;
            S.chemin=i->second.chemin;
            S.chemin=i->second.statMot ;
            VS.push_back(S);
            ++i;
            ++j;
        }


    }
    return VS ;

}

int main()
{

    indexMap i2;
    Stat a,b,c ;
    a.mot="test1";
    b.mot="test2";
    c.mot="test3" ;
    a.chemin="test1";
    b.chemin="test2";
    c.chemin="test3";
    a.statMot=3;
    b.statMot=4;
    c.statMot=5 ;
    vector<Stat> VectStat;
    VectStat.push_back(a);
    VectStat.push_back(b);
    VectStat.push_back(c);
    indexMap im ;
    string s1="test1";
    string s2="test2";
    string s3="test";
    vector <string> vstring;
    vstring.push_back(s1);
    vstring.push_back(s2);
    im.indexer(VectStat);
    vector<Stat> final ;
    final=im.retournerIndex(vstring);
    for (auto i=final.begin() ; i==final.end() ; ++i)
    {
        cout << i->mot << endl ;
    }


    return 0;
}

