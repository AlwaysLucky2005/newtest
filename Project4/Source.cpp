#include <string>
#include <iostream>
#include <vector>
using std::cout;
template<class T>
void print(std::vector<T>& vec)
{
	cout << "Size is: " << vec.size()<<'\n';
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << '\n';
	}
}
int main()
{
	std::vector<int> vec = {0,1,2,3,4};
	//print(vec);
	cout << vec.front()<<'\n';
	cout << vec.back() << '\n';
	cout << *(vec.data()) << '\n';
	vec.insert()
	return 0;
}