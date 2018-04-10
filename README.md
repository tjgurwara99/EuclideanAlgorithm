# PrimeNumberLibrary

This makefile will compile and create an executable file called GCD in the current directory by default. If you want to make this into a systemwide command, type `sudo make install`. Once done, the executable will be copied to `/usr/local/bin` directory. 
Using this command requires an argument which can hold a unsigned long long int (128 bit) value.

To execute the command type with local executable type:

`./GCD <number-1> <number-2>`

where `<number-*>` is the number that you want to check.

If `sudo make install` has been used, it would run if you type:

`GCD <number-1> <number-2>`

This function uses Euclidean Algorithm to find out the greatest common divisor of 2 numbers. 

The prime.h library also has some extra and very useful functions that you might like to try.

Note: The makefile uses GNU make format wildcards, therefore in some BSD systems it would potentially not compile properly. I am trying to figure out a way to make it more cross platform so that this works in most `*nix` systems.
