//Timer Final Project
//CSC215
//Samael Newgate

#include "stdafx.h"
#include <iostream>
#include <chrono>
#include <cstdlib>
#include <string>
#include "TimeWizard.h"

//Using the Standerd Libary 
using namespace std;

//Start of the main function 
int main()
{
	//TimeWizard is the class
	//timewizard is the object
	//This executes the TimeWizard class function
	system("pause");
	TimeWizard timewizard;
	timewizard.timeIt();
	system("pause");


	//pauses program so it doesn't autimatcilly open 
	system("pause");
	return 0;
}