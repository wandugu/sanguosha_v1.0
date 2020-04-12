//
// Created by wandugu on 2020/04/12.
//

#ifndef SANGUOSHA_SOLDIER_H
#define SANGUOSHA_SOLDIER_H

#include <string>
#include <vector>
using namespace std;

using HeroSkill = int(*)(vector<int> &cards);

class soldier {
public:
    int sex;
    int health;
    int country;
    int role;
    string name;
    HeroSkill skill;
};


#endif //SANGUOSHA_SOLDIER_H
