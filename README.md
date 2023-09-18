# Get_next_line() - School 42 ✍️ 💻 📝

This project contains all files for the get_next_line project from School 42 Berlin core curriculum. The project consist in create a `get_next_line()` function, that returns a line from a file descriptor. 


## Approach 💡

This project use the following functions `get_next_line`, basically this function checks the file descriptor and the memory allocation that could go wrong. Once this checks are done it calls the `fill_line_buffer` function to read the `fd` until it finds a \n or a \0. 

`fill_line_buffer`: the function read `BUFFER_SIZE` characters in each iteration until it finds a new line or the end of the string in the buffer. During each iteration it checks if there's data in the buffer, when it find data there it appends the new readed characters to it. The goal of the function is to read and concatenate data from a file descriptor.  
 
`set_line`: the function takes a string and finds the 1st ocurrence of a new line character, extract the characters before the newline character into a new string and modifies the buffer to remove the extracted line. 

**Static Variables**: is a variable that has been allocated "statically", meaning that its lifetime is the entire run of the program. 

## Utils 🔮

The utils functions used for this project where the following: 

* `ft_strchr()`: this function returns a pointer of the 1st ocurrence of the character `c` in the string `s`
* `ft_strdup()`: this function returns a pointer to a new string which is a duplicate of the string `s`
* `ft_strlen()`: this function returns the number of bytes in the string pointed to by `s`
* `ft_substr()`: this function returns a substring from the string `s` 
* `ft_strjoin()`: this function returns a new string, which is the result of the concatenation of `s1` and `s2`.