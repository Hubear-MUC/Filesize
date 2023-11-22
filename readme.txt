File Size 1.0

This program tells the size of a file given as argument when beeing invoked.

Just invoke like:

  ./fsize filename

and it will answer like

  Size : xxx

with xxx beeing the number of byte of the file size.

This program will be needed as part of a future tool to estimate the size
of a project made of several files with also including the #include-
directives and the included files into the calculation.


Changes:
--------

Version 1.0:

Improvement of the user- interaction by replacing the "out : "- statement
from the toolbox with a statement that the result is the size of the file.

So the usability now can be regarded as understandable enough to set the
version number to 1.0


Version 0.3:

Error handling for missing file parameter implemented.


