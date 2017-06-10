/*
 * BIOKmerOperations.cpp
 *
 *  Created on: Jun 9, 2017
 *      Author: johngarcia
 */

#include "BIOKmerOperations.h"
#include <iostream>

int BIOKmerOperations::find_pattern( const std::string& pattern ){

		int count = 0;
		size_t pos = 0;

		/**
		 * mGenomeSequence is passed in as a string to the BIOKmerOperations
		 * constructor.
		 */
		while((pos = mGenomeSequence.find(pattern, pos)) != std::string::npos){
			count++;
			pos++;
		}
	        return count;
	}



