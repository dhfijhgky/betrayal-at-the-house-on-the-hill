#include "PlayerCharacter.h"
#include <string>
#include <iostream>

// Setters and getters
// Straight forward if you understand what the variables are for (see header file)
int PlayerCharacter::getPip(int i) {
	return pip[i];
}

void PlayerCharacter::setPip(int i, int val) {
	pip[i] = val;
}

int PlayerCharacter::getStartingPip(int i) {
	return startingPip[i];
}

int PlayerCharacter::getValue(int i) {
	return value[i][pip[i]];
}

int PlayerCharacter::getValue(int i, int j) {
	return value[i][j];
}

int PlayerCharacter::getBirthday() {
	return birthday;
}

std::string PlayerCharacter::getFullName() {
	return fullName;
}

std::string PlayerCharacter::getFirstName() {
	return firstName;
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
			firstName = "Vivian";
			 lastName = "Lopez";
			 birthday = 11;

			pip[might] =         startingPip[might] = 2;
			pip[speed] =         startingPip[speed] = 3;
			pip[knowledge] = startingPip[knowledge] = 3;
			pip[sanity] =       startingPip[sanity] = 2;
		  
			value[might][0] = 2;	value[speed][0] = 3;	value[knowledge][0] = 4;	value[sanity][0] = 4;
			value[might][1] = 2;	value[speed][1] = 4;	value[knowledge][1] = 5;	value[sanity][1] = 4;
			value[might][2] = 2;	value[speed][2] = 4;	value[knowledge][2] = 5;	value[sanity][2] = 4;
			value[might][3] = 4;	value[speed][3] = 4;	value[knowledge][3] = 5;	value[sanity][3] = 5;
			value[might][4] = 4;	value[speed][4] = 4;	value[knowledge][4] = 5;	value[sanity][4] = 6;
			value[might][5] = 5;	value[speed][5] = 6;	value[knowledge][5] = 6;	value[sanity][5] = 7;
			value[might][6] = 6;	value[speed][6] = 7;	value[knowledge][6] = 6;	value[sanity][6] = 8;
			value[might][7] = 6;	value[speed][7] = 8;	value[knowledge][7] = 7;	value[sanity][7] = 8;
		  
			break;
				  
		case  1 : 	
			firstName = "Missy";
			 lastName = "Dubourde";
			 birthday = 45;

			pip[might] =         startingPip[might] = 3;
			pip[speed] =         startingPip[speed] = 2;
			pip[knowledge] = startingPip[knowledge] = 3;
			pip[sanity] =       startingPip[sanity] = 2;
		  
			value[might][0] = 2;	value[speed][0] = 3;	value[knowledge][0] = 2;	value[sanity][0] = 1;
			value[might][1] = 3;	value[speed][1] = 4;	value[knowledge][1] = 3;	value[sanity][1] = 2;
			value[might][2] = 3;	value[speed][2] = 5;	value[knowledge][2] = 4;	value[sanity][2] = 3;
			value[might][3] = 3;	value[speed][3] = 6;	value[knowledge][3] = 4;	value[sanity][3] = 4;
			value[might][4] = 4;	value[speed][4] = 6;	value[knowledge][4] = 5;	value[sanity][4] = 5;
			value[might][5] = 5;	value[speed][5] = 6;	value[knowledge][5] = 6;	value[sanity][5] = 5;
			value[might][6] = 6;	value[speed][6] = 7;	value[knowledge][6] = 6;	value[sanity][6] = 6;
			value[might][7] = 7;	value[speed][7] = 7;	value[knowledge][7] = 6;	value[sanity][7] = 7;
		  
			break;
				  
		case  2 : 	
			firstName = "Jenny";
			 lastName = "LeClerc";
			 birthday = 63;

			pip[might] =         startingPip[might] = 2;
			pip[speed] =         startingPip[speed] = 3;
			pip[knowledge] = startingPip[knowledge] = 2;
			pip[sanity] =       startingPip[sanity] = 4;
		  
			value[might][0] = 3;	value[speed][0] = 2;	value[knowledge][0] = 2;	value[sanity][0] = 1;
			value[might][1] = 4;	value[speed][1] = 3;	value[knowledge][1] = 3;	value[sanity][1] = 1;
			value[might][2] = 4;	value[speed][2] = 4;	value[knowledge][2] = 3;	value[sanity][2] = 2;
			value[might][3] = 4;	value[speed][3] = 4;	value[knowledge][3] = 4;	value[sanity][3] = 4;
			value[might][4] = 4;	value[speed][4] = 4;	value[knowledge][4] = 4;	value[sanity][4] = 4;
			value[might][5] = 5;	value[speed][5] = 5;	value[knowledge][5] = 5;	value[sanity][5] = 4;
			value[might][6] = 6;	value[speed][6] = 6;	value[knowledge][6] = 6;	value[sanity][6] = 5;
			value[might][7] = 8;	value[speed][7] = 8;	value[knowledge][7] = 8;	value[sanity][7] = 6;
		  
			break;
				  
		case  3 : 	
			    title = "Father";
			firstName = "Rhinehardt";
			 birthday = 119;

			pip[might] =         startingPip[might] = 2;
			pip[speed] =         startingPip[speed] = 2;
			pip[knowledge] = startingPip[knowledge] = 3;
			pip[sanity] =       startingPip[sanity] = 4;
		  
			value[might][0] = 1;	value[speed][0] = 2;	value[knowledge][0] = 1;	value[sanity][0] = 3;
			value[might][1] = 2;	value[speed][1] = 3;	value[knowledge][1] = 3;	value[sanity][1] = 4;
			value[might][2] = 2;	value[speed][2] = 3;	value[knowledge][2] = 3;	value[sanity][2] = 5;
			value[might][3] = 4;	value[speed][3] = 4;	value[knowledge][3] = 4;	value[sanity][3] = 5;
			value[might][4] = 4;	value[speed][4] = 5;	value[knowledge][4] = 5;	value[sanity][4] = 6;
			value[might][5] = 5;	value[speed][5] = 6;	value[knowledge][5] = 6;	value[sanity][5] = 7;
			value[might][6] = 5;	value[speed][6] = 7;	value[knowledge][6] = 6;	value[sanity][6] = 7;
			value[might][7] = 7;	value[speed][7] = 7;	value[knowledge][7] = 8;	value[sanity][7] = 8;
		  
			break;
				  
		case  4 : 	
			firstName = "Brandon";
			 lastName = "Jaspers";
			 birthday = 141;

			pip[might] =         startingPip[might] = 3;
			pip[speed] =         startingPip[speed] = 2;
			pip[knowledge] = startingPip[knowledge] = 2;
			pip[sanity] =       startingPip[sanity] = 3;
		  
			value[might][0] = 2;	value[speed][0] = 3;	value[knowledge][0] = 1;	value[sanity][0] = 3;
			value[might][1] = 3;	value[speed][1] = 4;	value[knowledge][1] = 3;	value[sanity][1] = 3;
			value[might][2] = 3;	value[speed][2] = 4;	value[knowledge][2] = 3;	value[sanity][2] = 3;
			value[might][3] = 4;	value[speed][3] = 4;	value[knowledge][3] = 5;	value[sanity][3] = 4;
			value[might][4] = 5;	value[speed][4] = 5;	value[knowledge][4] = 5;	value[sanity][4] = 5;
			value[might][5] = 6;	value[speed][5] = 6;	value[knowledge][5] = 6;	value[sanity][5] = 6;
			value[might][6] = 6;	value[speed][6] = 7;	value[knowledge][6] = 6;	value[sanity][6] = 7;
			value[might][7] = 7;	value[speed][7] = 8;	value[knowledge][7] = 7;	value[sanity][7] = 8;
		  
			break;
				  
		case  5 : 	
			firstName = "Darrin";
			 nickName = "Flash";
			 lastName = "Williams";
			 birthday = 157;

			pip[might] =         startingPip[might] = 2;
			pip[speed] =         startingPip[speed] = 4;
			pip[knowledge] = startingPip[knowledge] = 2;
			pip[sanity] =       startingPip[sanity] = 2;
		  
			value[might][0] = 2;	value[speed][0] = 4;	value[knowledge][0] = 2;	value[sanity][0] = 1;
			value[might][1] = 3;	value[speed][1] = 4;	value[knowledge][1] = 3;	value[sanity][1] = 2;
			value[might][2] = 3;	value[speed][2] = 4;	value[knowledge][2] = 3;	value[sanity][2] = 3;
			value[might][3] = 4;	value[speed][3] = 5;	value[knowledge][3] = 4;	value[sanity][3] = 4;
			value[might][4] = 5;	value[speed][4] = 6;	value[knowledge][4] = 5;	value[sanity][4] = 5;
			value[might][5] = 6;	value[speed][5] = 7;	value[knowledge][5] = 5;	value[sanity][5] = 5;
			value[might][6] = 6;	value[speed][6] = 7;	value[knowledge][6] = 5;	value[sanity][6] = 5;
			value[might][7] = 7;	value[speed][7] = 8;	value[knowledge][7] = 7;	value[sanity][7] = 7;
		  
			break;
				  
		case  6 : 	
			    title = "Professor";
			firstName = "Longfellow";
			 birthday = 208;

			pip[might] =         startingPip[might] = 2;
			pip[speed] =         startingPip[speed] = 3;
			pip[knowledge] = startingPip[knowledge] = 4;
			pip[sanity] =       startingPip[sanity] = 2;
		  
			value[might][0] = 1;	value[speed][0] = 2;	value[knowledge][0] = 4;	value[sanity][0] = 1;
			value[might][1] = 2;	value[speed][1] = 2;	value[knowledge][1] = 5;	value[sanity][1] = 3;
			value[might][2] = 3;	value[speed][2] = 4;	value[knowledge][2] = 5;	value[sanity][2] = 3;
			value[might][3] = 4;	value[speed][3] = 4;	value[knowledge][3] = 5;	value[sanity][3] = 4;
			value[might][4] = 5;	value[speed][4] = 5;	value[knowledge][4] = 5;	value[sanity][4] = 5;
			value[might][5] = 5;	value[speed][5] = 5;	value[knowledge][5] = 6;	value[sanity][5] = 5;
			value[might][6] = 6;	value[speed][6] = 6;	value[knowledge][6] = 7;	value[sanity][6] = 6;
			value[might][7] = 6;	value[speed][7] = 6;	value[knowledge][7] = 8;	value[sanity][7] = 7;
		  
			break;
				  
		case  7 : 	
			firstName = "Heather";
			 lastName = "Granville";
			 birthday = 214;

			pip[might] =         startingPip[might] = 2;
			pip[speed] =         startingPip[speed] = 2;
			pip[knowledge] = startingPip[knowledge] = 4;
			pip[sanity] =       startingPip[sanity] = 2;
		  
			value[might][0] = 3;	value[speed][0] = 3;	value[knowledge][0] = 2;	value[sanity][0] = 3;
			value[might][1] = 3;	value[speed][1] = 3;	value[knowledge][1] = 3;	value[sanity][1] = 3;
			value[might][2] = 3;	value[speed][2] = 4;	value[knowledge][2] = 3;	value[sanity][2] = 3;
			value[might][3] = 4;	value[speed][3] = 5;	value[knowledge][3] = 4;	value[sanity][3] = 4;
			value[might][4] = 5;	value[speed][4] = 6;	value[knowledge][4] = 5;	value[sanity][4] = 5;
			value[might][5] = 6;	value[speed][5] = 6;	value[knowledge][5] = 6;	value[sanity][5] = 6;
			value[might][6] = 7;	value[speed][6] = 7;	value[knowledge][6] = 7;	value[sanity][6] = 6;
			value[might][7] = 8;	value[speed][7] = 8;	value[knowledge][7] = 8;	value[sanity][7] = 6;
		  
			break;
				  
		case  8 : 	
			firstName = "Peter";
			 lastName = "Akimoto";
			 birthday = 246;

			pip[might] =         startingPip[might] = 2;
			pip[speed] =         startingPip[speed] = 3;
			pip[knowledge] = startingPip[knowledge] = 2;
			pip[sanity] =       startingPip[sanity] = 3;
		  
			value[might][0] = 2;	value[speed][0] = 3;	value[knowledge][0] = 3;	value[sanity][0] = 3;
			value[might][1] = 3;	value[speed][1] = 3;	value[knowledge][1] = 4;	value[sanity][1] = 4;
			value[might][2] = 3;	value[speed][2] = 3;	value[knowledge][2] = 4;	value[sanity][2] = 4;
			value[might][3] = 4;	value[speed][3] = 4;	value[knowledge][3] = 5;	value[sanity][3] = 4;
			value[might][4] = 5;	value[speed][4] = 6;	value[knowledge][4] = 6;	value[sanity][4] = 5;
			value[might][5] = 5;	value[speed][5] = 6;	value[knowledge][5] = 7;	value[sanity][5] = 6;
			value[might][6] = 6;	value[speed][6] = 7;	value[knowledge][6] = 7;	value[sanity][6] = 6;
			value[might][7] = 8;	value[speed][7] = 7;	value[knowledge][7] = 8;	value[sanity][7] = 7;
		  
			break;
				  
		case  9 : 	
			firstName = "Ox";
			 lastName = "Bellows";
			 birthday = 291;

			pip[might] =         startingPip[might] = 2;
			pip[speed] =         startingPip[speed] = 4;
			pip[knowledge] = startingPip[knowledge] = 2;
			pip[sanity] =       startingPip[sanity] = 2;
		  
			value[might][0] = 4;	value[speed][0] = 2;	value[knowledge][0] = 2;	value[sanity][0] = 2;
			value[might][1] = 5;	value[speed][1] = 2;	value[knowledge][1] = 2;	value[sanity][1] = 2;
			value[might][2] = 5;	value[speed][2] = 2;	value[knowledge][2] = 3;	value[sanity][2] = 3;
			value[might][3] = 6;	value[speed][3] = 3;	value[knowledge][3] = 3;	value[sanity][3] = 4;
			value[might][4] = 6;	value[speed][4] = 4;	value[knowledge][4] = 5;	value[sanity][4] = 5;
			value[might][5] = 7;	value[speed][5] = 5;	value[knowledge][5] = 5;	value[sanity][5] = 5;
			value[might][6] = 8;	value[speed][6] = 5;	value[knowledge][6] = 6;	value[sanity][6] = 6;
			value[might][7] = 8;	value[speed][7] = 6;	value[knowledge][7] = 6;	value[sanity][7] = 7;
		  
			break;
				  
		case 10 : 	
			firstName = "Zoe";
			 lastName = "Ingstrom";
			 birthday = 309;

			pip[might] =         startingPip[might] = 3;
			pip[speed] =         startingPip[speed] = 3;
			pip[knowledge] = startingPip[knowledge] = 2;
			pip[sanity] =       startingPip[sanity] = 2;
		  
			value[might][0] = 2;	value[speed][0] = 4;	value[knowledge][0] = 1;	value[sanity][0] = 3;
			value[might][1] = 2;	value[speed][1] = 4;	value[knowledge][1] = 2;	value[sanity][1] = 4;
			value[might][2] = 3;	value[speed][2] = 4;	value[knowledge][2] = 3;	value[sanity][2] = 5;
			value[might][3] = 3;	value[speed][3] = 4;	value[knowledge][3] = 4;	value[sanity][3] = 5;
			value[might][4] = 4;	value[speed][4] = 5;	value[knowledge][4] = 4;	value[sanity][4] = 6;
			value[might][5] = 4;	value[speed][5] = 6;	value[knowledge][5] = 5;	value[sanity][5] = 6;
			value[might][6] = 6;	value[speed][6] = 8;	value[knowledge][6] = 5;	value[sanity][6] = 7;
			value[might][7] = 7;	value[speed][7] = 8;	value[knowledge][7] = 5;	value[sanity][7] = 8;
		  
			break;
				  
		case 11 :	
			    title = "Madame";
			firstName = "Zostra";
			 birthday = 344;

			pip[might] =         startingPip[might] = 3;
			pip[speed] =         startingPip[speed] = 2;
			pip[knowledge] = startingPip[knowledge] = 3;
			pip[sanity] =       startingPip[sanity] = 2;
		  
			value[might][0] = 2;	value[speed][0] = 2;	value[knowledge][0] = 1;	value[sanity][0] = 4;
			value[might][1] = 3;	value[speed][1] = 3;	value[knowledge][1] = 3;	value[sanity][1] = 4;
			value[might][2] = 3;	value[speed][2] = 3;	value[knowledge][2] = 4;	value[sanity][2] = 4;
			value[might][3] = 4;	value[speed][3] = 5;	value[knowledge][3] = 4;	value[sanity][3] = 5;
			value[might][4] = 5;	value[speed][4] = 5;	value[knowledge][4] = 4;	value[sanity][4] = 6;
			value[might][5] = 5;	value[speed][5] = 6;	value[knowledge][5] = 5;	value[sanity][5] = 7;
			value[might][6] = 5;	value[speed][6] = 6;	value[knowledge][6] = 6;	value[sanity][6] = 8;
			value[might][7] = 6;	value[speed][7] = 7;	value[knowledge][7] = 6;	value[sanity][7] = 8;
			value[might][7] = 6;	value[speed][7] = 7;	value[knowledge][7] = 6;	value[sanity][7] = 8;
		  
			break;
				  
		default : std::cout << "Attempted to create non-existent character.\n";
				  
				  break;
	}
	
	// fullName is then built here so we don't have to reassemble it over and over later.
	if (title != "") fullName += (title + " ");
	if (firstName != "") fullName += firstName;
	if (nickName != "" || lastName != "") fullName += " ";
	if (nickName != "") fullName += ("\"" + nickName + "\" ");
	if (lastName != "") fullName += lastName;
}
