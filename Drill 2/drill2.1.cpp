#include "std_lib_facilities.h"

int main() {

    cout << "Please enter your first name (followed by 'enter'):" << endl;
    string first_name;
    cin >> first_name;
    cout << "Hello, " << first_name << "!" << endl;
    
    cout << "Hello! What does this drill mean add a few introdoctary lines and actually intend it? It's sort of difficult when anyone could write their name in." << endl;
    cout << "I hope it doesn't actually matter what I write here. I am not very creative. I also hope these two lines are enough" << endl;

    cout << "Now please enter the name of a friend" << endl;
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " recently?" << endl;
    
    char friend_sex = '0';
    cout << "Please enter 'm' if the friend is male and enter 'f' if female. Press 'Enter' afterwards " << endl;
    cin >> friend_sex;
    if (friend_sex=='m')
    {
        cout << "If you see " << friend_name << " please ask him to call me." << endl;
    }
    if (friend_sex == 'f')
    {
        cout << "If you see " << friend_name << " please ask her to call me." << endl;
    }

    cout << "Please enter your age" << endl;
    int age;
    cin >> age;
    
    cout << "I heard you just had your birthday and you are " << age << " years old" << endl;
    if (age <=0 || age>=110 )
    {
        simple_error("you're kidding!");
    }
    if (age<12)
    {
        cout << "Next year you will be " << age + 1 << "." << endl;
    }
    if (age == 17)
    {
        cout << "Next year you will be able to vote." << endl;
    }
    if (age > 70)
    {
        cout << "I hope you are enjoying retirement." << endl;
    }
    cout << "Yours sincerely, " << endl << endl << endl;
    
    cout << "Marton Gergely" << endl; //az a ékezetes verziójat nem szereti
   
    return 0;
}
