# CPPCalculator

- [CPPCalculator](#cppcalculator)
  - [Build the calculator](#build-the-calculator)
  - [Use the calculator](#use-the-calculator)


## Build the calculator
To build this project you will need make and CMake.
To start we'll need a folder prefered with the name build.

```bash
mkdir build
```

After we createt the folder we go into it and execute the CMake command.

```bash
cmake ../src
```

The `../src` should show to the src directory in this project.

You can build it with
```bash
make
```

We now should have a `calculator` file in our folder. We can easily execute this with 

```bash 
./calculator
```

## Use the calculator

After executing the calculator you can enter the first number.
```bash
Enter first number: 5 # 5 is the input
```
Then choose between the calculation functions.
```bash
Choose between:
1)Addition
2)Subtraction
3)Multiplication
4)Division
1 # < This is our input
```
We now can enter the second number
```bash
Enter second number: 2 # 2 is the input
```
Now it should give the right output.
```bash
7 # 7 is the return value
```