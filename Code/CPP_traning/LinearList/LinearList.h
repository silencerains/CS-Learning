#ifndef LINEARLIST_H
#define LINEARLIST_H

template <class T>
class LinearList
{
private:
    /* data */
public:
    virtual LinearList(/* args */){};
    virtual ~LinearList(){};
    virtual bool empty() const = 0;
    virtual int size() const = 0;
    virtual T& get(int theIndex) const = 0;
    virtual int indexOf(const T& theElement) const = 0;
    virtual void erase(int theIndex) = 0;
    virtual void insert(int theIndex, const T &theElement) = 0;
    virtual void output(ostream &out) const = 0;
};

template <class T>
class arrayList : public LinearList<T>
{
private:
    /* data */
public:
    arrayList(int initialCapacity = 10);
    arrayList(const arrayList<T>&)
    ~arrayList() {delete [] element;}

    bool empty() const {return listSize == 0;}
    int size() const {return listSize;}
    T& get(int theIndex) const ;
    int indexOf(const T& theElement) const;
    void erase(int theIndex);
    void insert(int theIndex, const T& theElement);
    void output(ostream &out) const;

    int capacity() const {return arraryLenth;}

protected:
    void checkIndex(theIndex) const;
    T* element;
    int arrayLength;
    int listSize;
};


#endif