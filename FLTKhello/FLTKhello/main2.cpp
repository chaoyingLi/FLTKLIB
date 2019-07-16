#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <cstdlib>                   //for exit(0)
#include <string.h>
using namespace std;

void copy_cb(Fl_Widget*, void*);  //function prototypes
void close_cb(Fl_Widget*, void*);
void make_window();


int main() {

	make_window();
	return Fl::run();
}


void make_window() {

	Fl_Window* win = new Fl_Window(300, 200, "Testing 2");
	win->begin();
	Fl_Button*  copy = new Fl_Button(10, 150, 70, 30, "C&opy"); //child 0   : 1st widget
	Fl_Button* close = new Fl_Button(100, 150, 70, 30, "&Quit"); //child 1    : 2nd widget
	Fl_Input*       inp = new Fl_Input(50, 50, 140, 30, "In");              //child 2 : 3rd widget
	Fl_Output*    out = new Fl_Output(50, 100, 140, 30, "Out");     //child 3   : 4th widget
	win->end();
	copy->callback(copy_cb);
	close->callback(close_cb);
	win->show();
}


void copy_cb(Fl_Widget* o, void*) {

	Fl_Button* b = (Fl_Button*)o;
	Fl_Input* iw = (Fl_Input*)b->parent()->child(2);
	Fl_Output* ow = (Fl_Output*)b->parent()->child(3);
	ow->value(iw->value());
}


void close_cb(Fl_Widget* o, void*) {

	exit(0);
}
