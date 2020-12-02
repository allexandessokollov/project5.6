//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


int TForm1::firstNeg(int arr[], in arrSize)
{
    for(int i = 0; i < arrSizel; i++)
    {
        if(arr[i] < 0)
        {
            return i;
        }
    }

    return -1;
}

int TForm1::secondNeg(int arr[], int arrSize)
{

    bool isFirst = false;

    for(int i = 0; i < arrSizel; i++)
    {
        if(arr[i] < 0 && isFirst == false)
        {
            isFirst = true;
        }
        if else(arr[i] < 0 && isFirst)
        {
            retirn i;
        }
    }

    return -1;    //TODO: Add your source code here
}
