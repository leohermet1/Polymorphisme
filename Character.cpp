#include"Character.h"
#include<iostream>
#ifndef CHARACTER_CPP_
#define CHARACTER_CPP_



Character::Character(){
	speed_ = 0;
	max_speed_ = 10;
}
Character::~Character(){
}
void Character::Accelerate(){
	speed_+=1;
	if(speed_ >= max_speed_){
		speed_=10;
	}
}
void Character::Break(){
	speed_-=1;
	if(speed_ <= 0){
		speed_=0;	
	}
}
#endif // CHARACTER_CPP

