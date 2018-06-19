#pragma once

#include "TSingleton.h"

// Singleton 1-2
//class A
//{
//protected:
//	A() {};
//public:
//	virtual void message() = 0;
//};
//
//class B : public A , public TSingleton2<B> {
//	friend class TSingleton2<B>;
//protected:
//	B() {};
//public:
//	virtual void message() {}
//};
//
//class C : public A, public TSingleton2<C> {
//	friend class TSingleton2<C>;
//protected:
//	C() {};
//public:
//	virtual void message() {}
//};



class A : public TSingleton3<A>{
public:
	A() {};
	virtual void message() = 0;
};

class B : public A {
public:
	B() {};
	virtual void message() {}
};

class C : public A {
public:
	C() {};
	virtual void message() {}
};



