#include "stdafx.h"
#include "TimeWizard.h"
#include <iostream>
#include <chrono>
#include <cstdlib>
#include <string>

//Using standard namespace
using namespace std;

//Used for the minigame before timer
int GetNumberFromUser(string prompt);
string GetTextFromUser(string prompt);

//class TimeWizard 
void TimeWizard::timeIt()
{



	//Cin to input user's name
	cout << "What may I call you?" << endl;
	string Username;
	cin >> Username;

	//This	point will be stored, so it can be called when I call for the pointer 
	string * PUsername = &Username;

	//Prompting User at the start of the program 
	cout << "\n\nTime Wizard: Hello " + Username << "!" << endl;
	cout << "Time Wizard: My name is TIMEWIZARD and I will be your time guide today!" << endl;
	//Time bot dialogue,discription and instructions 
	cout << "Time Wizard: I am here to protect you from Death" << endl;
	cout << "Time Wizard: Since the beginning of time, Death has appeared to those who sit for longer than 15 minutes." << endl;
	cout << "Time Wizard: But don't worry, Death is nothing if we work together." << endl;
	cout << "Time Wizard: We will accomplish this by making sure you get up and move."<< endl;
	cout << "Time Wizard: Before we start, lets have some fun" << endl;
	cout << "Time Wizard: Enter a number 1 through 5" << endl;
	cout << "Time Wizard: If you're lucky, I'll tell you a joke." << endl;
	cout << "Time Wizard: But if you're not, the timer starts now." << endl;

	bool IsProgramRunning = true;
	while (IsProgramRunning)
	{
		//Asks user to inpute a number from 1-5 for minigame
		int index = GetNumberFromUser("\n\nEnter a number 1-5: \n");
		switch (index)
		{
		case 1: //First joke
			cout << "\nIf twenty dogs run after one cat, what time is it? \nTwenty after one\n";
			break;
		case 2://Second joke
			cout << "\nWhy did your sister shoot the alarm clock ? \nBecause she felt like killing time.";
			break;
		case 3://Third joke
			cout << "\nWhy did the girl sit on her watch? \nShe wanted to be on time.";
			break;
		case 4://Fourth joke
			cout << "\nWhat kind of watch is best for people with not a lot of time on their hands? \nA pocket watch.";
			break;
		case 5://Bad luck, this starts the timer
			cout << "\nBad luck, time to work! \n";
			IsProgramRunning = false;
			break;

		}
	}

	//Text to tell the user who uses this program that the clock has started 
	cout << ("\n\nTime starts now!\n");
	/*Here we are using the variable Chrono to keep the time, 
	the line below is subtractring the end time so in the case, the time after X amount of minutes and the time that it is now?*/
	std::chrono::steady_clock::time_point tend = std::chrono::steady_clock::now()
		+ std::chrono::minutes(15);
	//Starting a while loop while the timmer is running 
	while (std::chrono::steady_clock::now() < tend)
	{


	}



	//Text that appears on program once the timer runs out using the pointer I set above at the top of the program  
	DeathSpawn Death;
	Death.talk();
	
	//Closure dialogue of the program
	//Death class introduction and conclusion
	cout << "\nTime Wizard: Don't worry " + *PUsername << endl;
	cout << "Time Wizard: STAND UP RIGHT NOW AND MOVE!" << endl;
	cout << "\n*Death starts to fade away*" << endl;
	cout << "Death: This isn't over, I will be back!" << endl;
	cout << "\nTime Wizard: Good job " << Username << "!\n";



}

//This is for the mini game before the timer starts
int GetNumberFromUser(string prompt)
{
	cout << prompt;
	int var = 0;
	cin >> var;
	return var;
}
string GetTextFromUser(string prompt)
{
	cout << prompt;
	string var = "";
	cin >> var;
	return var;
}