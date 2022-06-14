#pragma once
#include "wx\wx.h"

class MainWindow : public wxFrame
{
private:
	wxButton* but1;
	wxButton* but2;
	wxButton* but3;
	wxButton* but4;
	wxButton* but5;
	wxButton* but6;
	wxButton* but7;
	wxButton* but8;
	wxButton* but9;
	wxButton* but10;
	wxButton* but11;
	wxButton* but12;
	wxButton* but13;
	wxButton* but14;
	wxButton* but15;
	wxButton* but16;
	wxButton* but17;
	wxButton* but18;
	wxButton* but19;
	wxButton* but20;
	wxButton* but21;
	wxButton* but22;
	wxTextCtrl* textBox;
public:
	MainWindow();
	wxDECLARE_EVENT_TABLE();
	void OnBtnClick(wxCommandEvent& evt);
};

