This example demonstrates how to use the "ConsoleWithInput" class.

This class can be used to handle a console app most notably a server program.

The way it works is it lets you create a console app where stuff can be printed to screen
but yet at the same time you are allowed to type to the console window.

So the server can be running stuff and printing stuff on screen but yet the user can type
commands to make it do things.

Also as a bonus this class allows you to "add" commands to it then when the user types
the command it will call the function you requested.

This is VERY useful since you dont need to worry about parsing input or anything
all you do is define what functions you want people to be able to type and
define what their min and max param count is then it will do the rest for you

You can define if the TIME and or DATE should be shown on each message

You can also define a prefix that gets placed before commands (if the user typed a valid command)

And many more things...