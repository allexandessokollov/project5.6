//---------------------------------------------------------------------------

#ifndef project_5_6H
#define project_5_6H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *sixzeOfArrLabel;
        TLabel *answer;
        TButton *Count;
        TStringGrid *StringGrid1;
        TEdit *EditSizeOfArr;
        TButton *fillArray;
        TButton *changeSize;
        TEdit *answerEdit;
private:
        
        int firstNegative(int arr[], int arrLength);
        int secondNegative(int arr[], int arrLength);	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
