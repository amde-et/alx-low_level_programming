# File Descriptors, System Calls and I/O's #

When a command begins running, it usually expects that the following files are already open: standard input, standard output, and standard error (sometimes called error output or diagnostic output).

A number, called a file descriptor, is associated with each of these files, as follows:

| Item              | Descriptors     |
| ----------------- | --------------- |
| File Descriptor 0 | Standard Input  |
| File Descriptor 1 | Standard Output |
| File Descriptor 2 | Standard Error  |

A child process normally inherits these files from its parent. All three files are initially assigned to the workstation (0 to the keyboard, 1 and 2 to the display). The shell permits them to be redirected elsewhere before control is passed to a command.

- When you enter a command, if no file name is given, your keyboard is the standard input, sometimes denoted as stdin. When a command finishes, the results are displayed on your screen.

- You as stdout. By default, commands take input from tr screen is the standard output, sometimes denotedhe standard input and send the results to standard output.

- Error messages are directed to standard error, sometimes denoted as stderr. By default, this is your screen.

These default actions of input and output can be varied. You can use a file as input and write results of a command to a file. This is called input/output redirection.