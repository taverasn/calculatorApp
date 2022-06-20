#include "MainWindow.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"

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
	btn11->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnBtnClick, this);
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
	CalculatorProcessor* calcProcessor = CalculatorProcessor::GetInstance();

	
	wxObject* obj = evt.GetEventObject();
	wxButton* currButton = (wxButton*)obj;

	if (id == 100) {
		textBox->AppendText("%");
	}
	else if (id == 101) {
		calcProcessor->SetBaseNumber(stoi(textBox->GetValue().ToStdString()));
		textBox->Clear();
		textBox->AppendText(calcProcessor->GetBinary());
	}	
	else if (id == 102) {
		calcProcessor->SetBaseNumber(stoi(textBox->GetValue().ToStdString()));
		textBox->Clear();
		textBox->AppendText(calcProcessor->GetHexadecimal());
	}	
	else if (id == 103) {
		calcProcessor->SetBaseNumber(stoi(textBox->GetValue().ToStdString()));
		textBox->Clear();
		textBox->AppendText(calcProcessor->GetDecimal());
	}
	else if (id == 118) {
		textBox->Clear();
	}
	else if (id == 120) {
		std::string val = textBox->GetValue().ToStdString();
		textBox->Clear();
		textBox->AppendText("-" + val);
	}
	else if (id == 121) {
		std::string val = textBox->GetValue().ToStdString();
		std::string firstNum = "";
		std::string secondNum = "";
		std::string tempVal = val;
		std::string op = "";
		for (int i = val.length() - 1; i >= 0; i--) {
			if (val[i] == (std::string)"*")
			{
				op = "*";
				tempVal.pop_back();
				firstNum = tempVal;
				i = 0;
			}
			else if (val[i] == (std::string)"/")
			{
				op = "/";
				tempVal.pop_back();
				firstNum = tempVal;
				i = 0;
			}			
			else if (val[i] == (std::string)"-")
			{
				op = "-";
				tempVal.pop_back();
				firstNum = tempVal;
				i = 0;
			}			
			else if (val[i] == (std::string)"+") 
			{
				op = "+";
				tempVal.pop_back();
				firstNum = tempVal;
				i = 0;
			}
			else if (val[i] == (std::string)"%") 
			{
				op = "%";
				tempVal.pop_back();
				firstNum = tempVal;
				i = 0;
			}
			else 
			{
				secondNum = val[i] + secondNum;
				tempVal.pop_back();
			}
		}
		if (op == "*") {
			textBox->Clear();
			int result = calcProcessor->Multiply(stoi(firstNum), stoi(secondNum));
			wxString string;
			string << result;
			textBox->AppendText(string);
		}
		else if (op == "/")
		{
			textBox->Clear();
			int result = calcProcessor->Divide(stoi(firstNum), stoi(secondNum));
			wxString string;
			string << result;
			textBox->AppendText(string);
		}
		else if (op == "-")
		{
			textBox->Clear();
			int result = calcProcessor->Subtract(stoi(firstNum), stoi(secondNum));
			wxString string;
			string << result;
			textBox->AppendText(string);
		}
		else if (op == "+")
		{
			textBox->Clear();
			int result = calcProcessor->Add(stoi(firstNum), stoi(secondNum));
			wxString string;
			string << result;
			textBox->AppendText(string);
		}
		else if (op == "%")
		{
			textBox->Clear();
			int result = calcProcessor->Mod(stoi(firstNum), stoi(secondNum));
			wxString string;
			string << result;
			textBox->AppendText(string);
		}
		else
		{
			return;
		}
	}
	else {
		std::string butLabel = currButton->GetLabel().ToStdString();
		textBox->AppendText(butLabel);
	}
}
