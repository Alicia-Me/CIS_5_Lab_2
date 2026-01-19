#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{

    //int-->num && double--> 0.0

    int age = 0;
    double height = 0.0;

    //Use cin to grab the age and height -> you get to choose
  
   cout << "What is your age? ";
    cin >> age;

    cout << "What is your height? ";
    cin >> height;

    // Check if age and height are true with IF statements and printing out with cout to display message

    //Tutorial showed 5 so keep it 5
    /* 5 and up && 3.5
    */ 


    if (age > 5) {
        //'\n' --> spacing issue
        cout << "Yay Awesome you meet the age requirement!" << '\n';
    } else {
    //redirect
        cout << "No way kid!" << '\n';
    }
    //old ppl
    if (age < 67) {
        cout << "Still young and kicking!" << '\n';
    } else {
        cout << "No way you might break something!" << '\n';   
    }

    //----------------------------------------------------------------------//
    
    if (height > 3.5) {
        cout << "Awesome dude you meet the height requirement!" << '\n';
    }

    else {
    
        cout << "Too short dude!";
    }

    return 0;
}