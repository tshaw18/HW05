#include "Vector.h"
#include "Vector.cpp"
#include <vector>
using namespace std;

int main() {
	Vector<int> vInt(5);
	for (int i = 0; i < 5; i++){
		vInt.push_back(i);
	}
	cout << "Size: " << vInt.size() << endl;
	cout << "At position 4: " << vInt.at(4) << endl;
	vInt.pop_back();
	cout << "New size: " << vInt.size() << "\nClearing...\n\n";
	vInt.clear();
	cout << vInt.empty() << endl;

	Vector<string> vString;
	vString.push_back("Hello World");
	Vector<string> vString_2;
	vString_2.push_back("I love thin mints");
	vString.swap(vString_2);

	/*Vector<double> vDouble(4, 10.5);
	cout << vDouble.at(3);*/




}
