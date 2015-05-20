#include"stdafx.h"
#include "Test_Helo.h"


Test_Helo::Test_Helo(void) :_button("Test"),box(false,4)
{
	set_border_width(5);
	set_default_size(300,300);

	_button.signal_clicked().connect(sigc::mem_fun(*this,&Test_Helo::On_btnm_Press));
	add(box);
	
	box.pack_start(_button);
	box.pack_start(btn2);
	box.pack_start(box2);
	box2.set_border_width(10);
	box.show();
	box2.pack_start(btn3);
	show_all_children();

	MenuItem* item;
	item = manage(new MenuItem("Top"));
	men1.append(*item);

		item = manage(new MenuItem("Left"));
	men1.append(*item);

		item = manage(new MenuItem("Right"));
	men1.append(*item);

		item = manage(new MenuItem("Bottom"));
	men1.append(*item);


	
}


Test_Helo::~Test_Helo(void)
{
}

void Test_Helo::On_btnm_Press()
{
	cout << "Pressed button" << endl;
	
	Label * labl = new Label("Testing options");
	OptionMenu optmneu;
	//box2.pack_start(*labl,PACK_SHRINK);
	optmneu.set_menu(men1);

	box2.pack_start(optmneu);
	show_all_children();
}
