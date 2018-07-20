#ifndef PC_H
#define PC_H

#include <string>

enum Trait {might, speed, knowledge, sanity};

class PlayerCharacter {
	public:
		PlayerCharacter(int character);
		//~PlayerCharacter();
		
		int getPip(int);
		void setPip(int, int);
		int getValue(int);
		int getValue(int, int);
		int getBirthday();
		
		std::string getFullName();
		std::string getFirstName();
		
	private:
		static const int NUM_OF_PIPS = 8;
		static const int NUM_OF_TRAITS = 4;
	
		int pip[NUM_OF_TRAITS];
		int startingPip[NUM_OF_TRAITS];
		int value[NUM_OF_TRAITS][NUM_OF_PIPS];
		
		int birthday;
		
		std::string fullName;
		std::string title;
		std::string firstName;
		std::string nickName;
		std::string lastName;
};

#endif // PC_H
