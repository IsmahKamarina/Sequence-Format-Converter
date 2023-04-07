#include <iostream>
#include <string>
#include "EMBL.h"     //include header files

using namespace std;
namespace sequenceAnalysis{  //namespace
    
    //default constructor
    EMBL::EMBL() : Sequence()
    {
    }
    
    //constructor with parameter lists
    EMBL::EMBL(const string& theId, const string& theDesc, const string& theSeq,
     string accession_no, string value) 
    : Sequence(theId, theDesc, theSeq), accession_no(accession_no),
    value(value)
    {
    }

    void EMBL::setAccessionNo(string newAccessionNo){ //mutator function for accession no
        accession_no = newAccessionNo;
    } 
    
    string EMBL::getAccessionNo() const{      //accessor function for accession no
        return accession_no;
    }
    
    void EMBL::setValue(string newValue){ //mutator function for value 
        value = newValue;
    } 
    
    string EMBL::getValue() const{      //accessor function for value
        return value;
    }
    
    void EMBL::baseCount(string seq){
        double occA = 0;
        double occC = 0;
        double occG = 0;
        double occT = 0;
        
        for (int i = 0; i < outSeqLength(); i++){  //Counting the number of each nucleotide
            if (seq[i] == 'A')
                occA = occA + 1;
            
            if (seq[i] == 'C')
                occC = occC + 1;
            
            if (seq[i] == 'G')
                occG = occG + 1;
            
            if (seq[i] == 'T')
                occT = occT + 1;
        }
        
        cout << "BASE COUNT" << "    ";
        cout << occA << "a" << " " << occC << "c" << " " << occG << "g" << " " << occT << "t" << endl;
		    
	}
	
    void EMBL::getorigin(string seq){
        int length = outSeqLength();
        
        for (int i = 0; i < length; i++){
            int x = seq[i];
            
            if (isupper(x))
            seq[i] = tolower(x);
        }
        
            cout<< seq << endl;
    }
	
	//redefined function
    void EMBL::printSeqDetails(){
        cout << "ID    " << getId() << "standard; " << outSeqLength() << " BP." << endl;
        cout << "XX" << endl;
        cout << "AC    " << getAccessionNo() << ";" << endl;
        cout << "XX" << endl;
        cout << "DE    " << getDesc() << endl;
        cout << "XX" << endl;
        cout << "SQ    " << "Sequence " << outSeqLength() << " BP;" << endl;
        cout << "      " << getSeq() << endl;
        cout << "//" << endl;
        baseCount(getSeq());
    }
}