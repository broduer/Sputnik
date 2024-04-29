WARNING - This script will not run (its IP is set to 1.1.1.1) so don't try to.

This here is a script I made for a friend a year ago (2014).

Basically the person has a server of the game "7 Days To Die".

The server accepts a single TelNet connection for an admin.

The admin is given ALL commands.

The first problem the person had is they wanted the server to support multiple admins and to control what commands each admin can have access to (as to allow moderators etc).

So I created this GateKeeper the way it works is simple:
* It joins the servers Telnet and pretends to be the admin
* It opens a new socket and waits for new connections from the other admins to join
* It accepts admins if their login is valid (each admin can have a different login) then it lets the admins use commands
* It controls what commands each admin can use
* It also keeps track of typed commands by the admins and will wait until the server finishes sending the command feedback to the console and send the information to the CORRECT admin so if multiple admins type at the same time it will make sure you dont see console feedback from a different admin

When this script was 90% finished the person I was making it for decided it would be a good idea to come on teamviewer to check my progress and hit the *lock* button on teamviewer to lock the hosts mouse+keyboard then did a control+A+C in the editor window to copy the source code.

Of course the person immediately denied doing it and claimed teamviewer must have locked itself and my mouse must have moved across the screen by itself and clicked on the editor window by itself and then control+A clicked itself then control+C clicked itself...

Needless to say I laughed at the idiot and informed the idiot of a few things;
1. The program was only 90% finished and wasnt even working at the point they copied the code (I was in the middle of fixing a bug too so nothing would work at all with the debug I was doing)
2. It is made in Sputnik and the person could not just go post it on planetsource and ask for soembody to help them get it working or finish it most people will look it and say they dont have clue
3. I had added a number of features to Sputnik to handle the GateKeeper script (new functions, class improvements etc) so it wouldnt even run on the publically released version of Sputnik at the time
4. Oh and the best part the game itself is in BETA and was going to change massively and somebody familure with the script would be needed to upgrade it to work on the newest game servers (tough out of luck there huh?)

I of course quit the project a blocked the offending individual *cough* valerie *cough*.

A few days later another mate (andrew) who also wants this script but isnt an asshole like the first wanted the script and I decided to finish it and give him it and release a new version of Sputnik that can run the finsihed GateKeeper.

So there is story behind the GateKeeper.

If you even wanted to try it you would need the server setting up and the config changing before even trying.

I don't know if it even works on current version of the game server but I put this script in the examples folder as just another script for people to see how to do networking.