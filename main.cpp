#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    char operation;
    cout << "First Digit : ";
    cin >> num1;

    cout << "Operation (+ , - , * , / , ^) : ";
    cin >> operation;

    cout << "Second Digit : ";
    cin >> num2;


    int answer;
    // Performing the calculation on the basis of given operation.
    switch (operation){
    
    case '-':
        answer = num1 - num2;
        break;
    
    case '*':
        answer = num1 * num2;
        break;
    
    case '/':
        answer = num1 / num2;
        break;

    case '^':
        answer = 1;
        for (int i = 0; i < num2; i++)
        {
            answer *= num1;
        }
        break;
        
    default:
        answer = num1 + num2;
        break;
    }

    cout<<answer<<endl;
    return 0;
}