#include<iostream>
#include <sstream>
#ifndef CHARACTER_H_
#define CHARACTER_H_


using namespace std;

class Character{
protected:
	float speed_, max_speed_;
public:
	inline float speed() const;
	Character();
	virtual void Accelerate();
	void Break();
	void display();
	~Character();
	virtual std::string WhatAmI() const = 0;
};
float Character::speed() const{
	return speed_;
}

#endif // CHARACTER_H
