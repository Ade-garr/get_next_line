# 📌 get_next_line 📌

The aim of this project is to code a function that read content from a file descriptor line by line.

## 🔑 How to

- Open the file to read in your main.c ( ```fd = open("name_of_your_file", O_RDONLY);``` )
- Run ```gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c main.c```
- You can change BUFFER_SIZE if you mind
- Bonus versions supports multi-FD !

The program will return 1 and store the line in the pointer you send for each line of the file. If the last line is reached, the program returns 0.<br><br>
⚠️ Subject given slightly differs from actual project.