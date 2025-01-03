/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;	/* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */

static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Terminess Nerd Font:style=Bold:size=15"
	// "UbuntuMono Nerd Font:size=15"
};
static const char *prompt      = NULL;	/* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#ebdbb2", "#1d2021" },
	[SchemeSel] = { "#ebdbb2", "#900000" },
	[SchemeSelHighlight] = { "#fabd2f", "#900000" },
	[SchemeNormHighlight] = { "#fabd2f", "#1d2021" },
	[SchemeOut] = { "#000000", "#900000" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 5;
static unsigned int lineheight = 0;	/* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
