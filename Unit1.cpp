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

const int MAX_ARR_SIZE = 14;

bool  TForm1::isStringGridFilled(int colCount)
{
    bool ret = true;

    for(int i = 0; i < colCount; i++)
    {
        AnsiString str = StringGrid1->Cells[i][0];
        if(str == "")
        {
            return false;
        }
    }
    return ret;
}

int TForm1::findSequenceSumm(int arr[], int firstNeg, int secondNeg)
{
    int answer = 0;

    for(int i = firstNeg + 1; i < secondNeg; i++)
    {
        answer += arr[i];
    }

    return answer;
}

void __fastcall TForm1::fillArrayClick(TObject *Sender)
{
    AnsiString str = EditSizeOfArr->Text;

    if(str == "")
    {
        StringGrid1->ColCount = 0;
    }
    else if(StrToInt(str) > MAX_ARR_SIZE)
    {
        ShowMessage("maximum quantity is 14");
        EditSizeOfArr->Text = "14";
    }
    else
    {
        StringGrid1->ColCount = StrToInt(str);
    }

    for(int i = 0; i < StringGrid1->ColCount; i++)
    {
        StringGrid1->Cells[i][0] = StrToInt(random(20) - 10);
    }        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::changeSizeClick(TObject *Sender)
{
    AnsiString str = EditSizeOfArr->Text;

    if(str == "")
    {
        StringGrid1->ColCount = 0;
    }
    else if (StrToInt(str) > MAX_ARR_SIZE)
    {
        ShowMessage("maximum quantity is 14");
        EditSizeOfArr->Text = "14";
        StringGrid1->ColCount = StrToInt(MAX_ARR_SIZE);
    }
    else
    {
        StringGrid1->ColCount = StrToInt(str);
    }        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CountClick(TObject *Sender)
{
    int answer, fNeg, sNeg, arrSize;
    bool checkStringGrid;

    
    AnsiString str = EditSizeOfArr->Text;

    if(str == "")
    {
        arrSize = 0;
    }
    else
    {
        arrSize = StrToInt(str);
    }

    int *arr = new int[arrSize];

    checkStringGrid = isStringGridFilled(arrSize);

    if(checkStringGrid)
    {
        for(int i = 0; i < arrSize; i++)
        {
            arr[i] = StrToInt(StringGrid1->Cells[i][0]);
        }
    }
    else
    {
        ShowMessage("you should Fill array");
    }

    fNeg = findNegNumberIndex(arr, 0, arrSize);;
    sNeg = findNegNumberIndex(arr, fNeg + 1, arrSize);

    if((sNeg - fNeg) <= 1)
    {
        
        ShowMessage("there is no elements between");
    }
    else
    {
        AnsiString str =  IntToStr(findSequenceSumm(arr, fNeg, sNeg));
        Label1->Caption = str;
    }

}
//---------------------------------------------------------------------------


int TForm1::findNegNumberIndex(int arr[], int startIndex, int arrSize)
{
    int ifWasntFind = -1;

    for(int i = startIndex; i < arrSize; i++)
    {
        if(arr[i] < 0)
            return i;
    }

    return  ifWasntFind;
}
