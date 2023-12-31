# PassGen

> a random password generator for your terminal

## Installation

1. Download the latest installer from https://github.com/ofgrenudo/passgen/releases/
2. Place the installer into the folder C:\Program Files\passgen\
3. Include C:\Program Files\passgen in your environment path vairables.
4. Run the program.

Alternatively you can git clone the latest dependency somewhere on your computer and use it locally, or include it in your environmnet path like above.

## Application Syntax

```text

NAME
        PassGen - Create relatively random and unique passwords.

SYNOPSIS
        passgen [OPTION]...

DESCRIPTION
        Create a relatively random and unique password using a random collection of alphanumerical
        characters and symbols. The default behavior of this application is the -s, or --short option.

        NOTE: Only one option can be used at a time. The options will be interperated
        in the order of the list below.

        -h, --help
                Display this message (the help message :)

        -s, --short
                Generates a password that will contain no words, only alpha numerical characters,
                including symbols.

        --no-symbols
                Generates a password that will only contain alpha numerical characters,
                excluding symbols.


AUTHOR
        Written by Joshua D. Winters-Brown.


REPORTING BUGS
        To report bugs, please visit the github issues link below
                > https://github.com/ofgrenudo/passgen/issues
COPYRIGHT
        passgen  Copyright (C) 2023  Joshua D. Winters-Brown.

        This program comes with ABSOLUTELY NO WARRANTY; This is free software,
        and you are welcome to redistribute it under the terms and conditions
        listed in the gpl-3.0 license file;
```

## Development Setup

1. Clone this repo
2. Install make, clang

## Meta

Joshua D. Winters-Brown

Distributed under the GNU General Public License v3.0. See `LICENSE.md` for more information.

[https://github.com/ofgrenudo](https://github.com/ofgrenudo)

## Contributing

1. Fork it ([https://github.com/ofgrenudo/passgen/fork](https://github.com/ofgrenudo/passgen/fork)
2. Create your feature branch (`git checkout -b feature/fooBar`)
3. Commit your changes (`git commit -am "Added foobar"`)
4. Push to branch (`git push origin feature/fooBar`)
5. Create a new Pull Request. 
