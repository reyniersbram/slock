static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[PAM] =    "#9400D3",   /* waiting for PAM */
};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "color.init",   STRING,  &colorname[INIT] },
		{ "color.input",  STRING,  &colorname[INPUT] },
		{ "color.failed", STRING,  &colorname[FAILED] },
		{ "color.pam",    STRING,  &colorname[PAM] },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* PAM service that's used for authentication */
static const char* pam_service = "login";
