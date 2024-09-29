#include "MainFrame.h"
#include <wx\wx.h>

//wxFrame keeps attributions about Frame's parent,
//windowsid,title,position,size and others simultaneously.
MainFrame::MainFrame(const wxString& title):wxFrame(NULL,wxID_ANY,title) { 
}