#include"Character.h"
#include"Character.cpp"
#include<vector>

int main(){
	std::vector<Character*> pers;
	pers.push_back(new Mario());
	pers.push_back(new Yoshi(66666));
	cout<<"1\n";
	for(std::vector<Character*>::iterator it = pers.begin() ; it != pers.end(); ++it){
		(**it).Accelerate();
		cout<<"La vitesse de "<<(**it).WhatAmI()<<" est : "<<(**it).speed()<<"\n";
	}
	cout<<"\n2\n";
	for (auto && e : pers){
        	e->Accelerate();
		cout<<"La vitesse de "<<e->WhatAmI()<<" est : "<<e->speed()<<"\n";
	}
	return 0;
}

//int* nb_crests_;
//constructeur
//Yoshi::Yoshi(){
//	nb_crests=new int(val);
//destructeur :
//delete nb_crests_;
//nb crest =new 



