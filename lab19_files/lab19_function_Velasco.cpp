/**
 *Juan Velasco
 *Nov 24,2025
 *lab19,files and console input
 */
#include<iostream>
#include<fstream>

using namespace std;

//example 1: console input failure
// function to check if num is the proper data type
void checknumber(){
    int num;
    cout<<"Enter a number:";
    cin>>num;

    if(cin.fail())
    {cout<<"Error! input dismatched data type!"<<endl;
    num = -1;
    }
    else
    
    {cout<<"Entered number = "<<num<<endl;}

    //clear the cin state
    cin.clear();
    cin.ignore(10000,'\n');

    cout<<"END OF FUNCTION"<<endl;
}

// example 2: console input to validate an input
float validatenumber(){
    float n;
    bool isNotValid = false;

    do{
        cout<<"Enter a number: ";
        cin>>n;
        isNotValid = cin.fail();
        cin.clear();
        cin.ignore(10000,'\n');
    }while(isNotValid);

    return n;
}

// example 3: set object for input and output files
ifstream fin;
ofstream fout;

void readfile(){
    fin.open("samplefile.txt");

    // variable 'line' is used to store each line of samplefile.txt
    string line;

    // loop through each line in file samplefile.txt
    int linecounter = 1;
    while(getline(fin,line)){
        cout<<"Line"<<linecounter<<"\t"<<line<<endl;
        linecounter ++;
    }

    // close file
    fin.close();
}

// example 4: writing a file
// fout will write in a new or exisitng file,fout over
void writefile(string filename){
    fout.open(filename);

    //write some content
    for(int n = 1; n<=3; n++){
        fout<<"Good morning"<<n<<endl;
    }
    
   
    fout<< "ET 575"<<endl;


    //close the file
    fout.close();

}

// example 5: append data into a file
void appendfile(string filename){
    fout.open(filename, ios::app);

    // append
    for(int n = 3; n>1; n --){
        fout<<n<<endl;
    }
    //write a single line
    fout<< "GAME OVER !"<<endl;

    // close file
    fout.close();


//Excersise lab 19

// 1) Create a file and write one specific line
void create_file() {
    ofstream outfile("data_user.txt");
    outfile << "This is my output file – Type your full name.\n";
    outfile.close();
}

// 2) Append new message to the file
void append_message(string new_msg) {
    ofstream outfile("data_user.txt", ios::app);
    outfile << new_msg << endl;
    outfile.close();
}

// 3) Read the file content and display on screen
void read_file(string filename) {
    ifstream infile(filename);
    string line;

    if (!infile) {
        cout << "Error opening the file!" << endl;
        return;
    }

    while (getline(infile, line)) {
        cout << line << endl;
    }

    infile.close();

}
