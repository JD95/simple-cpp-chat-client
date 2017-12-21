#include <string>
#include <curses.h>

int main(){
  initscr();
  printw("Main Window");
  WINDOW* subwindow = newwin(10,20,5,15);
  refresh();
  box(subwindow, 0,0);
  mvwprintw(subwindow,1,1,"subwindow");
  refresh();
  wrefresh(subwindow);
  while(true){
    echo();
    char* input = new char[255];
    wgetnstr(subwindow, input, 255);
    if (input == NULL){
      printw("NULL!");
    }
    else {
      printw(input);
      printw("\n");
    }
    refresh();
  }
  delwin(subwindow);
  endwin();
  return 0;
}
