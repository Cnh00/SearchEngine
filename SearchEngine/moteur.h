#ifndef MOTEUR_H_INCLUDED
#define MOTEUR_H_INCLUDED
#include"Analyseur.h"
#include"traiteurText.h"
#include"ordonnanceur.h"
#include"indexVect.h"
#include<vector>
#include<string>

class moteur{
private:

vector<Analyseur*> vectAnalyseur;
vector<TraiteurText*> vectTraiteur;
vector<Ordonnanceur*> vectOrd;

public:
IndexVect index ;
moteur(vector<Analyseur*>vectAnalyseur
       ,vector<TraiteurText*> vectTraiteur
       ,IndexVect
       ,vector<Ordonnanceur*> vectOrd={}
       );
vector<Stat>faireAnalyse(string chemin,const vector<string>mots);
vector<string> faireTraitement(const vector<string> textATraite);

vector<string> chercher(const string ch,int nbmax);

void faireIndexation(const string cheminFichier,const vector<string> res);


};

#endif // MOTEUR_H_INCLUDED
