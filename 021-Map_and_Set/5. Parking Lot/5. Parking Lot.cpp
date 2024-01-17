#include <iostream>
#include <map>
#include <set>
#include <vector>
#include<string>
#include <sstream>
using namespace std;

int main()
{   
    set<string> carPlates;

    while (true) {
        string command, plateNum;
        cin >> command ;

        if (command == "END")
            break;

        cin >> plateNum;

        if (command == "IN,") {
            carPlates.insert(plateNum);
        }
        else {
            carPlates.erase(plateNum);
        }
    }

    if (carPlates.empty())
        cout << "Parking Lot is Empty" << endl;
    else
        for (string plates : carPlates)
        cout << plates << endl;

    return 0;
}
