
#include <cassert>
#include <iostream>

using namespace std;

int Sum(int x, int y) {
	return x + y;
}

void TestSum() {
	assert(Sum(1, 2) == 3);
	assert(Sum(-1, -2) == -3);
	assert(Sum(-1, 1) == 0);
	assert(Sum(0, 1) == 1);
	cout << "TestSum is  ok" << endl;


}
int main() {
	Sum(1, 2);
	TestSum();
	return 0;

}