#include "ShotPut.h"

ShotPut::ShotPut(string name, int nrOfShots) : name(name), nrOfShots(nrOfShots), currentNrOfMadeShots(0)
{
	results = new float[nrOfShots];
	for (int i = 0; i < nrOfShots; ++i)
	{
		results[i] = 0.0f;
	}

}

ShotPut::~ShotPut()
{
	delete[] results;
}

ShotPut::ShotPut(const ShotPut& other) : name(other.name), nrOfShots(other.nrOfShots), currentNrOfMadeShots(other.currentNrOfMadeShots)
{
	results = new float[nrOfShots];

	for (int i = 0; i < nrOfShots; i++)
	{
		results[i] = other.results[i];
	}
}

ShotPut& ShotPut::operator=(const ShotPut& other)
{
	if (this != &other)
	{
		delete[] results;

		name = other.name;
		nrOfShots = other.nrOfShots;
		currentNrOfMadeShots = other.currentNrOfMadeShots;
		results = new float[nrOfShots];

		for (int i = 0; i < nrOfShots; i++)
		{
			results[i] = other.results[i];
		}

		return *this;
	}
}

string ShotPut::getName() const
{
	return this->name;
}

void ShotPut::addResult(float theResult)
{
	if (currentNrOfMadeShots < nrOfShots)
	{
		results[currentNrOfMadeShots++] = theResult;
	}
}

float ShotPut::getBestResult() const
{
	if (currentNrOfMadeShots == 0)
	{
		return 0.0f;
	}

	float bestResult = results[0];
	for (int i = 1; i < nrOfShots; i++)
	{
		if (results[i] > bestResult)
		{
			bestResult = results[i];
		}
	}

	return bestResult;
}

int ShotPut::getNrOfMadeShots() const
{
	return this->currentNrOfMadeShots;
}

void ShotPut::getResults(float results[])
{
	for (int i = 0; i < nrOfShots; i++)
	{
		results[i] = this->results[i];
	}
}
