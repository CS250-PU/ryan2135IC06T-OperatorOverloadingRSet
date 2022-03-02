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

	//for (unsigned int i = 0; i < mcRationals.size () && !bInSet; ++i) {
	//	if (mcRationals[i] == rcRational) {
	//		bInSet = true;
	//	}
	//}

	return bInSet;
}

int RationalSet::size () const {
	return mcRationals.size ();
}