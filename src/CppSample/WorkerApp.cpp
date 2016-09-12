#include "stdafx.h"
#include "WorkerApp.h"


WorkerApp::WorkerApp()
{
	puts("");
	puts("==================================================================");
	puts("Worker App");
	puts("==================================================================");
}


WorkerApp::~WorkerApp()
{
	puts("==================================================================");
}

void WorkerApp::Run()
{
	Worker w;
	Object* pO = w.ToObject();
	Object* pO2 = (Object*)&w;
	IWorker* pW = w.ToWorker();

	w.ToString();
	pO->ToString();
	pW->ToString();

	printf("&w = %p, pO = %p, pW = %p\n", &w, pO, pW);
}




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
	puts(m_FullName);
}

