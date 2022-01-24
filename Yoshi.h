#include"Character.h"
#ifndef YOSHI_H_
#define YOSHI_H_
#include <string>

class Yoshi : public Character{
protected:
        int *nb_crests_;

public:
	std::string WhatAmI() const override {
		std::string res = std::to_string(*nb_crests_);
	        res+=" crested Yoshi";
        	return res;
	}

        virtual void Accelerate() override;
        Yoshi(int);
        ~Yoshi();
};


#endif // CHARACTER_H
