// a very simple 256 char bitmapped font
// that was blatantly liberated from the 
// www.svgalib.org site. Graciously provided
// by John Remyn, originally distributed
// with sasteroids.
#define FONT_WIDTH      8
#define FONT_HEIGHT     8
#define FONT_VMIRROR    0
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,56,56,56,56,56,0,56,56,
	108,108,0,0,0,0,0,0,0,108,254,254,108,254,254,108,
	48,126,224,124,14,254,252,48,98,230,204,24,48,102,206,140,
	120,220,252,120,250,222,252,118,28,28,56,0,0,0,0,0,
	14,28,28,28,28,28,28,14,112,56,56,56,56,56,56,112,
	0,0,0,230,124,56,124,206,0,0,28,28,127,127,28,28,
	0,0,0,0,0,28,28,56,0,0,0,0,124,124,0,0,
	0,0,0,0,0,0,56,56,28,28,56,56,112,112,224,224,
	124,254,238,238,238,254,254,124,56,120,248,56,56,254,254,254,
	252,254,14,60,112,254,254,254,252,254,14,60,14,254,254,252,
	238,238,238,254,254,14,14,14,254,254,224,252,14,254,254,252,
	124,252,224,252,238,254,254,124,252,254,14,14,28,28,56,56,
	124,254,238,124,238,254,254,124,124,254,238,126,14,254,254,252,
	0,0,28,28,0,28,28,28,0,0,28,28,0,28,28,56,
	6,14,28,56,56,28,14,6,0,0,124,124,0,124,124,124,
	112,56,28,14,14,28,56,112,124,254,206,28,56,0,56,56,
	124,198,190,182,190,182,200,126,124,254,238,254,238,238,238,238,
	252,254,206,252,206,254,254,252,124,254,238,224,238,254,254,124,
	252,254,238,238,238,254,254,252,254,254,224,248,224,254,254,254,
	126,254,224,248,224,224,224,224,126,254,224,238,238,254,254,124,
	238,238,238,254,238,238,238,238,254,254,56,56,56,254,254,254,
	254,254,14,14,238,254,254,124,238,238,252,248,252,238,238,238,
	224,224,224,224,224,254,254,126,130,198,238,254,254,238,238,238,
	206,238,254,254,254,254,238,230,124,254,238,238,238,254,254,124,
	252,254,238,238,252,224,224,224,124,254,238,238,254,254,252,118,
	252,254,238,238,252,238,238,238,126,254,224,124,14,254,254,252,
	254,254,56,56,56,56,56,56,238,238,238,238,238,254,254,124,
	238,238,238,238,238,238,124,56,238,238,238,254,254,238,198,130,
	238,238,124,56,124,238,238,238,238,238,124,124,56,56,112,112,
	254,254,28,56,112,254,254,254,124,124,112,112,112,124,124,124,
	112,112,56,56,28,28,14,14,124,124,28,28,28,124,124,124,
	56,124,238,198,0,0,0,0,0,0,0,0,0,254,254,254,
	56,56,28,0,0,0,0,0,0,124,254,238,254,238,238,238,
	0,252,254,206,252,206,254,252,0,124,254,238,224,238,254,124,
	0,252,254,238,238,238,254,252,0,254,254,224,248,224,254,254,
	0,126,254,224,248,224,224,224,0,126,254,224,238,238,254,124,
	0,238,238,238,254,238,238,238,0,254,254,56,56,56,254,254,
	0,254,254,14,14,238,254,124,0,238,238,252,248,252,238,238,
	0,224,224,224,224,224,254,126,0,130,198,238,254,254,238,238,
	0,206,238,254,254,254,238,230,0,124,254,238,238,238,254,124,
	0,252,254,238,238,252,224,224,0,124,254,238,238,254,252,118,
	0,252,254,238,238,252,238,238,0,126,254,224,124,14,254,252,
	0,254,254,56,56,56,56,56,0,238,238,238,238,238,254,124,
	0,238,238,238,238,238,124,56,0,238,238,238,254,238,198,130,
	0,238,238,124,56,124,238,238,0,238,238,124,124,56,56,112,
	0,254,254,28,56,112,254,254,60,124,112,112,112,124,124,60,
	56,56,56,0,56,56,56,56,120,124,28,28,28,124,124,120,
	236,254,118,0,0,0,0,0,0,16,56,124,254,254,254,254,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,