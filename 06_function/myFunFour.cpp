#include <iostream>
using namespace std;

int helloChai()
{
    cout << "Hello chai" << endl;
    return 0;
}

int main()
{
    // Lambda function: captures nothing [], takes int cups as parameter, returns void
    auto preparedChai = [](int cups)
    {
        cout << "Preparing " << cups << " cups of chai..." << endl;
    };

    preparedChai(5);  // Call the lambda with argument 5

    return 0;
}
