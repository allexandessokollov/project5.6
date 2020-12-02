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

int TForm1::firstNeg(int arr[], int arrSize)
{
    for(int i = 0; i < arrSize; i++)
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

    for(int i = 0; i < arrSize; i++)
    {
        if(arr[i] < 0 && isFirst == false)
        {
            isFirst = true;
        }
        else if(arr[i] < 0 && isFirst)
        {
            return i;
        }
    }

    return -1;    //TODO: Add your source code here
}

int TForm1::countAnswer(int arr[], int firstNeg, int secondNeg)
{
    int answer = 0;


    for(int i = firstNeg + 1; i < secondNeg; i++)
    {
        answer = answer + arr[i];
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
    else if(StrToInt(str) > 14)
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
    else if (StrToInt(str) > 14)
    {
        ShowMessage("maximum quantity is 14");
        EditSizeOfArr->Text = "14";
        StringGrid1->ColCount = StrToInt(14);
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

    randomize();	
    
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

    fNeg = firstNeg(arr, arrSize);
    sNeg = secondNeg(arr, arrSize);

    if((sNeg - fNeg) <= 1)
    {
        
        ShowMessage("there is no elements between");
    }
    else
    {
        AnsiString str =  IntToStr(countAnswer(arr, fNeg, sNeg));
        Label1->Caption = str;
    }

}
//---------------------------------------------------------------------------

