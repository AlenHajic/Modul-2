#include "Card.h"
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <iostream>
using namespace std;

void createDeckOfCards(Card deckOfCards[]);
void shuffleDeckOfCards(Card deckOfCards[]);
void printDeckOfCardsIntoFile(Card deckOfCards[], string nameOfFile);
int additionWithSelectedCardRange(int startValue, int endValue, Card deckOfCards[]);
void pickAHandOfFiveCards(Card deckOfCards[], Card handOfFiveCards[]);

int main()
{
	const int deckSize = 52;
	Card deck[deckSize];

	// Create a deck of cards
	createDeckOfCards(deck);

	// Shuffle the deck of cards
	shuffleDeckOfCards(deck);

	// Print the deck of cards to a file
	printDeckOfCardsIntoFile(deck, "Text.txt");

	// Pick a hand of five cards
	Card handOfFiveCards[5];
	pickAHandOfFiveCards(deck, handOfFiveCards);

	// Print the hand of five cards
	cout << "Hand of five cards:" << endl;
	for (int i = 0; i < 5; ++i) {
		cout << handOfFiveCards[i].cardInfo() << endl;
	}

	// Calculate the sum of card numbers in a selected range
	int startValue = 0;
	int endValue = 5; // Example range
	int sum = additionWithSelectedCardRange(startValue, endValue, deck);
	cout << "Sum of card numbers from " << startValue << " to " << endValue << " is: " << sum << endl;

	return 0;
}

void createDeckOfCards(Card deckOfCards[])
{
	string colors[4] = { "hear", "spades", "clover", "diamond" };
	int counter = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j <= 13; j++)
		{
			deckOfCards[counter] = Card(colors[i], j);
			++counter;
		}
	}
	/*Problem här för att jag vill göra en array med datatypen Card men den fattar inte det, måste implementera*/
	/*return deckOfCards;*/
}

void shuffleDeckOfCards(Card deckOfCards[])
{
	/*behöver implementationen här för att shufflea min kortlek*/
	srand(time(NULL));
	for (int i = 0; i < 52; i++)
	{
		int randomIndex = rand() % 52;
		swap(deckOfCards[i], deckOfCards[randomIndex]);
	}
}

void printDeckOfCardsIntoFile(Card deckOfCards[], string nameOfFile)
{
	ofstream output_file(nameOfFile);
	for (int i = 0; i < 52; i++)
	{
		output_file << deckOfCards[i].getNumber() << endl;
	}
	output_file.close();
}

int additionWithSelectedCardRange(int startValue, int endValue, Card deckOfCards[])
{
	int returningTotal = 0;

	for (int i = startValue; i < endValue; i++)
	{
		returningTotal += deckOfCards[i].getNumber();
	}

	return returningTotal;
}

void pickAHandOfFiveCards(Card deckOfCards[], Card handOfFiveCards[])
{
	srand(time(NULL));
	int array[5];
	for (int i = 0; i < 5; i++)
	{
		int randomIndex = rand() % 52;
		handOfFiveCards[i] = deckOfCards[randomIndex];
	}
}

