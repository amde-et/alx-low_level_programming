#include "main.h"

/**
* create_file - This function will create a file
* @filename: The name of the file
* @text_content: Is a NULL terminated string to write to the file.
* Return: 1 on success, -1 on failure
**/

int create_file(const char *filename, char *text_content)
{
int fd = 0, fdwr = 0, counter = 0;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);
if (text_content == NULL)
text_content = "";
while (text_content[counter] != '\0')
counter++;
fdwr = write(fd, text_content, counter);
if (fdwr == -1)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
