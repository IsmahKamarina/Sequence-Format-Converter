#ifndef Genbank_h
#define Genbank_h

#include <iostream>
#include <string>
#include "Sequence.h"   //include header file

using namespace std;
namespace sequenceAnalysis{   //namespace
    
    class Genbank : public Sequence {   //class name
        private:
            string version;
            string accession_no;
            string value1;
            string value2;
            string value3;
            string value4;
            string value5;
            string value6;
        
        public:                            //member function
            Genbank();                  //default constructor
            Genbank(const string& theId, const string& theDesc, const string& theSeq,
            string version, string accession_no, string value1, string value2, string value3,
            string value4, string value5, string value6);
            //constructor with parameter lists
            
            void setVersion(string Version);   //mutator function for version
            string getVersion() const;         //accessor function for version      
            
            void setAccessionNo(string accession_no); //mutator function for accession no
            string getAccessionNo() const;            //accessor function for accession no
            
            void setValue1(string value1);     //mutator function for value1
            string getValue1() const;          //accessor function for value1
            
            void setValue2(string value2);     //mutator function for value2
            string getValue2() const;          //accessor function for value2
            
            void setValue3(string value3);     //mutator function for value3
            string getValue3() const;          //accessor function for value3
            
            void setValue4(string value4);     //mutator function for value4
            string getValue4() const;          //accessor function for value4
            
            void setValue5(string value5);     //mutator function for value5
            string getValue5() const;          //accessor function for value5
            
            void setValue6(string value6);     //mutator function for value6
            string getValue6() const;          //accessor function for value6
            
            void printSeqDetails();                 //redefined function
            void seqLength();
            void getFeatures(string value1, string value2, string value3, string value4,
            string value5, string value6);
            void dispfeatures();
            void baseCount(string seq);
            void getorigin(string seq);
    };
}

#endif