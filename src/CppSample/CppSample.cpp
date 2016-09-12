// CppSample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "VTableApp.h"
#include "WorkerApp.h"




int main()
{
	{
		WorkerApp app;
		app.Run();
	}

	{
		VTableApp app;
		app.Run();
	}
	getchar();
	return 0;
}

