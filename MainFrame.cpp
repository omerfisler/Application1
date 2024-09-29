#include "MainFrame.h"
#include <wx\wx.h>
#include <wx\spinctrl.h>

//wxFrame keeps attributions about Frame's parent,
//windowsid,title,position,size and others simultaneously.
MainFrame::MainFrame(const wxString& title):wxFrame(NULL,wxID_ANY,title) { 

	//wxWidgets automatically filled the element if its parent is this even though we specified size of the element.
	//  So we use Panel as complete area as parent.
	wxPanel* panel = new wxPanel(this);

	wxButton* button = new wxButton(panel, wxID_ANY, "Button Example", wxPoint(0, 0), wxSize(100, 30));

	wxCheckBox* checkbox = new wxCheckBox(panel, wxID_ANY, "Checkbox", wxPoint(300, 0), wxSize(100, 30));

	wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "Static Text - NOT EDITABLE", wxPoint(0, 60),wxSize(300,-1));

	wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, "Text ctrl(controllable) - EDITABLE", wxPoint(300, 60),wxSize(300,-1));

	wxSlider* slider = new wxSlider(panel,wxID_ANY,66,0,100,wxPoint(0,120),wxSize(300,-1));

	wxGauge* gauge = new wxGauge(panel, wxID_ANY,100, wxPoint(300, 120), wxSize(300, -1));
	gauge->SetValue(slider->GetValue());

	wxArrayString choices;
	choices.Add("Item 1");
	choices.Add("Item 2");
	choices.Add("Item 3");

	wxChoice* choice = new wxChoice(panel,wxID_ANY,wxPoint(0,240),wxSize(300,-1),choices);
	//default choice selected:
	choice->Select(0);

	wxSpinCtrl spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(300, 240), wxSize(300, -1));

	wxListBox* listBox = new wxListBox(panel, wxID_ANY, wxPoint(0,360),wxSize(300,-1),choices);

	wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY,"RADIO BOX", wxPoint(300,360),wxDefaultSize,choices);


}