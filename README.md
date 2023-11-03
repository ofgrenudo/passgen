# Pass Gen

pwplease is a random password generator for your terminal. It is intended to be a tool that you can run from the command line that will spit out a password to the default configuration settings, or your custom settings.

## Example Syntax

```text
Name: passgen
Description: A random password generator

-long
    Generate a password using whole words not just characters.

-short
    Generate a password using individual characters.

-dictionary <filename.txt> 
    Generate a password using the provided text file. The ideal text file should be one word per new line.
```