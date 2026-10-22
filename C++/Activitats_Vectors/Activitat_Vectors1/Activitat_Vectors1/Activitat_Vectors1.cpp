#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> nums;
	int a = 1;
	for (int i = 0; i < 10; i++) {
		nums.push_back(a + i);
	}

	cout << "Vector Final: " << std::endl;
	
	for (int num : nums) {
		cout << num << std::endl;
	}

}
