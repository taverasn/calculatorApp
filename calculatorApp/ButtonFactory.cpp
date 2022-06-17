#include "wx/wx.h"
#include "ButtonFactory.h"
#include "MainWindow.h"

wxButton* ButtonFactory::GetMod(wxWindow* Main) {
	wxButton* Mod = new wxButton(Main, 100, "mod", wxPoint(10, 70), wxSize(50, 50));
	return Mod;
}

wxButton* ButtonFactory::GetBin(wxWindow* Main) {
	wxButton* Bin = new wxButton(Main, 101, "bin", wxPoint(70, 70), wxSize(50, 50));
	return Bin;
}

wxButton* ButtonFactory::GetHex(wxWindow* Main) {
	wxButton* Hex = new wxButton(Main, 102, "hex", wxPoint(130, 70), wxSize(50, 50));
	return Hex;
}

wxButton* ButtonFactory::GetDec(wxWindow* Main) {
	wxButton* Dec = new wxButton(Main, 103, "dec", wxPoint(190, 70), wxSize(50, 50));
	return Dec;
}

wxButton* ButtonFactory::Get7(wxWindow* Main) {
	wxButton* Seven = new wxButton(Main, 104, "7", wxPoint(10, 130), wxSize(50, 50));
	return Seven;
}

wxButton* ButtonFactory::Get8(wxWindow* Main) {
	wxButton* Eight = new wxButton(Main, 105, "8", wxPoint(70, 130), wxSize(50, 50));
	return Eight;
}

wxButton* ButtonFactory::Get9(wxWindow* Main) {
	wxButton* Nine = new wxButton(Main, 106, "9", wxPoint(130, 130), wxSize(50, 50));
	return Nine;
}

wxButton* ButtonFactory::GetMultiplication(wxWindow* Main) {
	wxButton* Mult = new wxButton(Main, 107, "*", wxPoint(190, 130), wxSize(50, 50));
	return Mult;
}

wxButton* ButtonFactory::Get4(wxWindow* Main) {
	wxButton* Four = new wxButton(Main, 108, "4", wxPoint(10, 190), wxSize(50, 50));
	return Four;
}

wxButton* ButtonFactory::Get5(wxWindow* Main) {
	wxButton* Five = new wxButton(Main, 109, "5", wxPoint(70, 190), wxSize(50, 50));
	return Five;
}

wxButton* ButtonFactory::Get6(wxWindow* Main) {
	wxButton* Six = new wxButton(Main, 110, "6", wxPoint(130, 190), wxSize(50, 50));
	return Six;
}

wxButton* ButtonFactory::GetDivision(wxWindow* Main) {
	wxButton* Div = new wxButton(Main, 111, "/", wxPoint(190, 190), wxSize(50, 50));
	return Div;
}

wxButton* ButtonFactory::Get1(wxWindow* Main) {
	wxButton* One = new wxButton(Main, 112, "1", wxPoint(10, 250), wxSize(50, 50));
	return One;
}

wxButton* ButtonFactory::Get2(wxWindow* Main) {
	wxButton* Two = new wxButton(Main, 113, "2", wxPoint(70, 250), wxSize(50, 50));
	return Two;
}

wxButton* ButtonFactory::Get3(wxWindow* Main) {
	wxButton* Three = new wxButton(Main, 114, "3", wxPoint(130, 250), wxSize(50, 50));
	return Three;
}

wxButton* ButtonFactory::GetSubtraction(wxWindow* Main) {
	wxButton* Sub = new wxButton(Main, 115, "-", wxPoint(190, 250), wxSize(50, 50));
	return Sub;
}

wxButton* ButtonFactory::GetDecimal(wxWindow* Main) {
	wxButton* Dec = new wxButton(Main, 116, ".", wxPoint(10, 310), wxSize(50, 50));
	return Dec;
}

wxButton* ButtonFactory::Get0(wxWindow* Main) {
	wxButton* Zero = new wxButton(Main, 117, "0", wxPoint(70, 310), wxSize(50, 50));
	return Zero;
}

wxButton* ButtonFactory::GetClear(wxWindow* Main) {
	wxButton* C = new wxButton(Main, 118, "c", wxPoint(130, 310), wxSize(50, 50));
	return C;
}

wxButton* ButtonFactory::GetAddition(wxWindow* Main) {
	wxButton* Add = new wxButton(Main, 119, "+", wxPoint(190, 310), wxSize(50, 50));
	return Add;
}

wxButton* ButtonFactory::GetNegative(wxWindow* Main) {
	wxButton* Neg = new wxButton(Main, 120, "negative", wxPoint(10, 370), wxSize(110, 50));
	return Neg;
}

wxButton* ButtonFactory::GetEqual(wxWindow* Main) {
	wxButton* Equal = new wxButton(Main, 121, "=", wxPoint(130, 370), wxSize(110, 50));
	return Equal;
}