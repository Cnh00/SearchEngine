#include<vector>
#include<string>
#include "TraiteurPro.h"

#include <iostream>
#include<vector>
#include <fstream>



TraiteurPro::TraiteurPro(string Fichiersource){
    this->Fichiersource=Fichiersource;
}

TraiteurPro::TraiteurPro(){}


vector<string> TraiteurPro::traitement(const vector<string> text){
    vector<string> textMin=text;
    vector<string> textFin={};
    string ch;
    vector<string> mots1;
    string mot1;
    {
    ifstream fichier(Fichiersource.c_str());
    if (!fichier.is_open())
        {
            cerr << "impossible d'ouvrir le fichier " << "houf zeyda" << endl;

        };

    while (fichier >> mot1)
        {
            mots1.push_back(mot1);
        };

    fichier.close();
}

    for(long long unsigned int i=0;i<text.size();i++){
        bool r=true;
        for(long long unsigned int j=0;j<mots1.size();j++)
       {

            if(textMin[i]==mots1[j]){

                r=false;
            }
        }
        if (r==true)
            textFin.push_back(textMin[i]);

    }
    return textFin;


}
