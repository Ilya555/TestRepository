#include <iostream>
using namespace std;

class Int

{
	private:
	int i;
	public:
	void SetZero()
	{
		i = 0;
	}
    
	void SetValue(int v)
	{
		i = v;
	}

	void Output()
	{
		cout << i;
	}
	static int Sum(Int i1, Int i2)
	{
		Int t;
		t.SetValue(i1.i + i2.i);
		return t;
	}

};


int main()

{

Int i1, i2, i3;
i1.SetValue(5);
i2.SetValue(7);
i3 = Int::Sum(i1,i2);
i3.Output();
return 0;
}