#include <iostream>
using namespace std;
class Student{
	private:
		string name;
		int age;
		int height;
	public:
		int getAge()
		{
			return this->age;
		}
		int setAge(int age)
		{
			this->age=age;
		}
		
};
int main()
{
	Student s1;
	s1.setAge(10);
	cout<<s1.getAge()<<endl;
}
