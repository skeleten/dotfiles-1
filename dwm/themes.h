// Gavin Weiss
// June 2018

// themes.h

#ifndef __THEMES_H
#define __THEMES_H __THEMES_H

typedef struct s_Theme {
  char* normbordercolor;
  char* normbgcolor;
  char* normfgcolor;
  char* selbordercolor;
  char* selbgcolor;
  char* selfgcolor;
} Theme;

static const Theme Mint =
  {
   .normbordercolor = "#949093",
   .normbgcolor     = "#151b1e",
   .normfgcolor     = "#d4ced2",
   .selbordercolor  = "#d4ced2",
   .selbgcolor      = "#619668",
   .selfgcolor      = "#d4ced2",			   
  };

static const Theme Arizona =
  {
   .normbordercolor = "#949093",
   .normbgcolor     = "#151b1e",
   .normfgcolor     = "#d4ced2",
   .selbordercolor  = "#d4ced2",
   .selbgcolor      = "#689990",
   .selfgcolor      = "#d4ced2",
  };

#endif
