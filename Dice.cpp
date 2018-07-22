#include "Dice.h"
#include <time.h>
#include <cstdlib>

Die::Die() {
	for (int i = 0; i < NUM_OF_SIDES; i++) this->value[i] = i % 3; // Mod 3 works just as well as manually assigning.
	this->currentValue = this->value[0];
	srand(time(NULL));
}

void Die::setRandomValue() {
	this->currentValue = this->value[rand() % NUM_OF_SIDES];
}

int Die::getValue() {
	return this->currentValue;
}

int Die::roll() {
	this->setRandomValue();
	return this->currentValue;
}

Dice::Dice() {
	for (int i = 0; i < NUM_OF_DICE; i++) this->data[i] = new Die();
}

Dice::~Dice() {
	for (int i = 0; i < NUM_OF_DICE; i++) delete this->data[i];
}

void Dice::roll() {
	this->roll(NUM_OF_DICE);
}

void Dice::roll(int n) {
	for (int i = 0; i < n; i++) this->data[i]->setRandomValue();
}

void Dice::reroll(int n) {
	this->data[n]->setRandomValue();
}

int Dice::getValue(int n) {
	return this->data[n]->getValue();
}

int Dice::getSum() {
	this->getSum(NUM_OF_DICE);
}

int Dice::getSum(int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += this->data[i]->getValue();
	}
	return sum;
}
