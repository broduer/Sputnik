Here is a simple Telnet style client + server.

The way it works is the main class is in TelnetBase.spk this controls the *core* aspects of it.

The server + client both inherit this then they do their own things.

The server supports infinite clients and will handle them just fine.

Each client can choose a name for itself and begin chatting.

There are no commands etc but that would be trivial to add to the server (only default Console stuff is available like .cls and .exit)

To try it out first open the server then open a client (or many clients) and enter their name and try chatting.

As you can see it would be easy to expand on it and add passwords/logins and commands etc.

Both the client and server are using the ConsoleWithInput class so they can type and see console data the same time it is a nice class for this kind of app.