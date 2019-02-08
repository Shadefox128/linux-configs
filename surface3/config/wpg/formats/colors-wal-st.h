const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#000000", /* black   */
  [1] = "#BF5238", /* red     */
  [2] = "#DB632E", /* green   */
  [3] = "#333333", /* yellow  */
  [4] = "#79838A", /* blue    */
  [5] = "#79838A", /* magenta */
  [6] = "#F59533", /* cyan    */
  [7] = "#A84F2E", /* white   */

  /* 8 bright colors */
  [8]  = "#BF5238",  /* black   */
  [9]  = "#F0BE5D",  /* red     */
  [10] = "#F59533", /* green   */
  [11] = "#333333", /* yellow  */
  [12] = "#ff9900", /* blue    */
  [13] = "#A84F2E", /* magenta */
  [14] = "#DB632E", /* cyan    */
  [15] = "#ffffff", /* white   */

  /* special colors */
  [256] = "#000000", /* background */
  [257] = "#ffffff", /* foreground */
  [258] = "#ffffff",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
