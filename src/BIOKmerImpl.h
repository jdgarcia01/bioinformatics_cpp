/**
 * implements the BIOKmerBaseClass.
 */

#include <iostream>
#include <string>
#include "BIOKmerBaseClass.h"




class BIOKmer : BIOKmerBaseClass {


public:

	/**
	 * Constructor one
	 */
	BIOKmer(std::string pattern, int count);




	/**
	 * Constructor two
	 */
	BIOKmer(std::string pattern, int count, int number);






	/**
	 * Derived class destructor.
	 */
	~BIOKmer(){

		mKmerPattern.clear();
		mKmerCount = 0;
		mPatternToNumber = 0;


	}


	/**
	 * Methods
	 */

	std::string getKmerPattern();
	int         getKmerCount();
	int         hashCode();
	int         getPatternToNumber();




private:

	std::string mKmerPattern;
	int         mKmerCount;
	int         mPatternToNumber;




};



BIOKmer::BIOKmer(std::string pattern, int count){

	mKmerPattern = pattern;
	mKmerCount   = count;
	mPatternToNumber = 0;

}

BIOKmer::BIOKmer(std::string pattern, int count, int number){

	mKmerPattern = pattern;
	mKmerCount   = count;
	mPatternToNumber = number;


}
std::string BIOKmer::getKmerPattern(){
	return mKmerPattern;
}

int :: BIOKmer::getKmerCount(){
	return mKmerCount;
}

int :: BIOKmer::getPatternToNumber(){
	return mPatternToNumber;
}

int :: BIOKmer::hashCode(){
	return mKmerPattern.length();
}
