#pragma once

#include <assert.h>

template <class T>
class TSingleton
{
protected:
	//2.
	//TSingleton() noexcept = default;
	//3.
	TSingleton() {};
	TSingleton(const TSingleton&) = delete;
	TSingleton& operator=(const TSingleton&) = delete;

	//1-3
	static T* m_Instance;

public:
	//1.
	//TSingleton()
	//{
	//	assert(m_Instance == nullptr);
	//	m_Instance = static_cast<T*>(this);
	//}

	//static T* getInstance() {
	//	assert(m_Instance == nullptr);
	//	return m_Instance;
	//}

	//2.
	//static T& getInstance() noexcept(std::is_nothrow_constructible<T>::value)
	//{
	//	// Guaranteed to be destroyed.
	//	// Instantiated on first use.
	//	// Thread safe in C++11
	//	static T instance;
	//	return instance;
	//}

	//3.
	static T* getInstance() 
	{
		if (m_Instance == nullptr) {
			m_Instance = new T();
		}
		return m_Instance;
	}
};

template<class T> T* TSingleton<T>::m_Instance = nullptr;

