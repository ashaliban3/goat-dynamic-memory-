#ifndef GOAT_H
#define GOAT_H

#include <string>
#include <iostream>
class Animal{
	public:
	Animal();
	Animal(float weight, string name, string gender, string color);
	float weight;
	void setWeight(float weight);
	float getWeight();
	string name;
	void setName(string name);
	string getName();
	string gender;
	void setGender(string gender);
	string getGender();
	string color;
	void setColor(string color);
	string getColor():
	
	virtual string GetDescription() const;
	
	protected:
	float weight1;
	string name1;
	char gender1;
	string color1;
	

};

class Goat : public Animal{
	public:
	Goat();
	Goat(float weight, string name, string gender, string color, string breed, string spayed, string id, string comments);
	string breed;
	void setBreed(string breed);
	string getBreed();
	string spayed;
	void setSpayed(string spayed);
	string getSpayed();
	string id;
	void setId(string id);
	string getId();
	string comments;
	void setComments(string comments);
	string getComments();
	string GetDescription() const override;
	
	private:
	string breed1;
	string spayed1;
	string id1;
	string commments1;
	
	
};

//#endif

