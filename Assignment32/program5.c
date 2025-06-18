#include <stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask1 = 0x0000000F;  
    UINT iMask2 = 0xF0000000;  

    UINT FirstNibble = (iNo & iMask2) >> 28;
    UINT LastNibble = (iNo & iMask1);

    iNo = iNo & (~iMask1);     
    iNo = iNo & (~iMask2);     

    iNo = iNo | (FirstNibble);         
    iNo = iNo | (LastNibble << 28);    

    return iNo;
}

int main()
{
    UINT iValue = 0xF123456F; 
    UINT iRet = ToggleBit(iValue);

    printf("Modified Number: 0x%X\n", iRet);
    return 0;
}
