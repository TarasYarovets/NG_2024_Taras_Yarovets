#include <iostream>

using namespace std;

int main()
{
    float salary;
    cout << "How much do you earn?" << endl;
    cin >> salary;
    if (salary < 1000){
        cout << "Work harder";
    }
    if (salary > 1000){
        if (salary > 1000000){
            cout << "You are a millionaire!";
        }
        if (salary < 1000000){
            cout << "Good job!";
        }
    }
    cout << ", but you're great!" << endl;
    return 0;
}
