
#ifndef TEST_HELO_H
#define TEST_HELO_H

// All the content of header file goes here
//#include<gtkmm.h>
#include <gtkmm/box.h>
#include <gtkmm/window.h>
#include <gtkmm/radiobutton.h>
#include <gtkmm/separator.h>
#include<iostream>

using namespace std;
using namespace Gtk;




class Test_Helo :public Window
{
public:
	Test_Helo(void);
	~Test_Helo(void);
	
	void On_btnm_Press();
	Gtk::Button _button;
	Button btn2;
	Button btn3;

	HSeparator sep;
	VBox box;
	HBox box2;
	Menu men1;
	
};


#endif TEST_HELO_H  
