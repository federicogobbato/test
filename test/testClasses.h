#pragma once

#include "TSingleton.h"

//// Singleton 1-2
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


//// Singleton 3
//class A : public TSingleton3<A>{
//public:
//	A() {};
//	virtual void message() = 0;
//};
//
//class B : public A {
//public:
//	B() {};
//	virtual void message() {}
//};
//
//class C : public A {
//public:
//	C() {};
//	virtual void message() {}
//};



enum Atype {Btype, Ctype};

class A : public TSingleton4<A>
{
	friend class TSingleton4<A>;
protected:
	A() {};
public:
	virtual void message() = 0;

	static A* GenerateA(Atype type);
};

class B : public A {
	friend class A;
protected:
	B() {};
public:
	virtual void message() {}
};

class C : public A {
	friend class A;
protected:
	C() {};
public:
	virtual void message() {}
};

A* A::GenerateA(Atype type) {
	switch (type)
	{
	case Btype:
		return new B();
		break;
	case Ctype:
		return new C();
		break;
	default:
		break;
	}
	return nullptr;
}


