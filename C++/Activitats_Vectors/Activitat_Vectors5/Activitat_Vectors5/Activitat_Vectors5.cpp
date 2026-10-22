#include <iostream>
#include <vector>
using namespace std;
int main()
{
	string p;
	vector<string>paraules;
	cout << "Ves introduint paraules. Per parar, escriu 'fi'" << std::endl;
	while (cin >> p && p != "fi") {
		paraules.push_back(p);
	}

	cout << "Quina paraula vols comprovar?" << std::endl;
	cin >> p;
	int quantitat = 0;
	for (string a : paraules) {
		if (a == p) {
			quantitat += 1;
		}
	}
	cout << "La paraula '" << p << "' s'ha trobat un total de " << quantitat << " cops." << std::endl;
}
