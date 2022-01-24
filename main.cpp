#include"Character.h"
#include"Character.cpp"
#include"Mario.h"
#include"Mario.cpp"
#include"Yoshi.h"
#include"Yoshi.cpp"
#include<vector>


int main(){
	std::vector<Character*>pers;
	pers.push_back(new Mario());
	pers.push_back(new Yoshi(6));
	cout<<"1\n";
	for (std::vector<Character*>::iterator it = pers.begin() ; it != pers.end(); ++it){
		(**it).Accelerate();
		cout<<"La vitesse de "<<(**it).WhatAmI()<<" est de :"<<(**it).speed()<<"\n";
	}
	cout<<"\n2\n";
	for (auto e : pers){
		e->Accelerate();
		cout<<"La vitesse de "<<e->WhatAmI()<<" est de :"<<e->speed()<<"\n";
	}
}
