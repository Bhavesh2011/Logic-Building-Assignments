#include <iostream>

using namespace std;

class Array
{
protected:
    int *Arr;
    int size;

public:
    Array(int value = 10)
    {
        cout << "Inside Constructor\n";
        this->size = value;
        this->Arr = new int[this->size];
    }

    Array(Array &ref)
    {
        cout << "Inside copy constructor\n";
        this->size = ref.size;
        this->Arr = new int[this->size];

        for (int i = 0; i < this->size; i++)
        {
            this->Arr[i] = ref.Arr[i];
        }
    }

    ~Array()
    {
        cout << "Inside Destructor\n";
        delete[] Arr;
    }

    void Accept()
    {
        cout << "Please enter the values\n";
        for (int i = 0; i < this->size; i++)
        {
            cin >> Arr[i];
        }
    }

    void Display()
    {
        cout << "Elements are:\n";
        for (int i = 0; i < this->size; i++)
        {
            cout << Arr[i] << "\t";
        }
        cout << "\n";
    }
};

class ArrSearch : public Array
{
public:
    ArrSearch(int no = 10) : Array(no)
    {
    }

    int Frequency(int value)
    {
        int iCount = 0;
        for (int i = 0; i < size; i++)
        {
            if (Arr[i] == value)
            {
                iCount++;
            }
        }
        return iCount;
    }

    int SearchFirst(int value)
    {
        int i = 0;
        for (i = 0; i < size; i++)
        {
            if (Arr[i] == value)
            {
                break;
            }
        }
        if (i == size)
        {
            return -1;
        }
        else
        {
            return i;
        }
    }

    int SearchLast(int value)
    {
        for (int i = size - 1; i >= 0; i--)
        {
            if (Arr[i] == value)
            {
                return i;
            }
        }
        return -1;
    }

    int EvenCount()
    {
        int count = 0;
        for (int i = 0; i < size; i++)
        {
            if (Arr[i] % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }

    int OddCount()
    {
        int count = 0;
        for (int i = 0; i < size; i++)
        {
            if (Arr[i] % 2 != 0)
            {
                count++;
            }
        }
        return count;
    }

    int SumAll()
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += Arr[i];
        }
        return sum;
    }
};

int main()
{
    cout << "Inside main\n";

    ArrSearch obj1(5);

    obj1.Accept();

    obj1.Display();

    int freq = obj1.Frequency(11);
    cout << "Frequency of 11 is : " << freq << "\n";

    int ret = obj1.SearchFirst(11);
    cout << "First occurence is at index : " << ret << "\n";

    int lastOcc = obj1.SearchLast(11);
    cout << "Last occurrence is at index : " << lastOcc << "\n";

    int evenC = obj1.EvenCount();
    cout << "Number of even elements : " << evenC << "\n";

    int oddC = obj1.OddCount();
    cout << "Number of odd elements : " << oddC << "\n";

    int totalSum = obj1.SumAll();
    cout << "Sum of all elements : " << totalSum << "\n";

    return 0;
}
