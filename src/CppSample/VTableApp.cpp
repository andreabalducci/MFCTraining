#include "stdafx.h"
#include "VTableApp.h"


VTableApp::VTableApp()
{
	puts("");
	puts("==================================================================");
	puts("VTable App");
	puts("==================================================================");
}


VTableApp::~VTableApp()
{
	puts("==================================================================");
}

void VTableApp::Run()
{
	puts("VTableApp");
	Base b;
	Enh enh;

	printf("sizeof(b) = %d, sizeof(enh) = %d\n", sizeof(b), sizeof(enh));
}
