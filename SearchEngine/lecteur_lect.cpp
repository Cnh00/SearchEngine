#include"lecteur_lect.h"
#include <iostream>
#include<vector>
#include <fstream>

using namespace std;

vector<string> Lecteur_lect::lireDoc(string cheminDoc){
    vector<string> vtr;
        string txt;
        ifstream MyReadFile(cheminDoc);
        while (MyReadFile >> txt)
        {
            vtr.push_back(txt);
        }
        MyReadFile.close();
        return vtr;

};
