#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Animal{
	public:
	Animal();
	Animal(float weight, string name, char gender, string color);
	float weight;
	void setWeight(float weight);
	float getWeight();
	string name;
	void setName(string name);
	string getName();
	char gender;
	void setGender(char gender);
	char getGender();
	string color;
	void setColor(string color);
	string getColor();
	
	virtual string GetDescription() const{
	return name1 + " -- " + to_string(weight1) + " lbs " + "\n Gender: " + gender1;}
	
	protected:
	float weight1;
	string name1;
	char gender1;
	string color1;
	

};

class Goat : public Animal{
	public:
	Goat();
	Goat(float weight, string name, char gender, string color, string breed, string spayed, string id, string comments);
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
	string GetDescription() const override{    return name1 + " -- " + to_string(weight1) + " lbs " + "\n Gender: " + gender1 +
        "\n Breed: " + breed1 + " Spayed: " + spayed1 + " ID: " + id1 + "\n " + comments;}
	
	private:
	string breed1;
	string spayed1;
	string id1;
	string comments1;
	
	
};


	Animal::Animal(){
	weight1 = 0;
	name1 = "";
	gender1 = 'z';
	color = "";
	}
	Animal::Animal(float weight, string name, char gender, string color){
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
	void Animal::setGender(char gender){
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
	
/*	virtual string Animal::GetDescription() const{
		return name1 + " -- " + to_string(weight1) + " lbs " + "\n Gender: " + gender1 + "  Color: " + color1;
	}

*/


	Goat::Goat(float weight, string name, char gender, string color, string breed, string spayed, string id, string comments){
	weight1 = weight;
	name1 = name;
	gender1 = gender;
	color1 = color;
	breed1 = breed;
	spayed1 = spayed;
	id1 = id;
	comments1 = comments;}

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
/*	string Goat::GetDescription() const override{
		return name1 + " -- " + to_string(weight1) + " lbs " + "\n Gender: " + gender1 + "  Color: " + color1
	+ "\n Breed: " + breed1 + " Spayed: " + spayed1 + " ID: " + id1 + "\n " + comments;
	}
*/
int main(){

	vector<Animal*> goatList;
	Goat* goat1;
	Goat* goat2;
	Goat* goat3;
	
	unsigned int i;
	float weight2;
	string name2;
	char gender2;
	string color2;
	string breed2;
	string spayed2;
	string id2;
	string comments2;

for (i = 0; i < goatList.size(); ++i){
	
	goatList.at(i) = new Goat();
	cout <<  "What is the goat's name?" << endl;
	cin >> name2;
	cout << "What is the goat's weight? " << endl;
	cin >> weight2;
	cout << "What is the goat's gender? m or f. " << endl;
	cin >> gender2;
	cout << "What is the goat's color?" << endl;
	getline(cin, color2);
/*	cout << "What is the goat's breed?" << endl;
	cin >> breed2;
	cout << "Is the goat spayed? yes or no. " << endl;
	cin >> spayed2;
	cout << "What ist he goat's ID. alphanumeric like HZ123X. " << endl;
	cin >> id2;
	cout << "Any further comments? " << endl;
	getline(cin, comments2);
*/	
	goatList.at(i)->setWeight(weight2);
	goatList.at(i)->setName(name2);
	goatList.at(i)->setGender(gender2);
	goatList.at(i)->setColor(color2);
/*	goatList.at(i)->setBreed(breed2);
	goatList.at(i)->setSpayed(spayed2);
	goatList.at(i)->setId(id2);
	goatList.at(i)->setComments(comments2);
*/	
	    if(i = 0){goatList.push_back(goat1);}
        if(i = 1){goatList.push_back(goat2);}
        if(i = 2){goatList.push_back(goat3);}

}
	for (i = 0; i < goatList.size(); ++i){
		cout << goatList.at(i)->GetDescription() << endl;
		delete goatList.at(i);
	}

	return 0;
}
