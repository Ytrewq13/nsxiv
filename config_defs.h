#ifndef SXIV_CONFIG_DEF_H
#define SXIV_CONFIG_DEF_H

#include "sxiv.h"
/* default window dimensions (overwritten via -g option): */
extern int WIN_WIDTH;
extern int WIN_HEIGHT;

/* default title prefix */
extern const char *TITLE_PREFIX;

/* default title suffixmode, available options are:
 * SUFFIX_EMPTY
 * SUFFIX_BASENAME
 * SUFFIX_FULLPATH
 */
extern const suffixmode_t TITLE_SUFFIXMODE;

/* levels (in percent) to use when zooming via '-' and '+':
 * (first/last value is used as min/max zoom level)
 */
extern const float zoom_levels[];
extern int NUM_ZOOM_LEVELS;

/* default slideshow delay (in sec, overwritten via -S option): */
extern int SLIDESHOW_DELAY;

/* gamma correction: the user-visible ranges [-GAMMA_RANGE, 0] and
 * (0, GAMMA_RANGE] are mapped to the ranges [0, 1], and (1, GAMMA_MAX].
 * */
extern const double GAMMA_MAX;
extern const int    GAMMA_RANGE;

/* command i_scroll pans image 1/PAN_FRACTION of screen width/height */
extern const int PAN_FRACTION;

/* if false, pixelate images at zoom level != 100%,
 * toggled with 'a' key binding
 */
extern const bool ANTI_ALIAS;

/* if true, use a checkerboard background for alpha layer,
 * toggled with 'A' key binding
 */
extern const bool ALPHA_LAYER;

/* thumbnail sizes in pixels (width == height): */
extern const int thumb_sizes[];
extern const int NUM_THUMBS;

/* thumbnail size at startup, index into thumb_sizes[]: */
extern const int THUMB_SIZE;


/* keyboard mappings for image and thumbnail mode: */
extern const keymap_t keys[];

/* mouse button mappings for image mode: */
extern const button_t buttons[];
#endif
