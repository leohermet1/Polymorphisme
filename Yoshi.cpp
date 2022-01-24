#include"Yoshi.h"
#ifndef YOSHI_CPP_
#define YOSHI_CPP_

Yoshi::Yoshi(int val){
        nb_crests_=new int(val);
}
Yoshi::~Yoshi(){
        delete nb_crests_;
}
void Yoshi::Accelerate(){
        speed_+=2;
        if(speed_ >= max_speed_){
                speed_=10;
        }
}

#endif // YOSHI_CPP

