#include "stat.h"
#include"ordoScore.h"
#include"Couple.h"
#include<vector>
#include<string>
#include <bits/stdc++.h>

vector<string> OrdoScore::ordonnancer(const vector<Stat> index ,const vector<string>rq){
    cout<<"OrdoScore commance a travailler"<<endl;
    vector<Stat> resRecherche={};
    vector<Couple> resRes={};
    vector<string>resFinal={};
    int j;
    for(int i=0;i<rq.size();i++){
        j=0;
        cout<<"anaaaaaaaaaaaaaaaaaaaaaaaaa fl boule w tawa i= "<<i<<"\n mot index= "<<index[j].mot<<endl;
        cout<<"rq[i]= "<<rq[i]<<" w "<<"index[j].mot"<<index[j].mot<<endl;
        while((rq[i]>index[j].mot)&&(j<index.size()) ){
            cout<<"7assen ana tawa fl index wselt klmt :"<<index[j].mot<<"w ana nlawej aala "<<rq[i]<<endl;
            cout<<"j= "<<j<<" < index.size()"<<index.size()<<endl;
            j++;
        }

        while((rq[i]==index[j].mot)&&(j<index.size()) ){
            resRecherche.push_back(index[j]);
            cout<<"haw kharejt l klma <"<<index[j].mot<<"> chemin taaha "<<index[j].chemin<< " w scorha <<"<<index[j].statMot <<">>                                                                              c bon ili baado"<<endl;
            j++;
            }
    }
    cout<<"ti wiw aala .. kharajt mnha "<<resRecherche.size()<<" elts"<<endl;

    //Stat x;
    Couple c;
    //x.mot="";
    //x.statMot=0;
    c.score=0;
    for(int i=0;i<resRecherche.size();i++){
        c.chemin=resRecherche[i].chemin;
        c.score=0;
        if(c.chemin!=""){
            for(int j=i;j<resRecherche.size();j++){
                if(c.chemin==resRecherche[j].chemin){
                    c.score=c.score+resRecherche[j].statMot;
                    resRecherche[j].chemin="";

                }
            }
            resRes.push_back(c);
            sort(resRes.begin(),resRes.end());
        }



    }


    for(int i=resRes.size()-1;i>-1;i--){
        cout<<"le chemin = "<<resRes[i].chemin<<" de score = "<<resRes[i].score<<endl;
        resFinal.push_back(resRes[i].chemin);
    }
    cout<<"resRes.size()= "<<resRes.size()<<endl;



cout<<"kamalt***********************"<<endl;
return resFinal;
}
