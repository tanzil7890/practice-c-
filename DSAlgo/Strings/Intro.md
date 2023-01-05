# ASCII Code (0-127) Total: 128 (7bits)
A - 65
.
.
Z - 90

a - 97
.
.
z - 122

0 - 48
.
.
9 - 57

enter - 10
space - 13
esc - 27


# Unicode: subset of ASCII code
> 2 bytes, 16 - bits, represent in form of hexadecimal

# char (1 bit)
> char temp
temp = 'A';
printf("%c", temp); //A
printf("%d", temp); //65
cout<<temp;     //A

### In Array Form
>char X[5];
char X[5] = {'A', 'B', 'C', 'D', 'E'};
char X[] = {'A', 'B', 'C', 'D', 'E'};
char X[5] = {65, 66, 67, 68, 69};
char X[5] = {'A', 'B'};


## String delimeter / End of String char / Null character / String Terminator
In C & C++ there is "end of the string character" which is initialize by null '\o' at the end of the string ex: char name[10] = {'N', 'A', 'S', 'H', 'A'};

In JAVA, size of the string is known by length, but in C and C++ it is known by finding the null character/Termination character.