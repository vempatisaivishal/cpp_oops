#include <iostream>
#include "Hero3.cpp"
using namespace std;

class Hero{
	public:
	int health;
	

};
class Hero1{
	
};
class Hero2{
	int health;
	public:
	void print()
	{
		cout<<health<<endl;
	}
};
class Hero5{
	public:
		int health;
		
};
class Hero6{
	int health;
	public:
	void print()
	{
		cout<<health<<endl;
	}
	int getHealth()
	{
		return health;
	}
	void setHealth(int hel)
	{
		health=hel;
	}
};
class Hero7{
	public:
		int x;
		char ch;
};
class Hero8{
	int health;
	int level;
};
class Hero9{
	int health;
	public:
	void print()
	{
		cout<<health<<endl;
	}
	int getHealth()
	{
		return health;
	}
	void setHealth(int hel)
	{
		health=hel;
	}
};
class Hero10{
	int health;
	public:
	Hero10()
	{
		cout<<"constructor called"<<endl;
	}
	public:
	void print()
	{
		cout<<health<<endl;
	}
	int getHealth()
	{
		return health;
	}
	void setHealth(int hel)
	{
		health=hel;
	}
};
class Hero11{
	int health;
	public:
	Hero11()
	{
		cout<<"constructor called"<<endl;
	}
	Hero11(int health)
	{
		cout<<this<<endl;
		this->health=health;
	}
	public:
	void print()
	{
		cout<<health<<endl;
	}
	int getHealth()
	{
		return health;
	}
	void setHealth(int hel)
	{
		health=hel;
	}
};
class Hero12{
	int health;
	public:
	Hero12()
	{
		cout<<"constructor called"<<endl;
	}
	Hero12(int health)
	{
		cout<<this<<endl;
		this->health=health;
	}
	public:
	void print()
	{
		cout<<health<<endl;
	}
	int getHealth()
	{
		return health;
	}
	void setHealth(int hel)
	{
		health=hel;
	}
};
class Hero13{
	int health;
	public:
	Hero13()
	{
		cout<<"constructor called"<<endl;
	}
	Hero13(int health)
	{
		cout<<this<<endl;
		this->health=health;
	}
	Hero13(Hero13 &temp)
	{
		cout<<"copy contructor is called"<<endl;
		this->health=temp.health;
	}
	public:
	void print()
	{
		cout<<health<<endl;
	}
	int getHealth()
	{
		return health;
	}
	void setHealth(int hel)
	{
		health=hel;
	}
};
class Hero14{
	int health;
	public:
	Hero14()
	{
		cout<<"constructor called"<<endl;
	}
	Hero14(int health)
	{
		cout<<this<<endl;
		this->health=health;
	}
	public:
	void print()
	{
		cout<<health<<endl;
	}
	int getHealth()
	{
		return health;
	}
	void setHealth(int hel)
	{
		health=hel;
	}
	~Hero14()
	{
		cout<<"destructor called"<<endl;
	}
};
//static
class Hero15{
	public:
	static int x;
	static int random()
	{
		cout<<"this is random message"<<endl;
	}
};
int Hero15::x=18;
int main()
{
	Hero h1;
	cout<<sizeof(h1)<<endl;//4 when only int
	Hero1 h2;
	cout<<sizeof(h2)<<endl;//when we have empty then 1
	Hero3 h3;
	cout<<sizeof(h3)<<endl;
	//to access the properties we use . operator
	cout<<h1.health<<endl;//default garbage value is 0
	Hero5 h5;
	h5.health=12;
	cout<<h5.health<<endl;//we can change in this way we can set
	Hero6 h6;
	h6.setHealth(34);
	cout<<h6.getHealth()<<endl;
	Hero7 h7;
	cout<<sizeof(h7)<<endl;//answer 8 padding and greedy alignment
	Hero8 *h8=new Hero8();
	cout<<sizeof(h8)<<endl;//always 8 size
	Hero9 *h9=new Hero9();
	h9->setHealth(12);
	
	cout<<h9->getHealth()<<endl;
	cout<<(*h9).getHealth()<<endl;
	cout<<"hey"<<endl;
	Hero10 h10;
	cout<<"above called"<<endl;
	Hero10 *h11=new Hero10;//heap constructor called
	Hero11 h12(12);//same address
	cout<<&h12<<endl;//same address
	h12.print();
	Hero12 h13(13);
	Hero12 h14(h13);
	h13.print();
	h14.print();
	Hero13 h15(45);
	Hero13 h16(h15);
	h15.print();
	h16.print();
	h13.setHealth(89);
	cout<<h13.getHealth()<<" ,"<<h14.getHealth()<<endl;
	h15.setHealth(90);
	cout<<h15.getHealth()<<","<<h16.getHealth()<<endl;
	//but shallow copy is having the same memory and deep copy is making the different memory
	Hero14 h17;
	Hero14 *h18=new Hero14();
	delete h18;
	cout<<Hero15::x<<endl;
	cout<<Hero15::random()<<endl;
}
