#include "MainWindow.h"
#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)
wxEND_EVENT_TABLE()


MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Buttons", wxPoint(200, 200), wxSize(300, 500)) {
	
	ButtonFactory btnFactory;
	

	btn1 = btnFactory.GetMod(this);
	btn2 = btnFactory.GetBin(this);
	btn3 = btnFactory.GetHex(this);
	btn4 = btnFactory.GetDec(this);
	btn5 = btnFactory.Get7(this);
	btn6 = btnFactory.Get8(this);
	btn7 = btnFactory.Get9(this);
	btn8 = btnFactory.GetMultiplication(this);
	btn9 = btnFactory.Get4(this);
	btn10 = btnFactory.Get5(this);
	btn11 = btnFactory.Get6(this);
	btn12 = btnFactory.GetDivision(this);
	btn13 = btnFactory.Get1(this);
	btn14 = btnFactory.Get2(this);
	btn15 = btnFactory.Get3(this);
	btn16 = btnFactory.GetSubtraction(this);
	btn17 = btnFactory.GetDecimal(this);
	btn18 = btnFactory.Get0(this);
	btn19 = btnFactory.GetClear(this);
	btn20 = btnFactory.GetAddition(this);
	btn21 = btnFactory.GetNegative(this);
	btn22 = btnFactory.GetEqual(this);

	btn1->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn2->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn3->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn4->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn5->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn6->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn7->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn8->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn9->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn10->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn12->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn13->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn14->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn15->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn16->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn17->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn18->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn19->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn20->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn21->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	btn22->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
	
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
