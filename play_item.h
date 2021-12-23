#ifndef PLAY_ITEM_H
#define PLAY_ITEM_H
#include<QString>

class Equi{
public:
    QString name;
    int atk;
    int def;
    Equi(){
        this->name = "";
        this->atk=0;
        this->def=0;
    }
    Equi(QString name,int atk,int def){
        this->name = name;
        this->atk=atk;
        this->def=def;
    };
};
class Equilist{
public:
    Equi item[999];
    Equilist(){
        item[0].name="";
        item[0].atk =0;
        item[0].def =0;
    }
};
class player{
public:
    int hp;
    int default_hp;
    int atk;
    int killcount;
    Equi *weapons_1,*weapons_2;
    Equi *armor_1,*armor_2;
    player(int hp,int atk){
        this->hp=hp;
        this->default_hp=hp;
        this->atk=atk;
        this->killcount=0;
        weapons_1 = new Equi();
        weapons_2= new Equi();
        armor_1 = new Equi();
        armor_2 = new Equi();
    }
    player(int hp){
        this->hp=hp;
        this->default_hp=hp;
        this->atk=1;
    }
    int gethp(){
        return hp*100/default_hp;
    }
    int getatk(){
        return atk+weapons_1->atk+weapons_2->atk;
    }
    int getdef(){
        return armor_1->def+armor_2->def;
    }
    void set_weapons_1(Equi *weapons){
        weapons_1=weapons;
    }
    void set_weapons_2(Equi *weapons){
        weapons_2=weapons;
    }
    void set_armor_1(Equi *armor){
        armor_1=armor;
    }
    void set_armor_2(Equi *armor){
        armor_2=armor;
    }
};
#endif // PLAY_ITEM_H
