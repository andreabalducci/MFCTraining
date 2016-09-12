#pragma once
class VTableApp
{
public:
	VTableApp();
	~VTableApp();

	void Run();
};

class Base
{
private:
	int m_v;
};

class Enh : public Base
{
private:
	int m_v;
public:
	Enh() {}
	virtual ~Enh(){	}
};