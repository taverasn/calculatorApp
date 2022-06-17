#pragma once
#include "wx/wx.h"
class ButtonFactory
{
public:
	wxButton* GetMod(wxWindow* Main);
	wxButton* GetBin(wxWindow* Main);
	wxButton* GetHex(wxWindow* Main);
	wxButton* GetDec(wxWindow* Main);
	wxButton* Get7(wxWindow* Main);
	wxButton* Get8(wxWindow* Main);
	wxButton* Get9(wxWindow* Main);
	wxButton* GetMultiplication(wxWindow* Main);
	wxButton* Get4(wxWindow* Main);
	wxButton* Get5(wxWindow* Main);
	wxButton* Get6(wxWindow* Main);
	wxButton* GetDivision(wxWindow* Main);
	wxButton* Get1(wxWindow* Main);
	wxButton* Get2(wxWindow* Main);
	wxButton* Get3(wxWindow* Main);
	wxButton* GetSubtraction(wxWindow* Main);
	wxButton* GetDecimal(wxWindow* Main);
	wxButton* Get0(wxWindow* Main);
	wxButton* GetClear(wxWindow* Main);
	wxButton* GetAddition(wxWindow* Main);
	wxButton* GetNegative(wxWindow* Main);
	wxButton* GetEqual(wxWindow* Main);
};

