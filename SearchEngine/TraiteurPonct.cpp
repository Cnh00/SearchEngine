#include<vector>
#include<string>
#include "TraiteurPonct.h"
#include"iostream"
using namespace std;
vector<string> TraiteurPonct::traitement(const vector<string> text){
    vector<string> textSansPonct;
    string ch="";
    for(int i=0;i<text.size();i++){
        for(int j=0;j<text[i].length();j++){
            if((text[i][j]>31)&&(text[i][j]<48)){
                    if(ch!=""){
                        textSansPonct.push_back(ch);
                    }
                ch="";
            }else if ((text[i][j]>57)&&(text[i][j]<65)){
                    if(ch!=""){
                        textSansPonct.push_back(ch);
                    }
                ch="";
            }else if(((text[i][j]>122)&&(text[i][j]<127))||(text[i][j]==10)){
                if(ch!=""){
                    textSansPonct.push_back(ch);
                }
                ch="";
            }else{
                ch.push_back(text[i][j]);
            }
        }
    if(ch!=""){
    textSansPonct.push_back(ch);
    }
    ch="";
    }
    return textSansPonct;
}
