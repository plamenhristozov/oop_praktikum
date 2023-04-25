#ifndef SET_H

#define SET_H




template <typename T>

class Set
{

private:
    T first_;
    T* arr;
    void copy();

public:

    Set();
    Set(const Set<T> other);
    Set<T> operator=(const Set<T>& other);
    ~Set();
    Set<T> operator+(const Set<T>& b);
    void resize();
    void add(const T& toBeAdded);
    bool isEmpty();
    T* print();
    bool contains(const T& object);
    bool operator<(const Set<T> &b);
    T* Array();

};


template<typename T>
Set<T>::Set()
{
    const int init_cap = 8;
    arr = new T[init_cap];
    capacity = init_cap;
    size = 0;
}

template<typename T>
Set<T>::Set(const Set<T> other)
{

}

template<typename T>
Set<T> Set<T>::operator=(const Set<T>& other)
{
    return Set<T>();
}

template<typename T>
Set<T> Set<T>::operator+(const Set<T>& b)
{
    Set<T> c(b);

    for (int i = 0; i < size; i++)
    {
        c.add(arr[i]);
    }
    return c;
}

template <typename T>
void Set<T>::add(const T& toBeAdded)
{
    // prosto addvam v array
}
template<typename T>
void Set<T>::add(const T& toBeAdded)
{
    if (!contains(toBeAdded)
    {
        if (capacity == size)
        {
            resize();

        }
        arr[size] = toBeAdded;
        size++;
    }
}
template<typename T>
bool Set<T>::isEmpty()
{
    return size == 0;
}


template <typename T>
T* Set<T>::print()
{
    while (true)
    {

    }
}

template<typename T>
inline bool Set<T>::contains(const T& object)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            return false;
        }
    }
}

template<typename T>
inline bool Set<T>::operator<(const Set<T>& b)
{
    for (int i = 0; i < size; i++)
    {
        if (!b.contains(arr[i])
        {
            return c;
        }
    }
}

#endif // !SET_H

