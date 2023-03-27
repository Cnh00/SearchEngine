#include "stat.h"
#include <vector>
#include"analyseurFreq2.h"
#include <bits/stdc++.h>
using namespace std;
vector<Stat> AnalyseurFreq2::analyser(string chemin,const vector<string> mots){
        vector<string> motsAAnalyser ;
        vector<Stat> res;
        motsAAnalyser=mots;
        sort(motsAAnalyser.begin(),motsAAnalyser.end());
        motsAAnalyser.push_back("zzzzzzzzzzzzzzzzzzzzz");
        Stat x;
        x.mot=motsAAnalyser[0];
        x.chemin=chemin;
        x.statMot=1;
        for(int i=1;i<motsAAnalyser.size();i++){

            if(motsAAnalyser[i]==x.mot){
                x.statMot++;
            }
            if(motsAAnalyser[i]!=x.mot){
                res.push_back(x);
                x.mot=motsAAnalyser[i];
                x.statMot=1;
            }
        }
        double total=0;
        for(int i=0;i<res.size();i++){
            total+=res[i].statMot;
        for(int i=0;i<res.size();i++){
            cout<<res[i].mot <<"=>"<<res[i].statMot<<endl;
        }
        return res;
}
