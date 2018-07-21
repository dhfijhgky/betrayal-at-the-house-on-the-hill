#ifndef PLAYERCHARACTER_H
#define PLAYERCHARACTER_H

#include <string>

// might = 0, speed = 1, knowledge = 2, sanity = 3
enum Trait {might, speed, knowledge, sanity};

class PlayerCharacter {
	public:
		PlayerCharacter(int character);
		//~PlayerCharacter();
		
		int getPip(int);
		void setPip(int, int);
		int getStartingPip(int);
		int getValue(int);
		int getValue(int, int);
		int getBirthday();
		
		std::string getFullName();
		std::string getFirstName();
		
	private:
		// NUM_OF_PIPS is the amount of possible values for each trait (excluding death).
		static const int NUM_OF_PIPS = 8;
		
		// NUM_OF_TRAITS is the amount of traits each character has (might, speed, knowledge, sanity).
		static const int NUM_OF_TRAITS = 4;
	
		// pip[] holds the current level each trait is at for a given PlayerCharacter.
		int pip[NUM_OF_TRAITS];
		
		// startingPip[] holds the initial level each trait started at (some game mechanics need this information).
		int startingPip[NUM_OF_TRAITS];
		
		// value[][] actually tells us what our trait value is at a given position, not just what position we are at.
		int value[NUM_OF_TRAITS][NUM_OF_PIPS];
		
		// Stored as an integer; interpreted as # of days since Dec 31.
		int birthday;
		
		// Names, glorious names.
		std::string fullName;
		std::string title;
		std::string firstName;
		std::string nickName;
		std::string lastName;
};

#endif // PC_H
