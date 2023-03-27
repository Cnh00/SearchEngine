#include "stat.h"
#include <vector>
#include"analyseurFreq.h"
#include <bits/stdc++.h>

vector<Stat> AnalyseurFreq::analyser(string chemin,vector<string>mots){
    vector<Stat> res;
    set<string> ensemble;
    Stat x;
    x.chemin=chemin;
    for(int i=0;i<mots.size();i++)
    {
        ensemble.insert(mots[i]);
    }
    auto iter=ensemble.begin();
    while(iter != ensemble.end())
    {
            x.mot=*iter;
            x.statMot=0;
        for(int j=0;j<mots.size();j++){
            if(x.mot==mots[j]){
                x.statMot++;
            }
        }
        res.push_back(x);
        iter++;
    }
    return res;
}
