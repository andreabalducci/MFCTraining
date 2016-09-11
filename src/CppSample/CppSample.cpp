// CppSample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>


#define BOOL int
#define TRUE 1
#define FALSE !TRUE

class Worker
{
private:
	char m_FullName[256];
public:
	Worker();

	void	SetName(const char* pFullName);
	void	PrintName() const;
};

Worker::Worker() 
{
	memset(m_FullName, 0, sizeof(m_FullName));
}

void Worker::SetName(const char* pFullName) 
{
	strncpy(m_FullName, pFullName, sizeof(m_FullName));
}

void Worker::PrintName() const
{
	puts("Hello ");
	puts(m_FullName);
}

int main()
{
	Worker w;
	w.SetName("Andrea");

	w.PrintName();

	getchar();
    return 0;
}

