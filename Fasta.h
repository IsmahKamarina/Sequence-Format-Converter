#ifndef Fasta_h
#define Fasta_h

#include <iostream>
#include <string>
#include "Sequence.h"   //include header file

using namespace std;
namespace sequenceAnalysis{   //namespace
    
    class Fasta : public Sequence {   //class name
        private:
            string version;
            
        public:                            //member function
            Fasta();                  //default constructor
            Fasta(const string& theId, const string& theDesc, const string& theSeq,
            string version);
            //constructor with parameter lists
            
            void setVersion(string Version);    //mutator function for version
            string getVersion() const;          //accessor function for version
            
            void getChangeCases(string seq);
            void printSeqDetails();                 //redefined function
    };
}

#endif