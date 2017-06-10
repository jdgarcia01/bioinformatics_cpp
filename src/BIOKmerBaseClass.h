/**
 * Abstract base class for a K-mer. 
 * We use integers since most of our K-mer 
 * patterns are not usually beyond a 64-bit integer
 * if this is not the case for you then simply convert
 * to long or long long.....
 **/


class BIOKmerBaseClass {

public:
	
    virtual int hashCode()=0;
	virtual std::string getKmerPattern()=0; // getter method that returns the pattern;
	virtual int    getKmerCount()=0;   // Used to keep track of how many times this K-mer appears in a sequence.
	virtual int    getPatternToNumber()=0; // Convert the K-mer pattern to a number and output it.
	virtual ~BIOKmerBaseClass(){}

};