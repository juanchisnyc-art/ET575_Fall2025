/*
Juan Velasco
Sept 15, 2025
lab 6, nested conditional statement and switch
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<< "\n --- Example 1: nested condition----" <<endl;
    int n = 5;

    if (n>0){
        if(n % 2==0){
            cout<<"the number is positive and EVEN" << endl;
        } else{
            cout<<"The number is positive and ODD" << endl;
        }
    }else if (n<0){
        cout<<"The number is NEGATIVE amd EVEN"<<endl;
    }
    else{
        cout<<"The number is NEGATIVE and ODD"<<endl;
    }
}
else{
    cout<< "The number is zero"<<endl;
}
cout<<"\n --- Example 2: organize three numbers in decreasing order----"<<endl;
// declare the identifiers (variable names)
int num1 , num 2, num 3;

    //display a message and collect the three numbers
    cout<<"Enter three numbers:";
    cin>>num1>>num2>>num3;

    //check if num1 is greater than num2 and num3
    if(num1>num2&& num1>num3){
        if(num2>num3)
        cout<<"num1<<"\t"<<num2<<"\t"<<num3<<endl;
        else
            cout"num1<<"\t"<<num3<<"\t"<<num2<<endl;
    }
    // check if num2 is the greatest
    else if (num2>num1 && num2>num3){
        if (num1>num3)
        cout<<"num2<<"\t"<<num1<<"\t"<<num3<<endl;
        else
            cout<<"num2<<"\t"<<num3<<"\t"<<num1<<endl;
    //check if num3 is the greatest
    else if(num3>num2 && num3> num1){
        if (num1>num2)
        cout<<"num3<<"\t"<<num1<<"\t"<<num2<<endl;
        else
        cout<<num3<<"\t"<<num2<<"\t"<<num1<<endl;
    }
    //check if num3 is the greatest
    else if (num3>num2 && num3>num1){
        cout<<"num3 is the greatest"<<endl;
        else
        cout<<num3<<"\t"<<num2<<"\t"<<num1<<endl;
    }
    else{
        cout<<"All three numbers are the same!"<<endl;
    }

cout<<"\n --- Example 3: switch ----"<<endl;
// select a day-off using switch-case statement
int dayoff;
cout<<"select a day-off:"<<endl;
cout<<"1 for Monday"<<endl;
cout<< "2 for Tuesday"<<endl;
cout<<"3 for Wednesday"<<endl;
cout<<"4 for thursday"<<endl;
cout<<"5 for Friday""<<endl;
cin>>dayoff;

switch (dayoff)
{
    case 1:
        cout<<"You are off on monday"<<endl;
        break;
    case 2:
         cout<<"You are off on Tuesday"<<endl;
         break;
    case 3:
         cout<<"You are off on Wednesday"<<endl;
         break;
    case 4:
         cout<<"You are off on thursday"<<endl;
         break;
    case 5:
         cout<<"You are off on Friday"<<endl;
         break;
    default:
     cout<<"Unable to read the day-off"<<endl;
     break;
}
 cout<<"\n ---- Example 4: switch to select a gender --- "<<endl;
 char gender='';
  cout<<"select a gender"<<endl;
  cout<<"m or M for male"<<endl;
  cout<<"f or F for female"<<endl;
  cout<<"o or O for others"<<endl;
  cin>>gender

  switch (gender)
  {
    case'm':
     cout<<"Gender = Male <<endl;
    break;
    case 'f' : case 'F':
     cout<<"Gender = FEMALE<<endl;
     break;
     case 'o': case 'O':
      cout<<"Gender = OTHERS"<<endl;
      break;
    default:
     cout<<"Gender = UNDIFINED"<<endl;
     break;
    default:
         cout<<"Gender = UNDEFINED"<<endl;
         breal;
  }
    out<<"/n ---- EXCERISE ----"<<endl;
double savings;
    cout << "Enter the amount of money you have saved: ";
    cin >> savings;

    if (savings < 0) {
        cout << "With $" << savings << " have some savings!" << endl;
    }
    else if (savings > 0 && savings < 200000) {
        cout << "With $" << savings << " you need to keep saving!" << endl;
    }
    else if (savings >= 200000 && savings <= 500000) {
        cout << "With $" << savings << " you can afford an Apartment or Co-op" << endl;

        if (savings >= 200000 && savings < 300000) {
            cout << "Type: Studio" << endl;
        }
        else if (savings >= 300000 && savings < 400000) {
            cout << "Type: 1 Bedroom + 1 Bath" << endl;
        }
        else if (savings >= 400000 && savings <= 500000) {
            cout << "Type: 2 Bedrooms + 1 Bath" << endl;
        }
    }
    else if (savings >= 500001 && savings <= 1000000) {
        cout << "With $" << savings << " you can afford a House" << endl;

        if (savings >= 500001 && savings < 700000) {
            cout << "Type: 2 Bedrooms + 2 Baths" << endl;
        }
        else if (savings >= 700001 && savings <= 1000000) {
            cout << "Type: 3 Bedrooms + 3 Baths" << endl;
        }
    }
    else if (savings > 1000000) {
        cout << "With $" << savings << " you can afford a Mansion" << endl;
    }

    // ---------------- Exercise 2 ----------------
    cout << "\n --- Exercise 2: Switch-Case Double Number ---" << endl;

    int number;
    char choice;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Do you want to double the number? (Y/N): ";
    cin >> choice;

    switch (choice) {
        case 'Y':
        case 'y':
            number = number * 2;
            break;
        case 'N':
        case 'n':
            // keep the same number
            break;
        default:
            number = 0;
            break;

    cout << "The number is set to " << number << endl;


    return 0;
}

