#include <iostream>
using namespace std;
class a{
	public:
	int x;
};
class b:public a{
	public:
		int y;
};
class c:public b{
	public:
		int z;
};
class d{
	public:
		int x;
};
class e{
	public:
		int y;
};
class f:public d,public e{
	public:
		int z;
};
class g{
	public:
		int x;
};
class h:public g{
	public:
		int y;
};
class i:public g{
	public:
		int z;
};
class amb1{
	public:
		void func()
		{
			cout<<"I am amb1"<<endl;
		}
};
class amb2{
	public:
		void func()
		{
			cout<<"I am amb2"<<endl;
		}
};
class amb3:public amb1,public amb2{
	
};
int main()
{
	//a and b is single inheritance
	b one;
	cout<<one.x<<" "<<one.y<<endl;
	//a b c is multilevel inheritance
	c two;
	cout<<two.x<<","<<two.y<<","<<two.z<<endl;
	//d e f is multiple inheritance
	f three;
	cout<<three.x<<","<<three.y<<endl;//this way we initialize the multiple inheritance
	//g,h,i is hierarchial inheritance
	amb3 obj;
	obj.amb1::func();
	obj.amb2::func();
}
