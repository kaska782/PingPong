//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Menus.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *table;
        TMainMenu *MainMenu1;
        TMenuItem *Opcje1;
        TMenuItem *Opis1;
        TMenuItem *Zapiszgre1;
        TMenuItem *N1;
        TMenuItem *Pomoc1;
        TMenuItem *Informacje1;
        TMenuItem *Oprogramie1;
        TMenuItem *Autor1;
        TLabel *namePlayer1;
        TLabel *score;
        TLabel *namePlayer2;
        TShape *p1;
        TShape *p2;
        TTimer *up1;
        TTimer *down1;
        TTimer *up2;
        TTimer *down2;
        TTimer *ballT;
        TButton *nextRound;
        TLabel *Label1;
        TShape *ball;
        TButton *newGame;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        void __fastcall up1Timer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall down1Timer(TObject *Sender);
        void __fastcall up2Timer(TObject *Sender);
        void __fastcall down2Timer(TObject *Sender);
        void __fastcall ballTTimer(TObject *Sender);
        void __fastcall nextRoundClick(TObject *Sender);
        void __fastcall newGameClick(TObject *Sender);
        void __fastcall Oprogramie1Click(TObject *Sender);
        void __fastcall Autor1Click(TObject *Sender);
        void __fastcall N1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Opis1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
