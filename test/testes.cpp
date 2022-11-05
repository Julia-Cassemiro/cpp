#include <iostream>
using namespace std;

class A
{
	public:
	void virtual mostrar()
	{
		cout<<"Classe A"<<endl;
	}
};

class B: public A
{
	public:
	void mostrar()
	{
		cout<<"Classe B"<<endl;
	}
};

class C: public A
{
	public:
	void mostrar()
	{
		cout<<"Classe C"<<endl;
	}
};


int main() {
	A *a1 = new A();
	A *a2 = new B();
	A *a3 = new C();

	a1->mostrar();
	a2->mostrar();
	a3->mostrar();
}