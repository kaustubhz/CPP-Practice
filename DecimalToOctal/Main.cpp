#include"DecToOct.h"
int main()
{
        Stack s;
        s.Accept();
	try
	{
        s.DecToOct();
        s.Display();
	}
	catch(runtime_error re)
	{
		cout<<"\n"<<re.what();
	}

        return 0;
}

