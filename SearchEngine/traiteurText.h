#ifndef TRAITEURTEXT_H_INCLUDED
#define TRAITEURTEXT_H_INCLUDED
#include<vector>
#include<string>
using namespace std;
class TraiteurText{
public:
    virtual vector<string> traitement(const vector<string> textATraite)=0;
};




#endif // TRAITEURTEXT_H_INCLUDED
