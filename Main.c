//imports libraies
#include <stdio.h> 
#include <ncurses.h>

// Marks anything between the the next curly brackest as the main function
int main() {
  //declaring vars
  int run;    //sets "run" as a variable, this will be used later in the program to tell the program to move on

  //setting up ncurses
  initscr();  //Creates stdscr *Used by ncurses for keyboard input*
  raw();  //defines ncurses mode, raw should be used for now

  //Displays opening screen and prompts the user to press enter to start the program
  //While using ncurses like we are now use "printw" instead of "printf" to display text
  printw("never gonna give you up\n");  // when you run this code this line prints x I did this to practice the printf in the future this will print the logo
  getch();  //Waits for user to press any key but soon I will make it "Enter" key specific"

  endwin(); //kills ncurses. If this command is not called the program will not close right, I will put it above return for now 
  return 0;



} 
