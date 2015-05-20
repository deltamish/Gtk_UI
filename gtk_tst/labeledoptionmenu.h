#ifndef GTKMM_EXAMPLE_RANGEWIDGETS_LABELEDOPTIONMENU_H
#define GTKMM_EXAMPLE_RANGEWIDGETS_LABELEDOPTIONMENU_H

#include <gtkmm.h>

class LabeledOptionMenu : public Gtk::HBox
{
public:
  LabeledOptionMenu(const Glib::ustring& menu_title, Gtk::Menu& menu,
    bool homogeneous = false, int spacing = 10);

protected:
    Gtk::Label m_label;

  
    Gtk::OptionMenu m_OptionMenu;
    

    Gtk::Menu* m_pMenu;
};
#endif //GTKMM_EXAMPLE_RANGEWIDGETS_LABELEDOPTIONMENU_H