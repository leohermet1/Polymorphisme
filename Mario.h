#include"Character.h"
#ifndef MARIO_H_
#define MARIO_H_


class Mario : public Character{
public:
	Mario();
	~Mario();
	std::string WhatAmI() const override {return "Mario";}
};

#endif // MARIO_H
