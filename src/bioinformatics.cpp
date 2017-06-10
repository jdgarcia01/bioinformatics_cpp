//============================================================================
// Name        : bioinformatics.cpp
// Author      : John D. Garcia
// Version     :
// Copyright   : Copyright 2017
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "BIOKmerImpl.h"
#include "BIOKmerOperations.h"
using namespace std;


int main() {

    std::string dna_seq("CGGACTCGACAGATGTGAAGAACGACAATGTGAAGACTCGACACGACAGAGTGAAGAGAAGAGGAAACATTGTAA");
    std::string pattern("GACT");

	BIOKmerOperations *op = new BIOKmerOperations(dna_seq);



	cout << op->find_pattern(pattern) << endl;



	return 0;
}
