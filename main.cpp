/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>
#include "Fasta.h"  //header file 
#include "GCG.h"
#include "GenBank.h"
#include "EMBL.h"

using namespace std;
using namespace sequenceAnalysis;  //user-defined namespace
    
    void outOptSimple(int optSimple){  //function definition
        Fasta fastaformat;  //instances  
        GCG gcgformat;
        
        //variables and their data types
        string id;
        string accession_no;
        string version;
        string desc;
        string sequence;
        
        cout << "\nEnter sequence details:- " << endl;
        cout << "Enter ID: ";
        cin >> id;                    //user enter id 
        cin.ignore();
        
        cout << "Enter Version: ";
        getline(cin,version);
        
        cout << "Enter Description: ";
        getline(cin,desc);                  //user enter description 
        
        cout << "Enter Sequence: ";
        cin >> sequence;              //user enter sequence
        
        if (optSimple == 1){
            
            fastaformat.setId(id);  //each member data is called by their respective function
            fastaformat.setVersion(version);
            fastaformat.setDesc(desc);
            fastaformat.setSeq(sequence);
            
            cout << endl;
            
            cout << "Sequence in Fasta Format:-\n";
            cout << endl;
            
            fastaformat.printSeqDetails();      // call printSeqDetails from the drived class 
            
        }
        
        else if (optSimple == 2){     //if user choose 1, it will print out 
            
            gcgformat.setId(id);  //each member data is called by their respective function
            gcgformat.setVersion(version);
            gcgformat.setDesc(desc);
            gcgformat.setSeq(sequence);
            
            cout << endl;
            
            cout << "Sequence in GCG Format:-\n";
            cout << endl;
            
            gcgformat.printSeqDetails();     // call printSeqDetails from the drived class 
            
        }
        
        else if (optSimple == 3){     //if user choose 1, it will print out 
            
            fastaformat.setId(id);  //each member data is called by their respective function
            fastaformat.setVersion(version);
            fastaformat.setDesc(desc);
            fastaformat.setSeq(sequence);
            
            cout << endl;
            
            cout << "Sequence in Fasta Format:-\n";
            cout << endl;
            
            fastaformat.printSeqDetails();      // call printSeqDetails from the drived class
            
            gcgformat.setId(id);  //each member data is called by their respective function
            gcgformat.setVersion(version);
            gcgformat.setDesc(desc);
            gcgformat.setSeq(sequence);
            
            cout << endl;
            
            cout << "Sequence in GCG Format:-\n";
            cout << endl;
            
            gcgformat.printSeqDetails();     // call printSeqDetails from the drived class 
            
        }
        
    }
    
    void outOptRich(int optRich){  //function definition
        
        Genbank genbankformat;  //instances 
        EMBL emblformat;
        
        //variables and their data types
        string id;
        string accession_no;
        string desc;
        string version;
        string sequence;
        char feat1;
        char feat2;
        char optvalue;
        string value1;
        string value2;
        string value3;
        string value4;
        string value5;
        string value6;
        
        cout << "\nEnter sequence details:- " << endl;
        cout << "Enter ID: ";
        cin >> id;                    //user enter id 
        
        cout << "Enter Accession No.: ";
        cin >> accession_no;
        cin.ignore();
        
        cout << "Enter Version: ";
        getline(cin,version);
        
        cout << "Enter Description: ";
        getline(cin,desc);                  //user enter description 
        
        cout << "Enter Sequence: ";
        cin >> sequence;              //user enter sequence
        
        if (optRich == 1){  //if user choose 1, it will print out
            
            cout << "Enter features? Press Y or N" <<endl;
            cout << "Option: ";
            cin >> feat1;
            
            if (feat1 == 'Y'){
                cout << "Features: source" << endl;
                cout << "Value: ";
                cin >> value1;
                
                cout << "Add more value? Press Y or N" << endl;
                cout << "Option: ";
                cin >> optvalue;
                
                if (optvalue == 'Y'){
                    cout << "Value: ";
                    cin >> value2;
                    
                    cout << "Add more value? Press Y or N" << endl;
                    cout << "Option: ";
                    cin >> optvalue;
                    
                    if (optvalue == 'Y'){
                        cout << "Value: ";
                        cin >> value3;
                        
                    }
                    
                }
            }
            
            cout << "Enter features? Press Y or N" <<endl;
            cin >> feat2;
            
            if (feat2 == 'Y'){
                cout << "Features: repeated region" << endl;
                cout << "Value: ";
                cin >> value4;
                
                cout << "Add more value? Press Y or N" << endl;
                cout << "Option: ";
                cin >> optvalue;
                
                if (optvalue == 'Y'){
                    cout << "Value: ";
                    cin >> value5;
                    
                }
                
                cout << "Add more value? Press Y or N" << endl;
                cout << "Option: ";
                cin >> optvalue;
                
                if (optvalue == 'Y'){
                    cout << "Value: ";
                    cin >> value6;
                    
                    cout << "Add more value? Press Y or N" << endl;
                    cout << "Option: ";
                    cin >> optvalue;
                    
                    cout << "Enter features? Press Y or N" <<endl;
                    cout << "Option: ";
                    cin >> optvalue;
                    cout <<endl;
                    
                }
                
            }
            
            genbankformat.setId(id);  //each member data is called by their respective function
            genbankformat.setAccessionNo(accession_no);
            genbankformat.setVersion(version);
            genbankformat.setDesc(desc);
            genbankformat.setValue1(value1);
            genbankformat.setValue2(value2);
            genbankformat.setValue3(value3);
            genbankformat.setValue4(value4);
            genbankformat.setValue5(value5);
            genbankformat.setValue6(value6);
            genbankformat.setSeq(sequence);
            
            cout << endl;
            
            cout << "Sequence in Genbank Format:-\n";
            cout << endl;
            
            genbankformat.printSeqDetails();      // call printSeqDetails from the drived class 
            
        }
        
        else if (optRich == 2){     //if user choose 1, it will print out 
            
            emblformat.setId(id);  //each member data is called by their respective function
            emblformat.setAccessionNo(accession_no);
            emblformat.setDesc(desc);
            emblformat.setSeq(sequence);
            
            cout << endl;
            
            cout << "Sequence in EMBL Format:-\n";
            cout << endl;
            
            emblformat.printSeqDetails();     // call printSeqDetails from the drived class of 
            
        }
        
        else if (optRich == 3){     //if user choose 1, it will print out 
            
            cout << "Enter features? Press Y or N" <<endl;
            cin >> feat1;
            
            if (feat1 == 'Y'){
                cout << "Features: source" << endl;
                cout << "Value: ";
                cin >> value1;
                
                cout << "Add more value? Press Y or N" << endl;
                cout << "Option: ";
                cin >> optvalue;
                
                if (optvalue == 'Y'){
                    cout << "Value: ";
                    cin >> value2;
                    
                    cout << "Add more value? Press Y or N" << endl;
                    cout << "Option: ";
                    cin >> optvalue;
                    
                    if (optvalue == 'Y'){
                        cout << "Value: ";
                        cin >> value3;
                        
                    }
                    
                }
            }
            
            cout << "Enter features? Press Y or N" <<endl;
            cin >> feat2;
            
            if (feat2 == 'Y'){
                cout << "Features: repeated region" << endl;
                cout << "Value: ";
                cin >> value4;
                
                cout << "Add more value? Press Y or N" << endl;
                cout << "Option: ";
                cin >> optvalue;
                
                if (optvalue == 'Y'){
                    cout << "Value: ";
                    cin >> value5;
                    
                }
                
                cout << "Add more value? Press Y or N" << endl;
                cout << "Option: ";
                cin >> optvalue;
                
                if (optvalue == 'Y'){
                    cout << "Value: ";
                    cin >> value6;
                    
                    cout << "Add more value? Press Y or N" << endl;
                    cout << "Option: ";
                    cin >> optvalue;
                    
                    cout << "Enter features? Press Y or N" <<endl;
                    cout << "Option: ";
                    cin >> optvalue;
                    cout <<endl;
                    
                }
                
            }
            
            genbankformat.setId(id);  //each member data is called by their respective function
            genbankformat.setAccessionNo(accession_no);
            genbankformat.setVersion(version);
            genbankformat.setDesc(desc);
            genbankformat.setValue1(value1);
            genbankformat.setValue2(value2);
            genbankformat.setValue3(value3);
            genbankformat.setValue4(value4);
            genbankformat.setValue5(value5);
            genbankformat.setValue6(value6);
            genbankformat.setSeq(sequence);
            
            cout << endl;
            
            cout << "Sequence in Genbank Format:-\n";
            cout << endl;
            
            genbankformat.printSeqDetails();      // call printSeqDetails from the drived class
            
            emblformat.setId(id);  //each member data is called by their respective function
            emblformat.setAccessionNo(accession_no);
            emblformat.setDesc(desc);
            emblformat.setSeq(sequence);
            
            cout << endl;
            
            cout << "Sequence in EMBL Format:-\n";
            cout << endl;
            
            emblformat.printSeqDetails();     // call printSeqDetails from the drived class of 
            
        }
        
    }
    
    void outOptBoth(int optSBoth, int optRBoth){  //function definition
        Fasta fastaformat;  //instances  
        GCG gcgformat;
        Genbank genbankformat;  //instances 
        EMBL emblformat;
        
        //variables and their data types
        string id;
        string accession_no;
        string version;
        string desc;
        string sequence;
        char feat1;
        char feat2;
        char optvalue;
        string value1;
        string value2;
        string value3;
        string value4;
        string value5;
        string value6;
        
        cout << "\nEnter sequence details:- " << endl;
        cout << "Enter ID: ";
        cin >> id;                    //user enter id 
        
        cout << "Enter Accession No.: ";
        cin >> accession_no;
        cin.ignore();
        
        cout << "Enter Version: ";
        getline(cin,version);
        
        cout << "Enter Description: ";
        getline(cin,desc);                  //user enter description 
        
        cout << "Enter Sequence: ";
        cin >> sequence;              //user enter sequence
        
        if (optSBoth == 1){           
            
            fastaformat.setId(id);  //each member data is called by their respective function
            fastaformat.setVersion(version);
            fastaformat.setDesc(desc);
            fastaformat.setSeq(sequence);
            
            cout << endl;
            
            cout << "Sequence in Fasta Format:-\n";
            cout << endl;
            
            fastaformat.printSeqDetails();      // call printSeqDetails from the drived class 
            
        }
        
        else if (optSBoth == 2){     //if user choose 1, it will print out 
            
            gcgformat.setId(id);  //each member data is called by their respective function
            gcgformat.setVersion(version);
            gcgformat.setDesc(desc);
            gcgformat.setSeq(sequence);
            
            cout << endl;
            
            cout << "Sequence in GCG Format:-\n";
            cout << endl;
            
            gcgformat.printSeqDetails();     // call printSeqDetails from the drived class 
            
        }
        
        else if (optSBoth == 3){     //if user choose 1, it will print out 
            
            fastaformat.setId(id);  //each member data is called by their respective function
            fastaformat.setVersion(version);
            fastaformat.setDesc(desc);
            fastaformat.setSeq(sequence);
            
            cout << endl;
            
            cout << "Sequence in Fasta Format:-\n";
            cout << endl;
            
            fastaformat.printSeqDetails();      // call printSeqDetails from the drived class 
            
            gcgformat.setId(id);  //each member data is called by their respective function
            gcgformat.setVersion(version);
            gcgformat.setDesc(desc);
            gcgformat.setSeq(sequence);
            
            cout << endl;
            
            cout << "Sequence in GCG Format:-\n";
            cout << endl;
            
            gcgformat.printSeqDetails();     // call printSeqDetails from the drived class 
            
        }
        
        if (optRBoth == 1){           //if user choose 1, it will print out 
            
            cout << "Enter features? Press Y or N" <<endl;
            cin >> feat1;
            
            if (feat1 == 'Y'){
                cout << "Features: source" << endl;
                cout << "Value: ";
                cin >> value1;
                
                cout << "Add more value? Press Y or N" << endl;
                cout << "Option: ";
                cin >> optvalue;
                
                if (optvalue == 'Y'){
                    cout << "Value: ";
                    cin >> value2;
                    
                    cout << "Add more value? Press Y or N" << endl;
                    cout << "Option: ";
                    cin >> optvalue;
                    
                    if (optvalue == 'Y'){
                        cout << "Value: ";
                        cin >> value3;
                        
                    }
                    
                }
            }
            
            cout << "Enter features? Press Y or N" <<endl;
            cin >> feat2;
            
            if (feat2 == 'Y'){
                cout << "Features: repeated region" << endl;
                cout << "Value: ";
                cin >> value4;
                
                cout << "Add more value? Press Y or N" << endl;
                cout << "Option: ";
                cin >> optvalue;
                
                if (optvalue == 'Y'){
                    cout << "Value: ";
                    cin >> value5;
                    
                }
                
                cout << "Add more value? Press Y or N" << endl;
                cout << "Option: ";
                cin >> optvalue;
                
                if (optvalue == 'Y'){
                    cout << "Value: ";
                    cin >> value6;
                    
                    cout << "Add more value? Press Y or N" << endl;
                    cout << "Option: ";
                    cin >> optvalue;
                    
                    cout << "Enter features? Press Y or N" <<endl;
                    cout << "Option: ";
                    cin >> optvalue;
                    cout <<endl;
                    
                }
                
            }
            
            genbankformat.setId(id);  //each member data is called by their respective function
            genbankformat.setAccessionNo(accession_no);
            genbankformat.setVersion(version);
            genbankformat.setDesc(desc);
            genbankformat.setValue1(value1);
            genbankformat.setValue2(value2);
            genbankformat.setValue3(value3);
            genbankformat.setValue4(value4);
            genbankformat.setValue5(value5);
            genbankformat.setValue6(value6);
            genbankformat.setSeq(sequence);
            
            cout << endl;
            
            cout << "Sequence in Genbank Format:-\n";
            cout << endl;
            
            genbankformat.printSeqDetails();      // call printSeqDetails from the drived class 
            
        }
        
        else if (optRBoth == 2){     //if user choose 1, it will print out 
            
            emblformat.setId(id);  //each member data is called by their respective function
            emblformat.setAccessionNo(accession_no);
            emblformat.setDesc(desc);
            emblformat.setSeq(sequence);
            
            cout << endl;
            
            cout << "Sequence in EMBL Format:-\n";
            cout << endl;
            
            emblformat.printSeqDetails();     // call printSeqDetails from the drived class of 
            
        }
        
        else if (optRBoth == 3){     //if user choose 1, it will print out 
            
            cout << "Enter features? Press Y or N" <<endl;
            cin >> feat1;
            
            if (feat1 == 'Y'){
                cout << "Features: source" << endl;
                cout << "Value: ";
                cin >> value1;
                
                cout << "Add more value? Press Y or N" << endl;
                cout << "Option: ";
                cin >> optvalue;
                
                if (optvalue == 'Y'){
                    cout << "Value: ";
                    cin >> value2;
                    
                    cout << "Add more value? Press Y or N" << endl;
                    cout << "Option: ";
                    cin >> optvalue;
                    
                    if (optvalue == 'Y'){
                        cout << "Value: ";
                        cin >> value3;
                        
                    }
                    
                }
            }
            
            cout << "Enter features? Press Y or N" <<endl;
            cin >> feat2;
            
            if (feat2 == 'Y'){
                cout << "Features: repeated region" << endl;
                cout << "Value: ";
                cin >> value4;
                
                cout << "Add more value? Press Y or N" << endl;
                cout << "Option: ";
                cin >> optvalue;
                
                if (optvalue == 'Y'){
                    cout << "Value: ";
                    cin >> value5;
                    
                }
                
                cout << "Add more value? Press Y or N" << endl;
                cout << "Option: ";
                cin >> optvalue;
                
                if (optvalue == 'Y'){
                    cout << "Value: ";
                    cin >> value6;
                    
                    cout << "Add more value? Press Y or N" << endl;
                    cout << "Option: ";
                    cin >> optvalue;
                    
                    cout << "Enter features? Press Y or N" <<endl;
                    cout << "Option: ";
                    cin >> optvalue;
                    cout <<endl;
                    
                }
                
            }
            
            genbankformat.setId(id);  //each member data is called by their respective function
            genbankformat.setAccessionNo(accession_no);
            genbankformat.setVersion(version);
            genbankformat.setDesc(desc);
            genbankformat.setValue1(value1);
            genbankformat.setValue2(value2);
            genbankformat.setValue3(value3);
            genbankformat.setValue4(value4);
            genbankformat.setValue5(value5);
            genbankformat.setValue6(value6);
            genbankformat.setSeq(sequence);
            
            cout << endl;
            
            cout << "Sequence in Genbank Format:-\n";
            cout << endl;
            
            genbankformat.printSeqDetails();      // call printSeqDetails from the drived class
            
            emblformat.setId(id);  //each member data is called by their respective function
            emblformat.setAccessionNo(accession_no);
            emblformat.setDesc(desc);
            emblformat.setSeq(sequence);
            
            cout << endl;
            
            cout << "Sequence in EMBL Format:-\n";
            cout << endl;
            
            emblformat.printSeqDetails();     // call printSeqDetails from the drived class of 
            
        }
        
    }

