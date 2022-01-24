#include"Character.h"
#include<iostream>

Character::Character(){
	speed_ = 0;
	max_speed_ = 10;
}
Character::~Character(){
}
void Character::Accelerate(){
	if(speed_ < max_speed_){
		speed_+=1;
	}
}
void Character::Break(){
	if(speed_ > 0){
		speed_-=1;	
	}
}
void Character::display(){
	cout<<speed_;
}
void Yoshi::Accelerate(){
        if(speed_ < max_speed_){
		speed_+=2;
        }
}
Yoshi::Yoshi(int val){
	nb_crests_=new int(val);
}
Yoshi::~Yoshi(){
	delete nb_crests_;
}
