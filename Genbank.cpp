#include <iostream>
#include <string>
#include "GenBank.h"     //include header files

using namespace std;
namespace sequenceAnalysis{  //namespace
    
    //default constructor
    Genbank::Genbank() : Sequence()
    {
    }
    
    //constructor with parameter lists
    Genbank::Genbank(const string& theId, const string& theDesc, const string& theSeq,
    string version, string accession_no, string value1, string value2, string value3, string value4,
    string value5, string value6) 
    : Sequence(theId, theDesc, theSeq), version(version), accession_no(accession_no),
    value1(value1), value2(value2), value3(value3), value4(value4), value5(value5), value6(value6)
    {
    }
    
    void Genbank::setVersion(string newVersion){ //mutator function for version 
        version = newVersion;                    
    } 
    
    string Genbank::getVersion() const{      //accessor function for version 
        return version;
    }
    
    void Genbank::setAccessionNo(string newAccessionNo){ //mutator function for accession no 
        accession_no = newAccessionNo;
    } 
    
    string Genbank::getAccessionNo() const{      //accessor function for accession no
        return accession_no;
    }
    
    void Genbank::setValue1(string newValue1){ //mutator function for value1 
        value1 = newValue1;
    } 
    
    string Genbank::getValue1() const{      //accessor function for value1 
        return value1;
    }
    
    void Genbank::setValue2(string newValue2){ //mutator function for value2
        value2 = newValue2;
    } 
    
    string Genbank::getValue2() const{      //accessor function for value2 
        return value2;
    }
    
    void Genbank::setValue3(string newValue3){ //mutator function for value3
        value3 = newValue3;
    } 
    
    string Genbank::getValue3() const{      //accessor function for value3 
        return value3;
    }
    
    void Genbank::setValue4(string newValue4){ //mutator function for value4
        value4 = newValue4;
    } 
    
    string Genbank::getValue4() const{      //accessor function for value4 
        return value4;
    }
    
    void Genbank::setValue5(string newValue5){ //mutator function for value5
        value5 = newValue5;
    } 
    
    string Genbank::getValue5() const{      //accessor function for value5 
        return value5;
    }
    
    void Genbank::setValue6(string newValue6){ //mutator function for value6
        value6 = newValue6;
    } 
    
    string Genbank::getValue6() const{      //accessor function for value6 
        return value6;
    }
    
    void Genbank::baseCount(string seq){
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
	
    void Genbank::getorigin(string seq){
        int length = outSeqLength();
        
        for (int i = 0; i < length; i++){
            int x = seq[i];
            
            if (isupper(x))
            seq[i] = tolower(x);
        }
        
        cout<< "ORIGIN" <<endl;
            cout<< seq << endl;
    }
	    
    //redefined function
	void Genbank::printSeqDetails(){
	    
		 cout << "LOCUS        " << getId() << "   " << outSeqLength() << " bp" << " DNA" << endl;
		 cout << "DESCRIPTION  " << getDesc() << endl;
		 cout << "ACCESSION    " << getAccessionNo() << endl;
		 cout << "VERSION      " << getVersion() << endl;
		 cout << "FEATURES   Location/Qualifiers\n" <<
		         "source                        " << getValue1() << endl;
		 cout << "                              " << getValue2() << endl;
		 cout << "                              " << getValue3() << endl;
		 cout << "repeated region               " << getValue4() << endl;
		 cout << "                              " << getValue5() << endl;
		 cout << "                              " << getValue6()<< endl;;
		 baseCount(getSeq());
		 getorigin(getSeq());
		 
	}
}

