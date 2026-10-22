#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> ciutats;
    string a;
    for (int i = 0; i < 5; i++) {
        cout << "Diga'm el nom de una ciutat: " << std::endl;
        std::cin >> a;
        ciutats.push_back(a);
    }
    ciutats.pop_back();
    cout << "Vector ciutats final:" << std::endl;
    for (string nom : ciutats) {
        cout << nom << std::endl;
    }
}
