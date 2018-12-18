
#define RGB(r,g,b) ARR_3(r/255,g/255,b/255)
#define RGBA(r,g,b,a) ARR_2(RGB(r,g,b),a)

#define RGBA_PRIMARY_COLOR RGBA(46,150,46,1)
#define RGBA_PRIMARY_COLOR_TEXT RGBA(255,255,255,0.87)
#define RGBA_PRIMARY_COLOR_DARK RGBA(0,115,30,1)
#define RGBA_PRIMARY_COLOR_DARK_TEXT RGBA(255,255,255,0.87)
#define RGBA_PRIMARY_COLOR_DISABLED RGBA(255,255,255,0.3)
#define RGBA_PRIMARY_COLOR_DISABLED_TEXT RGBA(255,255,255,0.18)
#define RGBA_VOID_COLOR_EMPTY RGBA(0,0,0,0)