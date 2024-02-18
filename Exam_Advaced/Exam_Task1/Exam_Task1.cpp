#include <iostream>
#include <map>  //#include <set>
#include <queue> //
#include<stack>
#include <string>
#include <sstream>
#include <vector>	//#include <utility>  // for pairs !!!!!!
#include <algorithm>

using namespace std;

void printQueue(queue<string> names,const int &prefix) {
    bool isFirst = true;
    
    if (!names.empty()) {
        while (!names.empty()) {
            if (isFirst) {
                cout << prefix << ":";
                isFirst = false;
            }
            cout << ' ' << names.front() ;
            names.pop();
        }

        cout << endl;
    }
    else {
        cout << prefix << ": ";
        cout << "<empty>" << endl;
    }
}

void printStack(stack<string> names, const int& prefix) {
    bool isFirst = true;

    if (!names.empty()) {
        while (!names.empty()) {
            if (isFirst) {
                cout << prefix << ":";
                isFirst = false;
            }
            cout << ' '<< names.top() ;
            names.pop();
        }

        cout << endl;
    }
    else {
        cout << prefix << ": ";
        cout << "<empty>" << endl;
    }
    
}

int main()
{
    queue<string> namesList1;
    queue<string> namesList2;
    stack<string> namesList3;

    string currentName, input;
    int command;

    while (cin >> input && input != "5") {
        if (input != "10" && input != "20"&& input != "12"&& input != "23" && input != "31" && input != "99") {
           currentName = input;
           cin >> command;
          
           if(command == 1)
                namesList1.push(currentName);
           else if (command == 2)
               namesList2.push(currentName);
        }
        else {
             command = stoi(input);
             switch (command)
             {
             case 10:
                 if(!namesList1.empty())
                     namesList1.pop();
                 break;
             case 20:
                 if (!namesList2.empty())
                     namesList2.pop();
                 break;
             case 12:
                 if (!namesList1.empty()) {
                     string tempName = namesList1.front();
                     namesList2.push(tempName);
                     namesList1.pop();
                 }
                 break;
             case 23:
                 if (!namesList2.empty()) {
                     string tempName = namesList2.front();
                     namesList3.push(tempName);
                     namesList2.pop();
                 }
                 break;
             case 31:
                 if (!namesList3.empty()) {
                     string tempName = namesList3.top();
                     namesList1.push(tempName);
                     namesList3.pop();
                 }
                 break;
             case 99:
                 printQueue(namesList1, 1);
                 printQueue(namesList2, 2);
                 printStack(namesList3, 3);
                 break;

             default:
                 break;
             }
        }
           
     

    }



    return 0;
}
