#pragma once
#include "stdafx.h"
#include <iostream>

//using namespace standard
using namespace std;

//Declares a class named Wizard and its function
class TimeWizard{
//Everything here is public
public:

	void timeIt();

//Everything here is private
private:

};

//Declares a class named DeathSpawn and its function
class DeathSpawn{
//Everything here is public
public:
	void talk(){
		cout << "\nDeath: It's been 15 minutes, I'm here to take your life!" << endl;
	}
//Everything here is private
private:

};