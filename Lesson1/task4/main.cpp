#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float firstnumber, secondnumber, answer, answr;
    int choose;
    cout << "Insert two nubers: " << endl;
    cout << "Insert first number: " << endl;
    cin >> firstnumber;
    cout << "Insert second number: " << endl;
    cin >> secondnumber;
    cout << "Choose the action you want to do with numbers:\n1 - sum\n 2 - difference\n 3 - multiplication\n 4 - division\n 5 - square\n 6 - root" << endl;
    cin >> choose;
    switch (choose) {
        case 1:
            answer = firstnumber + secondnumber;
            cout << "This your number: " << answer << endl;
            break;
        case 2:
            answer = firstnumber - secondnumber;
            cout << "This your number: " << answer << endl;
            break;
        case 3:
            answer = firstnumber * secondnumber;
            cout << "This your number: " << answer << endl;
            break;
        case 4:
            answer = firstnumber/secondnumber;
            cout << "This your number: " << answer << endl;
            break;
        case 5:
            answer = pow(firstnumber,2);
            answr = pow(secondnumber,2);
            cout << "This your first number: " << answer << "\nThis your second number: " << answr << endl;
            break;
        case 6:
            answer = sqrt(firstnumber);
            answr = sqrt(secondnumber);
            cout << "This your first number: " << answer << "\nThis your second number: " << answr << endl;
            break;
    }
}
