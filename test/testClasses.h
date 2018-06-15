#pragma once

#include "TSingleton.h"

//class A 
//{
//public:
//	virtual void message() = 0;
//};
//
//class B : public A , public TSingleton<B> {
//public:
//	B();
//	virtual void message() {}
//};
//
//class C : public A , public TSingleton<C> {
//public:
//	C();
//	virtual void message() {}
//};



//class A
//{
//protected:
//	A();
//public:
//	virtual void message() = 0;
//};
//
//class B : public A , public TSingleton<B> {
//	friend class TSingleton<B>;
//protected:
//	B();
//public:
//	virtual void message() {}
//};
//
//class C : public A, public TSingleton<C> {
//	friend class TSingleton<C>;
//protected:
//	C();
//public:
//	virtual void message() {}
//};


class A
{
protected:
	A() {};
public:
	virtual void message() = 0;
};

class B : public TSingleton<B> {
	friend class TSingleton<B>;
protected:
	B() {};
public:
	virtual void message() {}
};

class C : public TSingleton<C> {
	friend class TSingleton<C>;
protected:
	C() {};
public:
	virtual void message() {}
};