#include <iostream> 

template<class T>
void Display(T value, int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        printf("%c ", value); 
    }
    printf("\n");
}

int main()
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7f, 6); 

    return 0;
}
