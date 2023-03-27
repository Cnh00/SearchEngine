#include<vector>
#include<string>
#include <iostream>
#include <algorithm>
#include"moteur.h"


moteur::moteur(vector<Analyseur*>vectAnalyseur
               ,vector<TraiteurText*> vectTraiteur
               ,IndexVect index
               ,vector<Ordonnanceur*> vectOrd ){
    this->vectAnalyseur=vectAnalyseur;
    this->vectTraiteur=vectTraiteur;
    this ->index = index;
     this->vectOrd= vectOrd;
}

vector<Stat> moteur::faireAnalyse(string chemin,const vector<string>mots){
    vector<Stat> res;
    res=vectAnalyseur[0]->analyser(chemin,mots);
    return res;

}

vector<string> moteur::faireTraitement(const vector<string> textATraite){
    vector<string> textTraite=textATraite ;
    for(int i=0;i<vectTraiteur.size();i++){
        textTraite=vectTraiteur[i]->traitement(textTraite);
    }
    return textTraite;
}
   inline int minimum(int a,int b){
       if(a<b)
            return a;
        else return b;
   }


vector<string> moteur::chercher(const string ch,int nbmax){
   vector<string>rq={ch};
   vector<string>rqFinal;
   rq=faireTraitement(rq);
   cout<<"**************************************************************************************\n hedhi l requette kifh wallet :"<<endl;
    for(int i =0;i<rq.size();i++){
        cout<<rq[i]<<endl;
   }

   if(vectOrd.size()>0){
    rq=vectOrd[0]-> ordonnancer(index.index ,rq);
   }
   cout<<"################################################rq.size()="<<rq.size()<<"######################################################"<<endl;
   for(int i =0;i<rq.size();i++){
        cout<<rq[i]<<endl;
   }

   int minn=minimum(rq.size(),nbmax);
   cout<<"*******************************************************************\n min("<<rq.size()<<","<<nbmax<<")= "<<minn<<endl;


   for(int i =0;i<minn;i++){

    rqFinal.push_back(rq[i]);
   }

    cout<<"min(3,5)= "<<minimum(3,5)<<"  min(5,3)="<<minimum(3,5)<<endl;
   return rqFinal;
}



void moteur::faireIndexation(const string cheminFichier,const vector<string> textATraite){
    cout<<"dkhalt ll indexation taa l moteur : l vector tolo => "<<textATraite.size()<<endl;
    vector<string>textTraite;
    vector<Stat>res;
    //cout<<"bsh naaml traitement ll text : "<<endl;
    //for(int i =0;i<textATraite.size();i++){
        //cout<<"non traite : "<<textATraite[i]<<endl;
    //}

    textTraite=faireTraitement(textATraite);
    //for(int i =0;i<textTraite.size();i++){
      //  cout<<"traite : "<<textTraite[i]<<endl;
    //}
    //cout<<"l text non traite raw fih klmt = "<<textATraite.size()<<endl;
    //cout<<"l text traite walla fih klmt = "<<textTraite.size()<<endl;

    res=faireAnalyse(cheminFichier,textTraite);

    //cout<<"sho haw l klmt ili aandi:"<<endl;

    //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    index.indexer(res);


    sort(index.index.begin(),index.index.end());

}
