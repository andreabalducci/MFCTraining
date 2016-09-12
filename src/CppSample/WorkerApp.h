#pragma once
class WorkerApp
{
public:
	WorkerApp();
	~WorkerApp();

	void Run();
};

class Object
{
public:
	// add virtual to merge in worker vtable
	void ToString()
	{
		puts("Object");
	}
};


class IWorker
{
public:
	virtual Object* ToObject() = 0;
	virtual void ToString() = 0;
};


class Worker : public Object, public IWorker
{
private:
	char m_FullName[256];
public:
	Worker();

	void	SetName(const char* pFullName);
	void	PrintName() const;

	virtual void ToString()
	{
		puts("Worker");
	}

	IWorker* ToWorker()
	{
		return this;
	}

	virtual Object* ToObject()
	{
		return this;
	}
};