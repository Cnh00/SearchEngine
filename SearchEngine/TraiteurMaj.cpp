#include<vector>
#include<string>
#include "TraiteurMaj.h"
#include"iostream"
using namespace std;
vector<string> TraiteurMaj::traitement(const vector<string> text){
    //cout<<"bsh naaml traitement 2 "<<endl;
    vector<string> textMin=text;
    string ch;
    //cout<<"taille l vecteur textMin hua : "<<textMin.size()<<endl;
    for(int i=0;i<textMin.size();i++){
       // cout<<"bsh naaml l klma :["<<i<<"]: "<<textMin[i]<<endl;
        for(int j=0;j<textMin[i].length();j++){
         //   cout<<"ana fl harf ["<<i<<"]["<<j<<"] : "<<textMin[i][j]<<endl;
            if(textMin[i][j]<'Z'+1&&textMin[i][j]>'A'-1){
           //     cout<<"aamalt traitement ll harf : "<<textMin[i][j]<<endl;
                textMin[i][j]=textMin[i][j]+('a'-'A');
            }

        //cout<<"l harf hedha mrigl"<<endl;
        //cout<<"l harf hedha mrigl"<<endl;
        }

    }
    return textMin;
}
