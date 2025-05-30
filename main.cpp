#include <iostream>
#include <limits>

using namespace std;

void calculator(){

        string op;
        double num1, num2;

        cout << "Select Operator (+, -, *, /): " << flush;
        cin >> op;

        if(op == "+"){
            cout << "First Number: " << flush;
            cin >> num1;

            cout << "Second Number: " << flush;
            cin >> num2;

            cout << "Result = " << num1 + num2 << endl;
        }else if(op == "-"){
            cout << "First Number: " << flush;
            cin >> num1;

            cout << "Second Number: " << flush;
            cin >> num2;

            cout << "Result = " << num1 - num2 << endl;
        }else if(op == "*"){
            cout << "First Number: " << flush;
            cin >> num1;

            cout << "Second Number: " << flush;
            cin >> num2;

            cout << "Result = " << num1 - num2 << endl;
        }else if(op == "/"){

            cout << "First Number: " << flush;
            cin >> num1;

            cout << "Second Number: " << flush;
            cin >> num2;

            if(num2 != 0){
                cout << "Result = " << num1 / num2 << endl;
            }else{
                cout << "Result = Infinity" << endl;
            }
        }else{
            cout << "Invalid Operator." << endl;
        }
}

int main()
{
    cout << "=================" << endl;
    cout << "SIMPLE CALCULATOR" << endl;
    cout << "=================" << endl;

    cout << "Operations:" << endl;
    cout << "\t +" <<endl;
    cout << "\t -" <<endl;
    cout << "\t *" <<endl;
    cout << "\t /" <<endl;

    char continue_choice;

    do{

        calculator();
        cout << "\n Did you wish to continue?(Y/N): " << flush;
        cin >> continue_choice;

    }while(continue_choice == 'y' || continue_choice == 'Y');

    cout << "Thanks for using the calculator" <<endl;

    return 0;
}
