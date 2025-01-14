#include <vector>
#include <string>
#include <iostream>
using namespace std;

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


for (i = 0; i < goatList.size(); ++i){
	
	goatList.at(i) = new Goat;
	cout <<  "What is the goat's name?" << endl;
	cin >> name2;
	cout << "What is the goat's weight? " << endl;
	cin >> weight2;
	cout << "What is the goat's gender? m or f. " << endl;
	cin >> gender2;
	cout << "What is the goat's color?" << endl;
	getline(cin, color2);
	cout << "What is the goat's breed?" << endl;
	cin >> breed2;
	cout << "Is the goat spayed? yes or no. " << endl;
	cin >> spayed2;
	cout << "What ist he goat's ID. alphanumeric like HZ123X. " << endl;
	cin >> id2;
	cout << "Any further comments? " << endl;
	getline(cin, comments2);
	
	goatList.at(i)->setWeight(weight2);
	goatList.at(i)->setName(name2);
	goatList.at(i)->setGender(gender2);
	goatList.at(i)->setColor(color2);
	goatList.at(i)->setBreed(breed2);
	goatList.at(i)->setSpayed(spayed2);
	goatList.at(i)->setId(id2);
	goatList.at(i)->setComments(comments2);
	
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
