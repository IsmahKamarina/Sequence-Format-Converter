#ifndef EMBL_h
#define EMBL_h

#include <iostream>
#include <string>
#include "Sequence.h"   //include header file

using namespace std;
namespace sequenceAnalysis{   //namespace
    
    class EMBL : public Sequence {   //class name
        private:
            string accession_no;
            string value;
            
        public:                            //member function
            EMBL();                  //default constructor
            EMBL(const string& theId, const string& theDesc, const string& theSeq,
             string accession_no, string value);
            //constructor with parameter lists
            
            void setAccessionNo(string accession_no);  //mutator function for accession no
            string getAccessionNo() const;             //accessor function for accession no
            
            void setValue(string value);               //mutator function for value
            string getValue() const;                   //accessor function for value
            
            void printSeqDetails();                 //redefined function
            void seqLength();                       
            void baseCount(string seq);
            void getorigin(string seq);
    };
}

#endif