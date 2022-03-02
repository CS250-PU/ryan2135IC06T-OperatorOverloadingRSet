#include "RationalSet.h"
#include "Rational.h"
#include <iostream>

using namespace std;

RationalSet::RationalSet () {

}

RationalSet::RationalSet (const RationalSet &rcRationalSet) {
	mcRationals = rcRationalSet.mcRationals;
}

bool RationalSet::isIn (const Rational &rcRational) const {
	bool bInSet = false;

	return bInSet;
}

int RationalSet::size () const {
	return mcRationals.size ();
}