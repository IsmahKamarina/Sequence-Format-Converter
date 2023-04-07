#include <iostream>
#include <string>
#include "Fasta.h"     //include header files

using namespace std;
namespace sequenceAnalysis{  //namespace
    
    //default constructor
    Fasta::Fasta() : Sequence()
    {
    }
    
    //constructor with parameter lists
    Fasta::Fasta(const string& theId, const string& theDesc, const string& theSeq, string version) 
    : Sequence(theId, theDesc, theSeq), version(version)
    {
    }
  
    void Fasta::setVersion(string newVersion){ //mutator function for version
        version = newVersion;
    } 
    
    string Fasta::getVersion() const{      //accessor function for version 
        return version;
    }
    
    void Fasta::getChangeCases(string seq){
        int length = outSeqLength();
        
        for (int i = 0; i < length; i++){
            int x = seq[i];
            
            if (islower(x))
            seq[i] = toupper(x);
        }
            cout<< seq << endl;
    }
    
    
    //redefined function
	void Fasta::printSeqDetails(){
		    
		 cout << getVersion() << "|" << getId() << "|" << getDesc() << endl;
		 getChangeCases(getSeq());
	}
}