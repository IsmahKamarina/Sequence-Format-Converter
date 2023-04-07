#include <iostream>
#include <string>
#include "Sequence.h"     //include header files

using namespace std;
namespace sequenceAnalysis{     //namespace
     
        //default constructor
        Sequence::Sequence() : id("No id yet"), 
        description("No description yet"), seq("No sequence yet") {
            //empty
        }
        
        //constructor with parameter lists
        Sequence::Sequence(const string& theId, 
        const string& theDesc, const string& theSeq) {
            id = theId;
            description = theDesc;
            seq = theSeq;
        }
        
        void Sequence::setId(const string& newId){ //mutator function for id 
            id = newId;
        }
        
        void Sequence::setDesc(const string& newDecs){ //mutator function for description
            description = newDecs;
        }
        
        void Sequence::setSeq(const string& newSeq){ //mutator function for sequence 
            seq = newSeq;
        }
        
        string Sequence::getId() const{      //accessor function for id 
            return id;
        }
        
        string Sequence::getDesc() const{    //accessor function for description 
            return description;
        }
        
        string Sequence::getSeq() const{     //accessor function for sequence 
            return seq;
        }
        
        long Sequence::outSeqLength(){       //member function for sequence length
            seqlength = seq.length();
            return seqlength;
        }
        
        void Sequence::printSeqDetails(){       //member function for sequence details
            cout << "Calls -> Sequence::printSeqDetails\n\n";
            cout << "Id = " << getId() << endl;
            cout << "Description = " << getDesc() << endl;
            cout << "Sequence = " << getSeq() << endl;
            cout << "Sequence length = " << outSeqLength() << endl;
        }

}