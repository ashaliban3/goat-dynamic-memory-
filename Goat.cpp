#include "Goat.h"
#include <iostream>
#include <string>
using namespace std;

	Animal::Animal(){
	weight1 = 0;
	name1 = "";
	gender1 = "";
	color = "";
	}
	Animal::Animal(float weight, string name, string gender, string color){
	weight1 = weight;
	name1 = name;
	gender1 = gender;
	color1 = color;
	}
	
	void Animal::setWeight(float weight){
		weight1 = weight;
	}
	float Animal::getWeight(){
		return weight1;
	}
	void Animal::setName(string name){
		name1 = name;
	}
	string Animal::getName(){
		return name1;
	}
	void Animal::setGender(string gender){
		gender1 = gender;
	}
	char Animal::getGender(){
		return gender1;
	}
	void Animal::setColor(string color){
		color1 = color;
	}
	string Animal::getColor(){
		return color1;
	}
	
	virtual string Animal::GetDescription() const{
		return name1 + " -- " + to_string(weight1) + " lbs " + "\n Gender: " + gender1 + "  Color: " + color1;
	}




	Goat::Goat(float weight, string name, char gender, string color, string breed, string spayed, string id, string comments);

	void Goat::setBreed(string breed){
		breed1 = breed;
	}
	string Goat::getBreed(){
		return breed1;
	}

	void Goat::setSpayed(string spayed){
		spayed1 = spayed;
	}
	string Goat::getSpayed(){
		return spayed1;
	}

	void Goat::setId(string id){
		id1 = id;
	}
	string Goat::getId(){
		return id1;
	}

	void Goat::setComments(string comments){
		comments1 = comments;
	}
	string Goat::getComments(){
		return comments;
	}
	string Goat::GetDescription() const override{
		return name1 + " -- " + to_string(weight1) + " lbs " + "\n Gender: " + gender1 + "  Color: " + color1
	+ "\n Breed: " + breed1 + " Spayed: " + spayed1 + " ID: " + id1 + "\n " + comments;
	}

}
