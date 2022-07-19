template <typename T>
class Vector
{
    //Data Members
    T *arr;
    int cs = 0;
    int ms = 1;

public:
   T Vector(int max)    
    {
        ms = max;
        arr = new T[ms];
    }
    void push_back(T data)
    {
        //Two case will be present in push_back method
        if (cs == ms)
        {
            //Create a new array of double capacity, delete the old array
            T *OldArr = arr;
            ms = ms * 2;
            arr = new T[ms];
            //Copy of elements into the new array
            for (int i = 0; i < cs; i++)
            {
                arr[i] = OldArr[i];
            }
            delete [] OldArr;
        }
        arr[cs] = data;
        cs++;
    }
    void pop_back()
    {
        if (cs >= 0)
        {
            cs--;
        }
    }
    bool isEmpty()
    {
        return cs == 0;
    }
    T front()
    {
        return arr[0];
    }
    T back()
    {
        return arr[cs - 1];
    }
    T at(int i)
    {
        return arr[i];
    }
    int size()
    {
        return cs;
    }
    int capacity()
    {
        return ms;
    }
};