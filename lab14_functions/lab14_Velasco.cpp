/*
Juan Velasco
Nov 12, 2025

*/
#include "lab14.cpp"

using namespace std;

void pointer_ref(){
    int num = 12;
    char c = 'T';
    string* pointerstring;

    // testing the memory address
    cout<<" memory address of int"<< pointerint<<endl;

    //pointer with initial value. value is the memory address of the pointed variable
    pointerint = &num;
    pointerchar = &c;
    pointerstring = &n;

    //check referance value of each pointer
    cout<<"Referance value int" = << pointerint<<endl;
    cout<<"Referance value char" = << pointerchar<<endl;
    cout<<"Referance value string" = << pointerstring<<endl;

    // dereferences operators
    cout<<"Dereferences value of int" = <<"pointerint<<endl;
    cout<<"Dereferences value of char" = <<"pointerchar<<endl;
    cout<<"Dereferences value of string" <<"pointerstring<<

    // Example 2
    // function that passed a value 
    void printvalue(string v){
        cout<<"value = "<<v<<endl;
        v = "inside printvalue function";
    }
    // function that passes a referance
    void printbyreference(string& v){
    cout<<"Passed by referance = /t" <<v<<endl;
    v = "Updated sentence";
    
    }
    
    //function that passes a memory address
    void printaddress(string* v){
        cout<<"pass memory address = /t"<<v<<endl;
    }
// Example 3: arrays
void arrays(){
//declare an array with five values
int scores(5);

//assigning/accessing individual cells in an array
score[0] = 60; //first value has index 0
scores[1] = 30;
scores[2] = 75;
scores[3] = 79;
scores[4] = 98;

    cout<<"Array = /t"<<scores<<endl;
    cout<<"The third score is" <<scores[2]<<endl;

    //initializing value to an array
    int age_children[3] = {12,8,5};
    cout<<"The 1st age = "<<age_children[0]<<endl;"

    // when an array is declared with initial values, the size of the array can be ommitted 
    string name[]=("Annie" "Peter, "Carl", "Charles","Brian");
        cout<<"The fourth name is "<<names[3]<<endl;
    }
    void sizeofarrays(){
    cout<<"size of char \t"<<sized(char)<<endl;
    cout<<"size of int\t"<< sizeof(int)<<endl;
    cout<<"size of double \t"<<sizeof(double)<<endl;
    cout<<"sie of string \t" <<stringof(string)<<endl;

    int age_children[3] = {2,8,5,};
    cout<<"Size of age_children \t<< sizeof(age_children)<<endl;
    cout<<"Size of age_children \t"<<sizeof(age_children)/sizeof(age_children[0]<<endl<<)
    
    }
// example 5: loop in an array
void looparray(){
    string names[]= "Annie","Peter","Carl","Charles","Brian"};
    int sizenames = sizeof(names)/sizeof(names)[0];

    for(int 1 = 0; i<sizenames; i++){
        cout<<names[i]<<"/t";
        //count how many names has 5+ characters
        if(names[i].length()>=5){
            counter ++;
        }
    }
    cout<<endl;
    cout<<"there is/are"<<counter<<" names with 5+ characters

}
// EXCERSISE
void excersise(){
    // declare an array with five values
    int score[5];

    //assinging/accessing individual cells in an array
    score[0]
    score[1]
    score[2]
    score[3]
    score[4]
    score[5]


}