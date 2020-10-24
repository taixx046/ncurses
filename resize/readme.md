When resizing the window, your terminal sends a signal (SIGWINCH) to the process.
<br/>
If the signal is not being handled, the process terminates.
<br/>
<br/>
<br/>
example of handling SIGWINCH
<br/>
Filename: resize.c
<br/>
To compile: make resize or gcc -o resize resize.c -lncursesw
<br/>
To remove: make clean or rm resize
