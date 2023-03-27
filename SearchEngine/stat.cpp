#include"stat.h"
#include<string>
bool operator<(
               //const
               Stat
               //&
               s1,
               //const
               Stat
               //&
               s2){
    return s1.mot < s2.mot;
}
