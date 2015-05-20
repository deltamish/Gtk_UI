// gtk_tst.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Test_Helo.h"
#include"examplewindow.h"
#include<thread>
#include<chrono>
#include<ctime>
#include<future>

using namespace std;
using namespace Glib;

float CaluclatingSin(float a,float b)
{
	std::this_thread::sleep_for(chrono::seconds(5));
	return (sin(a) * cos(b));
}

int main(int argc, char* argv[])
{
	auto F= std::async (launch::async, CaluclatingSin,3.555,90.121);

	Gtk::Main kit(argc,argv);
	
	ExampleWindow test;
	
	Gtk::Main::run(test);
	cout << F.get();
	cout << "s";
	
	return 0;
}

