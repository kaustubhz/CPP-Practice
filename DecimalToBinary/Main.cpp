#include"DecToBin.h"
int main()
{
        Stack s;
        s.Accept();
	try
	{
        s.DecToBin();
        s.Display();
	}
	catch(runtime_error re)
	{
		cout<<"\n"<<re.what();
	}

        return 0;
}

