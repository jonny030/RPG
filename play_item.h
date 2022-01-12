#ifndef PLAY_ITEM_H
#define PLAY_ITEM_H
#include<QString>
#include<QIcon>
#include<QDebug>
class Equi{
public:
    QIcon icon;
    QString name;
    QString kind;
    int atk;
    int def;
    int money;
    Equi *next;
    Equi(){
        this->icon.addFile("");
        this->name = "";
        this->kind="";
        this->atk=0;
        this->def=0;
        this->next=0;
    }
    Equi(QIcon icon,QString name,QString kind,int atk,int def){
        this->icon=icon;
        this->name = name;
        this->kind=kind;
        this->atk=atk;
        this->def=def;
        this->next=0;
    }
    Equi(QString file,QString name,QString kind,int atk,int def,int money){
        this->icon.addFile(":/assets/images/"+file+".png");
        this->name = name;
        this->kind=kind;
        this->atk=atk;
        this->def=def;
        this->money = money;
        this->next=0;
    };
};
class Equilist{
public:
    Equi *item;
    Equilist(){
        item=0;
    }
    void push(QIcon icon,QString name,QString kind,int atk,int def){
        Equi *newNode = new Equi(icon,name,kind,atk,def);
        if(item == 0){
            item = newNode;
            return;
        }
        Equi *last = item;
        while (last->next != 0){
            last = last->next;
        }
        last->next = newNode;
    }
    void push(QString file,QString name,QString kind,int atk,int def,int money){
        Equi *newNode = new Equi(file,name,kind,atk,def,money);
        if(item == 0){
            item = newNode;
            return;
        }
        Equi *last = item;
        while (last->next != 0){
            last = last->next;
        }
        last->next = newNode;
    }
    Equi find(QString find){
        Equi *f_item = item;
        while(f_item != 0 && f_item->name != find){
            f_item = f_item->next;
        }
        return *f_item;
    }
    QString print(){
        QString out="";
        Equi *f_item = item;
        while(f_item != 0){
            out += QString(f_item->name) +"\n";
            f_item = f_item->next;
        }
        return out+"backend\n";
    }
};
class player{
public:
    QString name;
    QString kind;
    int hp;
    int default_hp;
    int atk;
    int killcount;
    int level;
    int money;
    Equilist back;
    Equi *weapons_1,*weapons_2;
    Equi *armor,*leg;
    player(int hp,int atk){
        this->hp=hp;
        this->default_hp=hp;
        this->atk=atk;
        this->killcount=0;
        this->level=1;
        this->money=0;
        weapons_1 = new Equi();
        weapons_2= new Equi();
        armor = new Equi();
        leg = new Equi();
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
        return armor->def+leg->def;
    }
    void set_weapons_1(Equi *weapons){
        weapons_1=weapons;
    }
    void set_weapons_2(Equi *weapons){
        weapons_2=weapons;
    }
    void set_armor(Equi *armor){
        this->armor=armor;
    }
    void set_leg(Equi *leg){
        this->leg=leg;
    }
};
#endif // PLAY_ITEM_H
