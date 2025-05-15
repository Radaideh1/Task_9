
# C++ Array Utility Program

This project is a simple C++ program that demonstrates various array operations using a modular design. The project is split into three files: a header file, an implementation file, and a main file. It allows the user to interact with an integer array using a menu-driven interface.

## File Structure

- `header.h`: Contains function prototypes for array operations.
- `implementation.cpp`: Provides the implementation of the functions declared in `header.h`.
- `main.cpp`: Contains the `main()` function and user interface. It defines a local integer array of size 5 and allows users to perform various operations on it.

## Functions

### 1. `void fillArray(int list[], const int listSize)`
Reads elements from the user and fills the array.

### 2. `void printArray(const int list[], const int listSize)`
Prints all elements of the array to the console.

### 3. `int searchArray(const int list[], const int listSize, int number)`
Searches for a number in the array and returns its index, or `-1` if not found.

### 4. `void reverseArray(int list[], const int listSize)`
Reverses the elements of the array in-place.

### 5. `void SumAvg(const int list[], const int listSize, int & sum, double & avg)`
Calculates and returns the sum and average of the array elements using reference parameters.

## Menu Options

The `main.cpp` implements a simple text-based menu:

```

1. Read Array
2. Print Array
3. Search Array
4. Reverse Array
5. Sum and Average of the Array
6. Exit

````

## How to Compile

You can compile the program using any C++ compiler such as `g++`:

```bash
g++ main.cpp implementation.cpp -o array_program
````

## How to Run

After compiling, run the executable:

```bash
./array_program
```

## Example Output

```
1. Read Array
2. Print Array
3. Search Array
4. Reverse Array
5. Sum and Average of the Array
0. Exit
Enter your choice: 1
Enter 5 elements: 10 20 30 40 50

Enter your choice: 2
Array elements: 10 20 30 40 50

Enter your choice: 3
Enter number to search: 30
Found at index: 2

Enter your choice: 4
Array reversed.

Enter your choice: 2
Array elements: 50 40 30 20 10

Enter your choice: 5
Sum: 150, Average: 30.0
```
