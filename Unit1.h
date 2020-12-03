//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
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
        TLabel *label333;
        TButton *Count;
        TStringGrid *StringGrid1;
        TEdit *EditSizeOfArr;
        TButton *fillArray;
        TButton *changeSize;
        TLabel *Label1;
        void __fastcall fillArrayClick(TObject *Sender);
        void __fastcall changeSizeClick(TObject *Sender);
        void __fastcall CountClick(TObject *Sender);
private:
        int firstNeg(int arr[], int arrSize);
        int secondNeg(int arr[], int arrSize);
        int countAnswer(int arr[], int firstNeg, int secondNeg);
        bool  isStringGridFilled(int colCount);	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
