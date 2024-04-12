#include <iostream>
using namespace std;
class a{
	public:
		void hello()
		{
			cout<<"hello everyone"<<endl;
		}
		void hello(string name)
		{
			cout<<"hello"<<name<<endl;
		}
		void hello(string name1,string name2)
		{
			cout<<"hello"<<"from"<<name1<<"to"<<name2<<endl;
		}
		
};
//method overriding
class b{
	public:
		void hello()
		{
			cout<<"hey b"<<endl;
		}
};
class c:public b{
	public:
		void hello()
		{
			cout<<"hey c"<<endl;
		}
};
int main()
{
	b B;
	c C;
	B.hello();
	C.hello();
}
