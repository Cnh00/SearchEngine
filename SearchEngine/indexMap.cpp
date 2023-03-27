#include<map>
#include<vector>
#include"indexMap.h"
#include "stat.h"


void indexMap::indexer(vector<Stat> a)
{

    for(auto &i:a )
    {


        if (!(index[i.mot].empty())) {
            int k=0 ;

            for (auto &j :index[i.mot]) {

                if (j.chemin == i.chemin) {

                    j.statMot = i.statMot;
                    k = 1;
                }
            }
            if (k==0)
            {

                values v ;
                v.statMot=i.statMot;
                v.chemin=i.chemin;
                index[i.mot].push_back(v);

            }

        }
        else
        {


            values v ;
            v.chemin = i.chemin;
            v.statMot = i.statMot;
            index[i.mot].push_back(v);

        }


    }




}
vector<Stat> indexMap::retournerIndex(vector<string> a){

    vector<Stat> VS ;
    Stat S ;

    for(auto &i:a )
    {

        if (index[i].size()!=0 )
        {

            for (auto &j: index[i])
            {


                S.mot = i;
                S.chemin = j.chemin;
                S.statMot = j.statMot;
                VS.push_back(S);
            }
        }
    }

    return VS ;

}
