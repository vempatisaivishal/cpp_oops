#include <iostream>
using namespace std;
class Human{
	public:
		int height;
		int weight;
		int age;
	public:
		int getAge()
		{
			return this->age;
		}
		void setAge(int age)
		{
			this->age=age;
		}
};
class Human1{
	protected:
		int height;
		int weight;
		int age;
	public:
		int getAge()
		{
			return this->age;
		}
		void setAge(int age)
		{
			this->age=age;
		}
};
class Male:public Human{
	public:
		string color;
		void sleep()
		{
			cout<<"Male sleeping"<<endl;
		}
};
class Male2:public Human1{
		public:
		string color;
		void sleep()
		{
			cout<<"Male sleeping"<<endl;
		}
};
int main()
{
	Male m1;
	cout<<m1.getAge()<<endl;//some random garbage value
	m1.sleep();
	m1.setAge(20);
	cout<<m1.getAge()<<endl;
	Male2 m2;
	m2.sleep();
	cout<<m2.color<<endl;
	//protected only methods and of child class we can get
}
