#ifndef DICE_H
#define DICE_H

class Die {
	public:
		Die();
		//~Die();
	
		void setRandomValue();
		int getValue();
		
		// roll() simply wraps up setRandomValue() and getValue() into one function.
		int roll();
		
	private:
		// We're going to assume that every die has 6 sides. Technically 3 would work identically.
		static const int NUM_OF_SIDES = 6;
		
		// value[] will hold all the faces of our die.
		int value[NUM_OF_SIDES];
		int currentValue;
};

class Dice {
	public:
		Dice();
		~Dice();
		
		// roll() randomizes each Die, but doesn't return the results.
		void roll();
		
		// roll(n) randomizes each Die from indices 0:(n-1).
		void roll(int);
		
		// reroll(n) rolls only the Die at index n.
		void reroll(int);
		
		int getValue(int);
		int getSum();
		int getSum(int);
		
	private:
		// We should never need more than 8 dice.
		static const int NUM_OF_DICE = 8;
		Die* data[NUM_OF_DICE];
};

#endif
