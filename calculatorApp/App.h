#pragma once
#include "wx/wx.h"
#include "MainWindow.h"

class App : public wxApp
{
private:
	MainWindow* window = nullptr;
public:

	virtual bool OnInit();
};

