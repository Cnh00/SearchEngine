#include "stat.h"
#include <vector>
#include"indexVect.h"
#include <typeinfo>
#include<algorithm>
#include <fstream>


IndexVect::IndexVect(int nb){
    index.reserve(nb);
}
IndexVect::IndexVect() {};
void IndexVect::indexer(vector<Stat> aAjouter ){
    Stat x;
    int j=0;
    int updated=0;
    for(int i=0;i<aAjouter.size();i++){
        if(updated == 0){
            index.push_back(aAjouter[i]);
        }
    indexedFiles.push_back(aAjouter[i].chemin);
    }
}
vector<Stat> IndexVect::retournerIndex(){
    return index;
}
void IndexVect::sauvegarder_index(){
    fstream file1, file2;
    vector<Stat> bib;
    file1.open("C:\\Users\\USER\\Desktop\\indexFiles.txt", ios::out);
    if ( file1.is_open())
     {
         for (auto i:indexedFiles)
            file1<<i<<"\n";
     }
    file1.close();
    file2.open("C:\\Users\\USER\\Desktop\\index.txt", ios::out);
    if (file2.is_open())
     {
         for (auto i1:index)
             file2<<i1.mot<<" "<<i1.chemin<<" "<<i1.statMot<<"\n" ;

     }
    file2.close();
}
void IndexVect::restorer_index(){

    string mot,ch;
    double s;
    Stat x;
    ifstream file2("C:\\Users\\USER\\Desktop\\index.txt");
    while ( file2>> mot >> ch >>s)
    {
        x.mot=mot;
        x.chemin=ch;
        x.statMot=s;
        index.push_back(x);
    }

}
}
