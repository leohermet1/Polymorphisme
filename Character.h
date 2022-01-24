#include<iostream>
#include <sstream>
#ifndef CHARACTER_H_
#define CHARACTER_H_


using namespace std;

class Character{
protected:
	float speed_, max_speed_;
	int *nb_crests_;
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
class Mario : public Character{
public:
        std::string WhatAmI() const override {return "Mario";}
};
class Yoshi : public Character{
public:
        std::string WhatAmI() const override {return "Yoshi";}
	virtual void Accelerate() override;
	Yoshi(int);
	~Yoshi();
};

#endif // CHARACTER_H
