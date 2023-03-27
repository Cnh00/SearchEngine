#include"Lecteur2.h"
#include<dirent.h>
#include<vector>
#include<string>

vector<string> Lecteur2::lireDoc(const string cheminFolder){
    DIR *dir;
    vector<string> listeChemins={};
    int x=0;
struct dirent *ent;
if ((dir = opendir (cheminFolder.c_str())) != NULL) {
  /* print all the files and directories within directory */
  while ((ent= readdir (dir)) != NULL) {
    x++;
    if(x>2){
    listeChemins.push_back(ent->d_name);
  }}
  closedir (dir);

}
/*else {
   could not open directory
  perror ("");
  return EXIT_FAILURE;}*/


    return listeChemins;
}
