File Size 0.2

This program tells the size of a file given as argument when beeing invoked.

WARNING: When no argument is given, the program will be (hopefully) stopped by
         the operating system with a segmentation fault!!

	 It does not yet contain an error handling for a missing argument!!

That is the reason for the "0" as the major version number.

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

Version 0.2

Implemented the processing of arguments at invocation to give the name of the file to measure.


Version 0.1

Initial implementation