File Size 0.3

This program tells the size of a file given as argument when beeing invoked.

Just invoke like:

  ./fsize filename

and it will answer like

  out: xxx

with xxx beeing the number of byte of the file size.

This program will be needed as part of a future tool to estimate the size
of a project made of several files with also including the #include-
directives and the included files into the calculation.


Version history:
----------------

Version 0.3

Fixing the issue of a segmentation fault if no file name is given as argument.


Version 0.2

Implemented the processing of arguments at invocation to give the name of the file to measure.


Version 0.1

Initial implementation