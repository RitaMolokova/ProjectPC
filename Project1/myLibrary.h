#pragma once
#include<string>
using namespace std;
class PC
{
protected:
	string name;
	string cpu;
	string gpu;
	string ssd;
	string ram;
	double price;
public:
	PC(){}
	PC(string nm, string cp, string gp, string ss, string ra) {
		name = nm;
		cpu = cp;
		gpu = gp;
		ssd = ss;
		ram = ra;
		price = 0.0;
	}
	void Print() {
		cout << "name: " << name << endl << "CPU: " << cpu << endl << "GPU: " << gpu << endl << "SSD: " << ssd << endl << "RAM: " << ram << endl;
	}
	virtual double GerPrice() {
		return price;
	}
};
class Office :public PC {
	string micro;
public:
	Office(){}
	Office(string nm, string cp, string gp, string ss, string ra, string mic):PC(nm,cp,gp,ss,ra) {
		micro = mic;
	}
	virtual void Print() {
		PC:Print();
		cout << "Micro: " << micro << endl;
	}
	virtual double GetPrice(){
		price = 30000+1000;
		return price;
	}
};

class Game :public PC {
	string keyboard;
	string headphones;
public:
	Game() {}
	Game(string nm, string cp, string gp, string ss, string ra, string key, string head) :PC(nm, cp, gp, ss, ra) {
		keyboard = key;
		headphones = head;
	}
	virtual void Print() {
	PC:Print();
		cout << "Keyboard: " << keyboard << endl << "Headphones: " << headphones << endl;
	}
	virtual double GetPrice() {
		price = 30000 + 7000;
		return price;
	}
};

class Home :public PC {
	string camera;
public:
	Home() {}
	Home(string camer, string nm, string cp, string gp, string ss, string ra) :PC(nm, cp, gp, ss, ra) {
		camera = camer;
	}
	virtual void Print() {
	PC:Print();
		cout << "CAmera: " << camera << endl;
	}
	virtual double GetPrice() {
		price = 30000 + 5000;
		return price;
	}
};

