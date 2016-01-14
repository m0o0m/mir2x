// generated by Fast Light User Interface Designer (fluid) version 1.0303

#ifndef mainwindow_hpp
#define mainwindow_hpp
#include <FL/Fl.H>
#include <asio.hpp>
#include <ctime>
#include <string>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Menu_Bar.H>
#include "sceneserver.hpp"
#include "networkconfigurewindow.hpp"
#include "serverconfigurewindow.hpp"
#include "addmonsterwindow.hpp"
#include <FL/Fl_Browser.H>

class MainWindow {
public:
  MainWindow();
  Fl_Double_Window *m_Window;
private:
  inline void cb_m_Window_i(Fl_Double_Window*, void*);
  static void cb_m_Window(Fl_Double_Window*, void*);
  static Fl_Menu_Item menu_[];
  inline void cb_Launch_i(Fl_Menu_*, void*);
  static void cb_Launch(Fl_Menu_*, void*);
  inline void cb_Server_i(Fl_Menu_*, void*);
  static void cb_Server(Fl_Menu_*, void*);
  inline void cb_Network_i(Fl_Menu_*, void*);
  static void cb_Network(Fl_Menu_*, void*);
  inline void cb_Add_i(Fl_Menu_*, void*);
  static void cb_Add(Fl_Menu_*, void*);
public:
  Fl_Browser *m_Browser;
  void ShowAll();
  void AddLog(int nLogType, const char *szMessage);
};
#endif