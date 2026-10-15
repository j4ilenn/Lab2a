#include <iostream>

using namespace std;

int main()
{
    
    int totalInches = 49;

    
    cout << totalInches << " inches makes up "
        << totalInches / 12 << " feet" << endl;

    
    cout << "and " << totalInches % 12 << " inches." << endl;

    return 0;
}