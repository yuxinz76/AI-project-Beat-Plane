#ifndef GAMEOBJECTS_H__
#define GAMEOBJECTS_H__

#include "ObjectBase.h"
#include "GameWorld.h"

class GameWorld;
//Gameobject
class GameObject : public ObjectBase {
public:
    GameObject(int imageID, int x, int y, int direction, int layer, double size, GameWorld* wrd);
    void set_life(bool lf);
    bool jud_life();
    virtual void set_move(int x1, int y1)=0;
    virtual bool jud_bullet(bool fire)=0;
    virtual bool jud_meteor(bool fire2)=0;
    virtual int get_meteor(){return 0;}
    virtual void add_meteor(){}
    virtual int get_level(){return 0;}
    virtual void add_level(){}
    virtual int get_hp(){return 0;}
    virtual int get_dmg(){return 0;}
    virtual void set_hp(int dg){}
    GameWorld* get_world();
    int gettype();
    void settype(int ty);
    bool track(int x1,int y1,int x2,int y2,double s1,double s2);
private:
    bool life;
    int type;
    GameWorld* world;
};


//Dawnbreaker
class Dawnbreaker : public GameObject {
public:
    Dawnbreaker(GameWorld* wrd);
    virtual void Update();
    virtual void set_move(int x1,int y1);
    virtual bool jud_bullet(bool fire);
    virtual bool jud_meteor(bool fire2);
    virtual int get_meteor();
    virtual int get_level();
    virtual void add_level();
    virtual void add_meteor();
    virtual int get_hp();
    virtual void set_hp(int dg);
private:
    int hp,energy;
    int x_move,y_move;
    int num_met,level;
};


//Star
class Star : public GameObject {
public:
    Star(int x, int y, double size, GameWorld* wrd);
    virtual void Update();
    virtual void set_move(int x1, int y1){}
    virtual bool jud_bullet(bool fire){return false;}
    virtual bool jud_meteor(bool fire2){return false;}
};


//B_bullet
class B_bullet : public GameObject {
public:
    B_bullet(int x, int y, double size, int dmg, GameWorld* wrd);
    virtual void Update();
    virtual void set_move(int x1, int y1){}
    virtual bool jud_bullet(bool fire){return false;}
    virtual bool jud_meteor(bool fire2){return false;}
    virtual int get_dmg();
private:
    int damage;
};


//Alphatron
class Alphatron : public GameObject {
public:
    Alphatron(int x, int y, int hp0,int dmg,int spd,GameWorld* wrd);
    virtual void Update();
    virtual void set_move(int x1, int y1){}
    virtual bool jud_bullet(bool fire){return false;}
    virtual bool jud_meteor(bool fire2){return false;}
    virtual int get_hp();
    virtual void set_hp(int dg);
    virtual int get_dmg();
private:
    int hp,energy;
    int damage,speed;
    int time,move_dir;
};


//Sigmatron
class Sigmatron : public GameObject {
public:
    Sigmatron(int x, int y, int hp0,int spd,GameWorld* wrd);
    virtual void Update();
    virtual void set_move(int x1, int y1){}
    virtual bool jud_bullet(bool fire){return false;}
    virtual bool jud_meteor(bool fire2){return false;}
    virtual int get_hp();
    virtual void set_hp(int dg);
private:
    int hp,speed;
    int time,move_dir;
};


//Omegatron
class Omegatron : public GameObject {
public:
    Omegatron(int x, int y, int hp0,int dmg,int spd,GameWorld* wrd);
    virtual void Update();
    virtual void set_move(int x1, int y1){}
    virtual bool jud_bullet(bool fire){return false;}
    virtual bool jud_meteor(bool fire2){return false;}
    virtual int get_hp();
    virtual void set_hp(int dg);
    virtual int get_dmg();
private:
    int hp,energy;
    int damage,speed;
    int time,move_dir;
};


//R_bullet
class R_bullet : public GameObject {
public:
    R_bullet(int x, int y, int direction, int dmg, GameWorld* wrd);
    virtual void Update();
    virtual void set_move(int x1, int y1){}
    virtual bool jud_bullet(bool fire){return false;}
    virtual bool jud_meteor(bool fire2){return false;}
    virtual int get_dmg();
private:
    int damage;
};


//Power
class Power : public GameObject {
public:
    Power(int x, int y, GameWorld* wrd);
    virtual void Update();
    virtual void set_move(int x1, int y1){}
    virtual bool jud_bullet(bool fire){return false;}
    virtual bool jud_meteor(bool fire2){return false;}
};


//Meteor_goodie
class Meteor_goodie : public GameObject {
public:
    Meteor_goodie(int x, int y, GameWorld* wrd);
    virtual void Update();
    virtual void set_move(int x1, int y1){}
    virtual bool jud_bullet(bool fire){return false;} 
    virtual bool jud_meteor(bool fire2){return false;}
};


//meteor
class Meteor : public GameObject {
public:
    Meteor(int x, int y, GameWorld* wrd);
    virtual void Update();
    virtual void set_move(int x1, int y1){}
    virtual bool jud_bullet(bool fire){return false;} 
    virtual bool jud_meteor(bool fire2){return false;}
};


//Explosion
class Explosion : public GameObject {
public:
    Explosion(int x, int y, GameWorld* wrd);
    virtual void Update();
    virtual void set_move(int x1, int y1){}
    virtual bool jud_bullet(bool fire){return false;} 
    virtual bool jud_meteor(bool fire2){return false;}
};


//Heal
class Heal : public GameObject {
public:
    Heal(int x, int y, GameWorld* wrd);
    virtual void Update();
    virtual void set_move(int x1, int y1){}
    virtual bool jud_bullet(bool fire){return false;} 
    virtual bool jud_meteor(bool fire2){return false;}
};
#endif // GAMEOBJECTS_H__