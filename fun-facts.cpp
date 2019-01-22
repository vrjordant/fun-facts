/*
 * funfacts.cpp
 *
 *  Created on: Feb 28, 2018
 *      Author: Jordan
 */
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void rickroll() {
	string response;
	cout << "Would you like another fun fact? (y/n) ";
	cin >> response;
	// print the real video
	if (response == "y") {
		cout << "Fact: Actually, my real favorite YouTube video is https://www.youtube.com/watch?v=aT8ix3ZNlLM :)" << endl;
	}
	// exit the program
	else {
		exit(0);
	}
}

int main() {

	vector<string> facts;

	// rick roll
	facts.push_back("My favorite YouTube video is https://www.youtube.com/watch?v=dQw4w9WgXcQ ;)");

	// Initialize the facts
	facts.push_back("I play Pokemon songs on the piano");
	facts.push_back("When I go to sleep, I count sheep in hexadecimal");
	facts.push_back("My favorite movie of all time is Interstellar");
	facts.push_back("My favorite television series is Cosmos: A Space Time Odyssey (watch it on Netflix!)");
	facts.push_back("My favorite book is The Princess Bride");
	facts.push_back("My favorite musician is insaneintherainmusic");
	facts.push_back("I'm planning on making a Pokemon game based on the CS courses I've taken at Stevens");
	facts.push_back("I'm left-handed");
	facts.push_back("My favorite quote is 'Everyone you'll ever meet knows something you don't' by Bill Nye");
	facts.push_back("My favorite video game is Destiny");
	facts.push_back("I programmed a Pokemon text-adventure in Java");
	facts.push_back("So far, my favorite movie of 2018 is Black Panther (last year it was Thor: Ragnarok)");
	facts.push_back("I am currently a CA for CS 385, Algorithms");
	facts.push_back("This summer, I will be working at Northrop Grumman in Virginia for a summer internship");
	facts.push_back("Last semester, I worked as a tutor for the Academic Support Center");
	facts.push_back("My New Year's resolution for 2018 is to be able to touch my toes (it was also last year's too)");
	facts.push_back("My favorite anime is Haikyu!!");
	facts.push_back("I wrote a program in C++ to display fun facts about myself");

	// generates a random number
	srand((unsigned)time(0));
	int random_integer;
	bool another = false;
	string response;

	// while loop allows for endless random facts
	do {
		// print fact
		random_integer = rand() % facts.size();
		cout << "Fact: " << facts[random_integer] << endl;

		// check if it's a meme
		if (random_integer == 0) {
			rickroll();
		}

		// ask for another
		cout << "Would you like another fun fact? (y/n) ";
		cin >> response;
		if (response == "y") {
			another = true;
		}
		else {
			another = false;
		}
	}
	while (another);
	return 0;
}
