To embed Sputnik in a .net (C# works best) project just simply add a referance to the "Sputnik.dll" then you can begin calling its functions and sending it code to execute you can even create custom functions/macros etc for the Sputnik scripts to execute such making a function that calls back to your C# project.

At some point I will make a Tutorial on how to do this properly but for now I'm just going to include the SputnikXNA.dll source code for you to look at and learn how to make a Sputnik plugin that properly interfaces with Sputnik and adds new features to Sputnik.

It is worth noting that the source code in the SputnikXNA is pretty messy, badly cased, gives off a million *style* warnings in refractor stuff however it runs fine and powers games like Pengo with no problem just make a note that the code was never cleaned up (Like Sputniks was).

You can find the complete SputnikXNA.dll source code in the SputnikXNA.rar file in this folder just extract and view the project you may also build the DLL and try it out.

If you make any improvements or fix any bugs in the DLL make damn sure you test Pengo example before even thinking your changes worked if Pengo runs perfectly then you can be SURE your changes were good if you made good changes send them to me!.

Send any updates (new features) and bug fixes you can come up with to:
uberfox@hotmail.com

--- Note ---
Since Sputnik 0.32 I have also added "SputnikOldGUI" and "SputnikSound" to this folder.

This contains the entire GUI plugin for Sputnik using the SputnikOldGUI.dll

This DLL provides a enough WinForms for Sputnik to create basic GUIs even Sputniks IDE was made with these functions.

At some point I'm going to make an entirely new GUI system but for now this is the GUI for Sputnik.

As for SputnikSound that contains the SputnikSound.dll that is a Managed C++ project that shows you how to create Managed C++ DLLs that interface with Sputnik and add new core functions to Sputnik etc.

--- What you can do ---
Feel free to improve these and send your updates to me.

Or you could make an entirely new GUI plugin for Sputnik that uses gtk or something.

--- Final Word ---
The .rar files may be out of date.