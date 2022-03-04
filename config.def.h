/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:size=10";
static const char *fonts[] = { font };
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char normhighlightbgcolor[]  = "#ffc978";
static char normhighlightfgcolor[]  = "#222222";
static char selhighlightbgcolor[]  = "#ffc978";
static char selhighlightfgcolor[]  = "#005577";
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel] = { selfgcolor, selbgcolor },
	[SchemeNormHighlight] = { normhighlightfgcolor, normhighlightbgcolor },
	[SchemeSelHighlight] = { selhighlightfgcolor, selhighlightbgcolor },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 20;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",           STRING, &font                 },
	{ "foreground_nrm", STRING, &normfgcolor          },
	{ "background_nrm", STRING, &normbgcolor          },
	{ "foreground_sel", STRING, &selfgcolor           },
	{ "background_sel", STRING, &selbgcolor           },
  { "background_nrm", STRING, &normhighlightbgcolor },
	{ "background_sel", STRING, &normhighlightfgcolor },
	{ "background_sel", STRING, &selhighlightbgcolor  },
	{ "foreground_sel", STRING, &selhighlightfgcolor  },
};
