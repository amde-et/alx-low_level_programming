#include "main.h"

/**
* main - Will copy the content of a file to another file
* @argc: Amount of arguments passed to the functin
* @argv: Argument vector
* Return: Always 0 (Success)
**/

int main(int argc, char *argv[])
{
int fd_r, fd_w, r, x, y;
char buf[BUFSIZ];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd_r = open(argv[1], O_RDONLY);
if (fd_r < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((r = read(fd_r, buf, BUFSIZ)) > 0)
{
if (fd_w < 0 || write(fd_w, buf, r) != r)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fd_r);
exit(99);
}
}
if (r < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
x = close(fd_r);
y = close(fd_w);
if (x < 0 || y < 0)
{
if (x < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
if (y < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
exit(100);
}
return (0);
}
