#ifndef LIST_H
#define LIST_H
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
void print_error(int code, const char *message, const char *arg);
void copy_file(const char *file_from, const char *file_to);
#endif
