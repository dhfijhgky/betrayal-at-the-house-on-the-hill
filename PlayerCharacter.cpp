#include "PlayerCharacter.h"
#include <string>
#include <iostream>

int PlayerCharacter::getPip(int i) {
	return this->pip[i];
}

void PlayerCharacter::setPip(int i, int val) {
	this->pip[i] = val;
}

int PlayerCharacter::getStartingPip(int i) {
	return this->startingPip[i];
}

int PlayerCharacter::getValue(int i) {
	return this->getValue(i, this->pip[i]);
}

int PlayerCharacter::getValue(int i, int j) {
	return this->value[i][j];
}

int PlayerCharacter::getBirthday() {
	return this->birthday;
}

std::string PlayerCharacter::getFullName() {
	return this->fullName;
}

std::string PlayerCharacter::getFirstName() {
	return this->firstName;
}

PlayerCharacter::PlayerCharacter(int character) {
	switch(character) {
		// Each character is held as a unique integer.
		// The order is based on birthdays (each character has a different birthday month).
		// The order is as follows:
		//	 0: Vivian Lopez		(January 11)
		//	 1: Missy Dubourde 		(February 14)
		//	 2: Jenny LeClerc		(March 4)
		//	 3: Father Rhinehardt		(April 29)
		//	 4: Brandon Jaspers		(May 21)
		//	 5: Darrin "Flash" Williams	(June 6)
		//	 6: Professor Longfellow	(July 27)
		//	 7: Heather Granville		(August 2)
		//	 8: Peter Akimoto		(September 3)
		//	 9: Ox Bellows			(October 18)
		//	10: Zoe Ingstrom		(November 5)
		//	11: Madame Zostra		(December 10)
		
		case  0 : 	
			this->firstName = "Vivian";
			 this->lastName = "Lopez";
			 this->birthday = 11;

			this->pip[might] =         this->startingPip[might] = 2;
			this->pip[speed] =         this->startingPip[speed] = 3;
			this->pip[knowledge] = this->startingPip[knowledge] = 3;
			this->pip[sanity] =       this->startingPip[sanity] = 2;
		  
			this->value[might][0] = 2;	this->value[speed][0] = 3;	this->value[knowledge][0] = 4;	this->value[sanity][0] = 4;
			this->value[might][1] = 2;	this->value[speed][1] = 4;	this->value[knowledge][1] = 5;	this->value[sanity][1] = 4;
			this->value[might][2] = 2;	this->value[speed][2] = 4;	this->value[knowledge][2] = 5;	this->value[sanity][2] = 4;
			this->value[might][3] = 4;	this->value[speed][3] = 4;	this->value[knowledge][3] = 5;	this->value[sanity][3] = 5;
			this->value[might][4] = 4;	this->value[speed][4] = 4;	this->value[knowledge][4] = 5;	this->value[sanity][4] = 6;
			this->value[might][5] = 5;	this->value[speed][5] = 6;	this->value[knowledge][5] = 6;	this->value[sanity][5] = 7;
			this->value[might][6] = 6;	this->value[speed][6] = 7;	this->value[knowledge][6] = 6;	this->value[sanity][6] = 8;
			this->value[might][7] = 6;	this->value[speed][7] = 8;	this->value[knowledge][7] = 7;	this->value[sanity][7] = 8;
		  
			break;
				  
		case  1 : 	
			this->firstName = "Missy";
			 this->lastName = "Dubourde";
			 this->birthday = 45;

			this->pip[might] =         this->startingPip[might] = 3;
			this->pip[speed] =         this->startingPip[speed] = 2;
			this->pip[knowledge] = this->startingPip[knowledge] = 3;
			this->pip[sanity] =       this->startingPip[sanity] = 2;
		  
			this->value[might][0] = 2;	this->value[speed][0] = 3;	this->value[knowledge][0] = 2;	this->value[sanity][0] = 1;
			this->value[might][1] = 3;	this->value[speed][1] = 4;	this->value[knowledge][1] = 3;	this->value[sanity][1] = 2;
			this->value[might][2] = 3;	this->value[speed][2] = 5;	this->value[knowledge][2] = 4;	this->value[sanity][2] = 3;
			this->value[might][3] = 3;	this->value[speed][3] = 6;	this->value[knowledge][3] = 4;	this->value[sanity][3] = 4;
			this->value[might][4] = 4;	this->value[speed][4] = 6;	this->value[knowledge][4] = 5;	this->value[sanity][4] = 5;
			this->value[might][5] = 5;	this->value[speed][5] = 6;	this->value[knowledge][5] = 6;	this->value[sanity][5] = 5;
			this->value[might][6] = 6;	this->value[speed][6] = 7;	this->value[knowledge][6] = 6;	this->value[sanity][6] = 6;
			this->value[might][7] = 7;	this->value[speed][7] = 7;	this->value[knowledge][7] = 6;	this->value[sanity][7] = 7;
		  
			break;
				  
		case  2 : 	
			this->firstName = "Jenny";
			 this->lastName = "LeClerc";
			 this->birthday = 63;

			this->pip[might] =         this->startingPip[might] = 2;
			this->pip[speed] =         this->startingPip[speed] = 3;
			this->pip[knowledge] = this->startingPip[knowledge] = 2;
			this->pip[sanity] =       this->startingPip[sanity] = 4;
		  
			this->value[might][0] = 3;	this->value[speed][0] = 2;	this->value[knowledge][0] = 2;	this->value[sanity][0] = 1;
			this->value[might][1] = 4;	this->value[speed][1] = 3;	this->value[knowledge][1] = 3;	this->value[sanity][1] = 1;
			this->value[might][2] = 4;	this->value[speed][2] = 4;	this->value[knowledge][2] = 3;	this->value[sanity][2] = 2;
			this->value[might][3] = 4;	this->value[speed][3] = 4;	this->value[knowledge][3] = 4;	this->value[sanity][3] = 4;
			this->value[might][4] = 4;	this->value[speed][4] = 4;	this->value[knowledge][4] = 4;	this->value[sanity][4] = 4;
			this->value[might][5] = 5;	this->value[speed][5] = 5;	this->value[knowledge][5] = 5;	this->value[sanity][5] = 4;
			this->value[might][6] = 6;	this->value[speed][6] = 6;	this->value[knowledge][6] = 6;	this->value[sanity][6] = 5;
			this->value[might][7] = 8;	this->value[speed][7] = 8;	this->value[knowledge][7] = 8;	this->value[sanity][7] = 6;
		  
			break;
				  
		case  3 : 	
			    this->title = "Father";
			this->firstName = "Rhinehardt";
			 this->birthday = 119;

			this->pip[might] =         this->startingPip[might] = 2;
			this->pip[speed] =         this->startingPip[speed] = 2;
			this->pip[knowledge] = this->startingPip[knowledge] = 3;
			this->pip[sanity] =       this->startingPip[sanity] = 4;
		  
			this->value[might][0] = 1;	this->value[speed][0] = 2;	this->value[knowledge][0] = 1;	this->value[sanity][0] = 3;
			this->value[might][1] = 2;	this->value[speed][1] = 3;	this->value[knowledge][1] = 3;	this->value[sanity][1] = 4;
			this->value[might][2] = 2;	this->value[speed][2] = 3;	this->value[knowledge][2] = 3;	this->value[sanity][2] = 5;
			this->value[might][3] = 4;	this->value[speed][3] = 4;	this->value[knowledge][3] = 4;	this->value[sanity][3] = 5;
			this->value[might][4] = 4;	this->value[speed][4] = 5;	this->value[knowledge][4] = 5;	this->value[sanity][4] = 6;
			this->value[might][5] = 5;	this->value[speed][5] = 6;	this->value[knowledge][5] = 6;	this->value[sanity][5] = 7;
			this->value[might][6] = 5;	this->value[speed][6] = 7;	this->value[knowledge][6] = 6;	this->value[sanity][6] = 7;
			this->value[might][7] = 7;	this->value[speed][7] = 7;	this->value[knowledge][7] = 8;	this->value[sanity][7] = 8;
		  
			break;
				  
		case  4 : 	
			this->firstName = "Brandon";
			 this->lastName = "Jaspers";
			 this->birthday = 141;

			this->pip[might] =         this->startingPip[might] = 3;
			this->pip[speed] =         this->startingPip[speed] = 2;
			this->pip[knowledge] = this->startingPip[knowledge] = 2;
			this->pip[sanity] =       this->startingPip[sanity] = 3;
		  
			this->value[might][0] = 2;	this->value[speed][0] = 3;	this->value[knowledge][0] = 1;	this->value[sanity][0] = 3;
			this->value[might][1] = 3;	this->value[speed][1] = 4;	this->value[knowledge][1] = 3;	this->value[sanity][1] = 3;
			this->value[might][2] = 3;	this->value[speed][2] = 4;	this->value[knowledge][2] = 3;	this->value[sanity][2] = 3;
			this->value[might][3] = 4;	this->value[speed][3] = 4;	this->value[knowledge][3] = 5;	this->value[sanity][3] = 4;
			this->value[might][4] = 5;	this->value[speed][4] = 5;	this->value[knowledge][4] = 5;	this->value[sanity][4] = 5;
			this->value[might][5] = 6;	this->value[speed][5] = 6;	this->value[knowledge][5] = 6;	this->value[sanity][5] = 6;
			this->value[might][6] = 6;	this->value[speed][6] = 7;	this->value[knowledge][6] = 6;	this->value[sanity][6] = 7;
			this->value[might][7] = 7;	this->value[speed][7] = 8;	this->value[knowledge][7] = 7;	this->value[sanity][7] = 8;
		  
			break;
				  
		case  5 : 	
			this->firstName = "Darrin";
			 this->nickName = "Flash";
			 this->lastName = "Williams";
			 this->birthday = 157;

			this->pip[might] =         this->startingPip[might] = 2;
			this->pip[speed] =         this->startingPip[speed] = 4;
			this->pip[knowledge] = this->startingPip[knowledge] = 2;
			this->pip[sanity] =       this->startingPip[sanity] = 2;
		  
			this->value[might][0] = 2;	this->value[speed][0] = 4;	this->value[knowledge][0] = 2;	this->value[sanity][0] = 1;
			this->value[might][1] = 3;	this->value[speed][1] = 4;	this->value[knowledge][1] = 3;	this->value[sanity][1] = 2;
			this->value[might][2] = 3;	this->value[speed][2] = 4;	this->value[knowledge][2] = 3;	this->value[sanity][2] = 3;
			this->value[might][3] = 4;	this->value[speed][3] = 5;	this->value[knowledge][3] = 4;	this->value[sanity][3] = 4;
			this->value[might][4] = 5;	this->value[speed][4] = 6;	this->value[knowledge][4] = 5;	this->value[sanity][4] = 5;
			this->value[might][5] = 6;	this->value[speed][5] = 7;	this->value[knowledge][5] = 5;	this->value[sanity][5] = 5;
			this->value[might][6] = 6;	this->value[speed][6] = 7;	this->value[knowledge][6] = 5;	this->value[sanity][6] = 5;
			this->value[might][7] = 7;	this->value[speed][7] = 8;	this->value[knowledge][7] = 7;	this->value[sanity][7] = 7;
		  
			break;
				  
		case  6 : 	
			    this->title = "Professor";
			this->firstName = "Longfellow";
			 this->birthday = 208;

			this->pip[might] =         this->startingPip[might] = 2;
			this->pip[speed] =         this->startingPip[speed] = 3;
			this->pip[knowledge] = this->startingPip[knowledge] = 4;
			this->pip[sanity] =       this->startingPip[sanity] = 2;
		  
			this->value[might][0] = 1;	this->value[speed][0] = 2;	this->value[knowledge][0] = 4;	this->value[sanity][0] = 1;
			this->value[might][1] = 2;	this->value[speed][1] = 2;	this->value[knowledge][1] = 5;	this->value[sanity][1] = 3;
			this->value[might][2] = 3;	this->value[speed][2] = 4;	this->value[knowledge][2] = 5;	this->value[sanity][2] = 3;
			this->value[might][3] = 4;	this->value[speed][3] = 4;	this->value[knowledge][3] = 5;	this->value[sanity][3] = 4;
			this->value[might][4] = 5;	this->value[speed][4] = 5;	this->value[knowledge][4] = 5;	this->value[sanity][4] = 5;
			this->value[might][5] = 5;	this->value[speed][5] = 5;	this->value[knowledge][5] = 6;	this->value[sanity][5] = 5;
			this->value[might][6] = 6;	this->value[speed][6] = 6;	this->value[knowledge][6] = 7;	this->value[sanity][6] = 6;
			this->value[might][7] = 6;	this->value[speed][7] = 6;	this->value[knowledge][7] = 8;	this->value[sanity][7] = 7;
		  
			break;
				  
		case  7 : 	
			this->firstName = "Heather";
			 this->lastName = "Granville";
			 this->birthday = 214;

			this->pip[might] =         this->startingPip[might] = 2;
			this->pip[speed] =         this->startingPip[speed] = 2;
			this->pip[knowledge] = this->startingPip[knowledge] = 4;
			this->pip[sanity] =       this->startingPip[sanity] = 2;
		  
			this->value[might][0] = 3;	this->value[speed][0] = 3;	this->value[knowledge][0] = 2;	this->value[sanity][0] = 3;
			this->value[might][1] = 3;	this->value[speed][1] = 3;	this->value[knowledge][1] = 3;	this->value[sanity][1] = 3;
			this->value[might][2] = 3;	this->value[speed][2] = 4;	this->value[knowledge][2] = 3;	this->value[sanity][2] = 3;
			this->value[might][3] = 4;	this->value[speed][3] = 5;	this->value[knowledge][3] = 4;	this->value[sanity][3] = 4;
			this->value[might][4] = 5;	this->value[speed][4] = 6;	this->value[knowledge][4] = 5;	this->value[sanity][4] = 5;
			this->value[might][5] = 6;	this->value[speed][5] = 6;	this->value[knowledge][5] = 6;	this->value[sanity][5] = 6;
			this->value[might][6] = 7;	this->value[speed][6] = 7;	this->value[knowledge][6] = 7;	this->value[sanity][6] = 6;
			this->value[might][7] = 8;	this->value[speed][7] = 8;	this->value[knowledge][7] = 8;	this->value[sanity][7] = 6;
		  
			break;
				  
		case  8 : 	
			this->firstName = "Peter";
			 this->lastName = "Akimoto";
			 this->birthday = 246;

			this->pip[might] =         this->startingPip[might] = 2;
			this->pip[speed] =         this->startingPip[speed] = 3;
			this->pip[knowledge] = this->startingPip[knowledge] = 2;
			this->pip[sanity] =       this->startingPip[sanity] = 3;
		  
			this->value[might][0] = 2;	this->value[speed][0] = 3;	this->value[knowledge][0] = 3;	this->value[sanity][0] = 3;
			this->value[might][1] = 3;	this->value[speed][1] = 3;	this->value[knowledge][1] = 4;	this->value[sanity][1] = 4;
			this->value[might][2] = 3;	this->value[speed][2] = 3;	this->value[knowledge][2] = 4;	this->value[sanity][2] = 4;
			this->value[might][3] = 4;	this->value[speed][3] = 4;	this->value[knowledge][3] = 5;	this->value[sanity][3] = 4;
			this->value[might][4] = 5;	this->value[speed][4] = 6;	this->value[knowledge][4] = 6;	this->value[sanity][4] = 5;
			this->value[might][5] = 5;	this->value[speed][5] = 6;	this->value[knowledge][5] = 7;	this->value[sanity][5] = 6;
			this->value[might][6] = 6;	this->value[speed][6] = 7;	this->value[knowledge][6] = 7;	this->value[sanity][6] = 6;
			this->value[might][7] = 8;	this->value[speed][7] = 7;	this->value[knowledge][7] = 8;	this->value[sanity][7] = 7;
		  
			break;
				  
		case  9 : 	
			this->firstName = "Ox";
			 this->lastName = "Bellows";
			 this->birthday = 291;

			this->pip[might] =         this->startingPip[might] = 2;
			this->pip[speed] =         this->startingPip[speed] = 4;
			this->pip[knowledge] = this->startingPip[knowledge] = 2;
			this->pip[sanity] =       this->startingPip[sanity] = 2;
		  
			this->value[might][0] = 4;	this->value[speed][0] = 2;	this->value[knowledge][0] = 2;	this->value[sanity][0] = 2;
			this->value[might][1] = 5;	this->value[speed][1] = 2;	this->value[knowledge][1] = 2;	this->value[sanity][1] = 2;
			this->value[might][2] = 5;	this->value[speed][2] = 2;	this->value[knowledge][2] = 3;	this->value[sanity][2] = 3;
			this->value[might][3] = 6;	this->value[speed][3] = 3;	this->value[knowledge][3] = 3;	this->value[sanity][3] = 4;
			this->value[might][4] = 6;	this->value[speed][4] = 4;	this->value[knowledge][4] = 5;	this->value[sanity][4] = 5;
			this->value[might][5] = 7;	this->value[speed][5] = 5;	this->value[knowledge][5] = 5;	this->value[sanity][5] = 5;
			this->value[might][6] = 8;	this->value[speed][6] = 5;	this->value[knowledge][6] = 6;	this->value[sanity][6] = 6;
			this->value[might][7] = 8;	this->value[speed][7] = 6;	this->value[knowledge][7] = 6;	this->value[sanity][7] = 7;
		  
			break;
				  
		case 10 : 	
			this->firstName = "Zoe";
			 this->lastName = "Ingstrom";
			 this->birthday = 309;

			this->pip[might] =         this->startingPip[might] = 3;
			this->pip[speed] =         this->startingPip[speed] = 3;
			this->pip[knowledge] = this->startingPip[knowledge] = 2;
			this->pip[sanity] =       this->startingPip[sanity] = 2;
		  
			this->value[might][0] = 2;	this->value[speed][0] = 4;	this->value[knowledge][0] = 1;	this->value[sanity][0] = 3;
			this->value[might][1] = 2;	this->value[speed][1] = 4;	this->value[knowledge][1] = 2;	this->value[sanity][1] = 4;
			this->value[might][2] = 3;	this->value[speed][2] = 4;	this->value[knowledge][2] = 3;	this->value[sanity][2] = 5;
			this->value[might][3] = 3;	this->value[speed][3] = 4;	this->value[knowledge][3] = 4;	this->value[sanity][3] = 5;
			this->value[might][4] = 4;	this->value[speed][4] = 5;	this->value[knowledge][4] = 4;	this->value[sanity][4] = 6;
			this->value[might][5] = 4;	this->value[speed][5] = 6;	this->value[knowledge][5] = 5;	this->value[sanity][5] = 6;
			this->value[might][6] = 6;	this->value[speed][6] = 8;	this->value[knowledge][6] = 5;	this->value[sanity][6] = 7;
			this->value[might][7] = 7;	this->value[speed][7] = 8;	this->value[knowledge][7] = 5;	this->value[sanity][7] = 8;
		  
			break;
				  
		case 11 :	
			    this->title = "Madame";
			this->firstName = "Zostra";
			 this->birthday = 344;

			this->pip[might] =         this->startingPip[might] = 3;
			this->pip[speed] =         this->startingPip[speed] = 2;
			this->pip[knowledge] = this->startingPip[knowledge] = 3;
			this->pip[sanity] =       this->startingPip[sanity] = 2;
		  
			this->value[might][0] = 2;	this->value[speed][0] = 2;	this->value[knowledge][0] = 1;	this->value[sanity][0] = 4;
			this->value[might][1] = 3;	this->value[speed][1] = 3;	this->value[knowledge][1] = 3;	this->value[sanity][1] = 4;
			this->value[might][2] = 3;	this->value[speed][2] = 3;	this->value[knowledge][2] = 4;	this->value[sanity][2] = 4;
			this->value[might][3] = 4;	this->value[speed][3] = 5;	this->value[knowledge][3] = 4;	this->value[sanity][3] = 5;
			this->value[might][4] = 5;	this->value[speed][4] = 5;	this->value[knowledge][4] = 4;	this->value[sanity][4] = 6;
			this->value[might][5] = 5;	this->value[speed][5] = 6;	this->value[knowledge][5] = 5;	this->value[sanity][5] = 7;
			this->value[might][6] = 5;	this->value[speed][6] = 6;	this->value[knowledge][6] = 6;	this->value[sanity][6] = 8;
			this->value[might][7] = 6;	this->value[speed][7] = 7;	this->value[knowledge][7] = 6;	this->value[sanity][7] = 8;
			this->value[might][7] = 6;	this->value[speed][7] = 7;	this->value[knowledge][7] = 6;	this->value[sanity][7] = 8;
		  
			break;
				  
		default : std::cout << "Attempted to create non-existent character.\n";
				  
				  break;
	}
	
	// fullName is then built here so we don't have to reassemble it over and over later.
	if (this->title != "") this->fullName += (this->title + " ");
	if (this->firstName != "") this->fullName += this->firstName;
	if (this->nickName != "" || this->lastName != "") this->fullName += " ";
	if (this->nickName != "") this->fullName += ("\"" + this->nickName + "\" ");
	if (this->lastName != "") this->fullName += this->lastName;
	
	this->position[row] = 0;
	this->position[column] = 0;
	this->position[floor] = 0;
}
