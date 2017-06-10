/*
 * BIOKmerOperations.h
 *
 *  Created on: Jun 9, 2017
 *      Author: johngarcia
 */

#ifndef BIOKMEROPERATIONS_H_
#define BIOKMEROPERATIONS_H_


#include <iostream>


class BIOKmerOperations {

public:

	BIOKmerOperations(std::string dna_string){
		mGenomeSequence = dna_string;
	}

	int find_pattern(const std::string& pattern );


private:
	std::string mGenomeSequence;


};




#endif /* BIOKMEROPERATIONS_H_ */
