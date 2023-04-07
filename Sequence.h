#ifndef Sequence_h
#define Sequence_h

#include <iostream>
#include <string>

using namespace std;
namespace sequenceAnalysis{       //declared namespace

class Sequence{
    private:
        //hidden data from outside world
        string id;
        string description;
        string seq;
        long seqlength;
    
    public:                       //member function
        Sequence();               //default constructor
        
        Sequence(const string& theId, const string& theDesc, const string& theSeq);
        
        void setId(const string& newId); //mutator function for id
        void setDesc(const string& newDecs); //mutator function for description
        void setSeq(const string& newSeq); //mutator function for seq
        
        string getId() const; //accessor function for id
        string getDesc() const; //accessor function for description
        string getSeq() const; //accessor fucntion for seq
        
        long outSeqLength();    //print out sequence length
        void printSeqDetails(); //print out sequence details 
    };
}

#endif 