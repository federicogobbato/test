#pragma once

#include <assert.h>

template <class T>
class TSingleton1
{
protected:
	TSingleton1() {};
	TSingleton1(const TSingleton1&) = delete;
	TSingleton1& operator=(const TSingleton1&) = delete;

	static T* m_Instance;

public:
	static T* getInstance() 
	{
		if (m_Instance == nullptr) {
			m_Instance = new T();
		}
		return m_Instance;
	}
};

template<class T> T* TSingleton1<T>::m_Instance = nullptr;



template <class T>
class TSingleton2
{
protected:
	TSingleton2() noexcept = default;
	TSingleton2(const TSingleton2&) = delete;
	TSingleton2& operator=(const TSingleton2&) = delete;

public:
	static T& getInstance() noexcept(std::is_nothrow_constructible<T>::value)
	{
		// Guaranteed to be destroyed.
		// Instantiated on first use.
		// Thread safe in C++11
		static T instance;
		return instance;
	}
};



template <class T>
class TSingleton3
{
protected:
	TSingleton3(const TSingleton3&) = delete;
	TSingleton3& operator=(const TSingleton3&) = delete;

	static T* m_Instance;

public:
	TSingleton3()
	{
		assert(m_Instance == nullptr);
		m_Instance = static_cast<T*>(this);
	}

	static T* getInstance() {
		assert(m_Instance == nullptr);
		return m_Instance;
	}
};
template<class T> T* TSingleton3<T>::m_Instance = nullptr;



template <class T>
class TSingleton4
{
protected:
	TSingleton4(const TSingleton4&) = delete;
	TSingleton4& operator=(const TSingleton4&) = delete;

	static T* m_Instance;

	TSingleton4()
	{
		assert(m_Instance == nullptr);
		m_Instance = static_cast<T*>(this);
	}

public:

	static T* getInstance() {
		assert(m_Instance == nullptr);
		return m_Instance;
	}
};
template<class T> T* TSingleton4<T>::m_Instance = nullptr;