#include "MainWindow.h"

wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)
EVT_BUTTON(100, MainWindow::OnBtnClick)
EVT_BUTTON(101, MainWindow::OnBtnClick)
EVT_BUTTON(102, MainWindow::OnBtnClick)
EVT_BUTTON(103, MainWindow::OnBtnClick)
EVT_BUTTON(104, MainWindow::OnBtnClick)
EVT_BUTTON(105, MainWindow::OnBtnClick)
EVT_BUTTON(106, MainWindow::OnBtnClick)
EVT_BUTTON(107, MainWindow::OnBtnClick)
EVT_BUTTON(108, MainWindow::OnBtnClick)
EVT_BUTTON(109, MainWindow::OnBtnClick)
EVT_BUTTON(110, MainWindow::OnBtnClick)
EVT_BUTTON(111, MainWindow::OnBtnClick)
EVT_BUTTON(112, MainWindow::OnBtnClick)
EVT_BUTTON(113, MainWindow::OnBtnClick)
EVT_BUTTON(114, MainWindow::OnBtnClick)
EVT_BUTTON(115, MainWindow::OnBtnClick)
EVT_BUTTON(116, MainWindow::OnBtnClick)
EVT_BUTTON(117, MainWindow::OnBtnClick)
EVT_BUTTON(118, MainWindow::OnBtnClick)
EVT_BUTTON(119, MainWindow::OnBtnClick)
EVT_BUTTON(120, MainWindow::OnBtnClick)
EVT_BUTTON(121, MainWindow::OnBtnClick)

wxEND_EVENT_TABLE()

MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Buttons", wxPoint(200, 200), wxSize(300, 500)) {
	but1 = new wxButton(this, 100, "mod", wxPoint(10, 70), wxSize(50, 50));
	but2 = new wxButton(this, 101, "bin", wxPoint(70, 70), wxSize(50, 50));
	but3 = new wxButton(this, 102, "hex", wxPoint(130, 70), wxSize(50, 50));
	but4 = new wxButton(this, 103, "dec", wxPoint(190, 70), wxSize(50, 50));
	but5 = new wxButton(this, 104, "7", wxPoint(10, 130), wxSize(50, 50));
	but6 = new wxButton(this, 105, "8", wxPoint(70, 130), wxSize(50, 50));
	but7 = new wxButton(this, 106, "9", wxPoint(130, 130), wxSize(50, 50));
	but8 = new wxButton(this, 107, "*", wxPoint(190, 130), wxSize(50, 50));
	but9 = new wxButton(this, 108, "4", wxPoint(10, 190), wxSize(50, 50));
	but10 = new wxButton(this, 109, "5", wxPoint(70, 190), wxSize(50, 50));
	but11 = new wxButton(this, 110, "6", wxPoint(130, 190), wxSize(50, 50));
	but12 = new wxButton(this, 111, "/", wxPoint(190, 190), wxSize(50, 50));
	but13 = new wxButton(this, 112, "1", wxPoint(10, 250), wxSize(50, 50));
	but14 = new wxButton(this, 113, "2", wxPoint(70, 250), wxSize(50, 50));
	but15 = new wxButton(this, 114, "3", wxPoint(130, 250), wxSize(50, 50));
	but16 = new wxButton(this, 115, "-", wxPoint(190, 250), wxSize(50, 50));
	but17 = new wxButton(this, 116, ".", wxPoint(10, 310), wxSize(50, 50));
	but18 = new wxButton(this, 117, "0", wxPoint(70, 310), wxSize(50, 50));
	but19 = new wxButton(this, 118, "c", wxPoint(130, 310), wxSize(50, 50));
	but20 = new wxButton(this, 119, "+", wxPoint(190, 310), wxSize(50, 50));
	but21 = new wxButton(this, 120, "negative", wxPoint(10, 370), wxSize(110, 50));
	but22 = new wxButton(this, 121, "=", wxPoint(130, 370), wxSize(110, 50));
	
	textBox = new wxTextCtrl(this, 104, "", wxPoint(10, 10), wxSize(230, 30));
}

void MainWindow::OnBtnClick(wxCommandEvent& evt) {
	int id = evt.GetId();
	//wxObject* obj = evt.GetEventObject();
	switch (id) {
	case 100: {
		textBox->AppendText("mod");
		break;
	}
	case 101: {
		textBox->AppendText("bin");
		break;
	}
	case 102: {
		textBox->AppendText("hex");
		break;
	}
	case 103: {
		textBox->AppendText("dec");
		break;

	}
	case 104: {
		textBox->AppendText("7");
		break;

	}
	case 105: {
		textBox->AppendText("8");
		break;

	}
	case 106: {
		textBox->AppendText("9");
		break;

	}
	case 107: {
		textBox->AppendText("*");
		break;

	}
	case 108: {
		textBox->AppendText("4");
		break;

	}
	case 109: {
		textBox->AppendText("5");
		break;

	}
	case 110: {
		textBox->AppendText("6");
		break;

	}
	case 111: {
		textBox->AppendText("/");
		break;

	}
	case 112: {
		textBox->AppendText("1");
		break;

	}
	case 113: {
		textBox->AppendText("2");
		break;

	}
	case 114: {
		textBox->AppendText("3");
		break;

	}
	case 115: {
		textBox->AppendText("-");
		break;

	}
	case 116: {
		textBox->AppendText(".");
		break;

	}
	case 117: {
		textBox->AppendText("0");
		break;

	}
	case 118: {
		textBox->Clear();
		break;

	}
	case 119: {
		textBox->AppendText("+");
		break;

	}
	case 120: {
		textBox->AppendText("-");
		break;

	}
	case 121: {
		textBox->AppendText("=");
		break;

	}

	}
}
