#include<iostream>
#include<stdexcept>
using namespace std;

template<class T>

class MyArray
{
	private:
		int size;
		T *p;
	public:
		MyArray(int s=1):size(s),p(new T[size])
	{
	}
		T& At(int index)
		{
//			(index<0)?throw runtime_error("Memory underflow"):((index>=size)?throw runtime_error("Memory overflow"));
			if(index<0)
				throw runtime_error("Memory Underflow: Index less than size");
			if(index>=size)
				throw runtime_error("Memory Overflow: Index greater than size");
			return p[index];
		}
		~MyArray()
		{
			delete []p;
		}
};

int main()
{
	MyArray<int> m1(5);
	try
	{
		for(int i=0;i<5;i++)
		{
			m1.At(i)=(i+1)*11;
			cout<<"\n"<<m1.At(i);
		}
		m1.At(-2)=22;
		m1.At(32)=20;
		cout<<"\n"<<m1.At(32);
		m1.At(100)=50;
		cout<<"\n"<<m1.At(100);
		m1.At(3)=30;
		cout<<"\n"<<m1.At(3);
		m1.At(4)=40;
		cout<<"\n"<<m1.At(4);
	}
	catch(runtime_error re)
	{
		cout<<"\n"<<re.what()<<endl;
	}

}





