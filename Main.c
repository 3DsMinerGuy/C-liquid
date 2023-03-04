//imports libraies
#include <stdio.h> 
#include <ncurses.h>
#include <stdlib.h>  //relates to string.h
#include <string.h>  // adds support for string type variables


// Marks anything between the the next curly brackest as the main function
int main() {
  //declaring vars
  FILE* logo; // Makes logo a pointer
  int run;    // sets "run" as a variable, this will be used later in the program to tell the program to move on
  logo = fopen("assets/log.ass", "r");  // Opens the logo file and puts it into ram as "log"
  char line; //Makes variable that will store each line of file read from
  //setting up ncurses
  initscr();  //Creates stdscr *Used by ncurses for keyboard input*
  raw();  //defines ncurses mode, raw should be used for now

  //Displays opening screen and prompts the user to press enter to start the program
  //While using ncurses like we are now use "printw" instead of "printf" to display text
  do { //prints logo to screen 
  line = fgetc(logo); // Saves first line of log in pre-allocated memory
  printw("%c", line); // Prints the var to the screen
} while(line != EOF);

  getch();  //Waits for user to press any key but soon I will make it "Enter" key specific"

  endwin(); //kills ncurses. If this command is not called the program will not close right, I will put it above return for now 
  return 0;



} 
