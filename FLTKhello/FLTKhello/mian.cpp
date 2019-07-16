#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
int  main(int argc, char *argv[])
{
	Fl_Window  *window;
	Fl_Box  *box;
	window = new  Fl_Window(450, 330, "First App!");
	box = new Fl_Box(20, 40, 360, 200, "Hello World,世界你好");
	box->box(FL_FLAT_BOX);
	box->labelsize(36);                   //设置字体大小
	box->labelfont(FL_BOLD + FL_ITALIC);  //设置字体
	box->labeltype(FL_SHADOW_LABEL);      //设置label的类型
	window->end();
	window->show(argc, argv);
	return  Fl::run();
}