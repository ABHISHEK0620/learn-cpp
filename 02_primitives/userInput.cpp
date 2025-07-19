#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userTea;
    int teaQuatity;

    cout << "What would you like to order in tea? \n";
    getline(cin, userTea);

    // ask for quantity
    cout << "how many cups of " << userTea << " would you like to have?";
    cin >> teaQuatity;

    cout << teaQuatity;
    cout << userTea;

    return 0;
}
