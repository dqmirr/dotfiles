
/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
  "#000000",
  "#685742",
  "#5f875f",
  "#b36d43",
  "#78824b",
  "#bb7744",
  "#c9a554",
  "#d7c483",

  /* 8 bright colors */
  "#666666",
  "#685742",
  "#5f875f",
  "#b36d43",
  "#78824b",
  "#bb7744",
  "#c9a554",
  "#d7c483",
	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#c2c2b0", /* foreground */
	"#222222", /* background */
	"#c7c7c7", /* cursor */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 257;