int main(){
    
    int optfile;
    int optSimple;
    int optRich;
    int optSBoth;
    int optRBoth;
    bool selectformat=true;
    char decide;
    
    while(selectformat){
        
        cout << "Choose the sequence file format:- \n" <<
                "1 - Simple Format \n" <<
                "2 - Rich Format \n" <<
                "3 - Both Formats" << endl;
        cout << endl;
        
        cout << "Option: ";
        cin >> optfile;  //user enter 1 or 2 or 3 
        
        if (optfile == 1){
            cout << "\nChoose the simple format:- \n" <<
                     "1 - Fasta \n" <<
                     "2 - GCG \n" <<
                     "3 - Both formats" << endl;
            cout << endl;
            cout << "Option: ";
            cin >> optSimple;
            
            outOptSimple(optSimple);
        }
        
        else if (optfile == 2){
            cout << "\nChoose the rich format:- \n" << 
                     "1 - Genbank\n" <<
                     "2 - EMBL\n" <<
                     "3 - Both formats" << endl;
            cout << endl;
            cout << "Option: ";
            cin >> optRich;
            
            outOptRich(optRich);
        }
        
        else if (optfile == 3){
            cout << "\nChoose the simple format:- \n" <<
                     "1 - Fasta \n" <<
                     "2 - GCG \n" <<
                     "3 - Both formats" << endl;
            cout << endl;
            cout << "Option: ";
            cin >> optSBoth;
            
            cout << "\nChoose the rich format:- \n" << 
                     "1 - Genbank\n" <<
                     "2 - EMBL\n" <<
                     "3 - Both formats" << endl;
            cout << endl;
            cout << "Option: ";
            cin >> optRBoth;
            
            outOptBoth(optSBoth, optRBoth);
            
        }
        
        cout<< "\nNext? Press" << endl;
        cout<<"X – Terminate program" <<endl;
        cout<<"1 – Choose another simple format"<<endl;
        cout<<"2 – Choose another sequence file format"<<endl;
        
        cout<< '\n' << endl;
        cout<< "Option: ";
        cin>> decide;
        cout<< '\n' << endl;
        
        bool decision=true;
        while(decision){
            if (decide == 'X'){
                cout<< "Program is terminated." <<endl;
                return 0;
            }
            
            else if (decide == 1){
                bool selectformat;
            }
            
            else if (decide == 2){
                bool selectformat;
            }
            
            else {
                decision = false;
            }
        }
        
    }
    
}

