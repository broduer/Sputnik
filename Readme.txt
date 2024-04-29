Sputnik Programming Language (0.38) by UberFoX

This is just my little project maybe you find it useful
or maybe you will help with the project.

Whats New:
* Updated the "Pengo" example with the final version ever made in Sputnik it features a lot more ghosts/powerups/ais and levels
* Updated the "Sputnik IDE" example it is now the latest and final version of the Sputnik Old GUI IDE it also comes with several sample projects including Peppie etc
* Added new example it is a server manager for the game 7 days to die
* Added new example D2ChanBot it is a bare bones Diablo 2 channel bot for PVPGN
* Added back Linux/Mac support once more (again as long just 1 person is interested!)
* Major improvement to "Class extends Name" where if the class is already running it will be hotswapped instead of the older version kept on pre initialized variables
* Fixed a bug in Min() and Max() that could make them not work properly in rare cases
* Fixed a major bug when deleting a key from an array if the key was numeric and very high
* Fixed a bug with funtions that get an array recursively they will now not include the recursive arrays themself and just its values
* Changed how Unserialize() works to fix a glitch in DLL Sputnik that can cause a crash (only happeneds in DLL version)
* Added UnsetClassFunction() to do exactly what it says it does
* Fixed a bug in sort() where if the array has only 1 (or less) elements it will return blank instead of returning a copy (if the flag asks for a return)
* Fixed Tb() to add the . to the end instead of the beginning if the string isnt long enough
* Added Bt64()
* Added Tb64()
* Did a little tweak to arrays to make sure they can never ever return disposed SVs
* Made a tweak for binary "$var[0] = 'T'" it now works and doesnt need @'T' since it will correctly use the first char of the string
* If you do "$var[7] = 'T'" on binary it will now expand the binary size so the position fits inside just like how it does with strings
* Added BinaryGrow() it can be used to increase the size of binary by appending stuff to the end either zero bytes or a specific byte
* Added StrGrow() it works same as BinaryGrow() but for strings instead also it returns a copy instead of editing the string
* Vec() improved internally espeically with binary and will now if a binary provided is over 8 bytes it will use the first 8 as an integer in operations
* StrUncompress() is now a lot faster
* Order() speed improved a bit
* NthField() has been speed up a lot and fixed to handle multiple lines
* CountFields() fixed to handle multiple lines so it now returns how many fields there are in grand total amung all records
* Addes NthRecord() it works similar to NthField() but returns an entire record at the given line instead of just a field
* Added CountRecords() it works similar to CountFields() but returns how many records there are (one per line)
* Fixed a few exceptions that can happen if invalid binary is given for reading NBTs
* Added IsVarArrayOf() it checks if a variable is an array and checks if all elements inside the array are a specific type (such as string or class names)
* Added a wave of encryption functions below:
* EncCreatePass() this allows you to create a new pass (key and iv) from a given passphase with any amount of iterations and optionally a base salt
* EncGenPass() this generates a new key and iv (randomized) using secure crypto random number generating it can be used to encrypt/decrypt AES etc data
* EncPassInfo() prints all information about a pass made with EncGenPass()
* EncGenKey() generate an RSA public & private key for use with encryption
* EncKeyInfo() prints all information (including the raw xml (for export/saving), bytes etc) about a key made with EncGenKey()
* EncLoadKey() loads an encryption key from a string
* Encrypt() encrypt data using a key
* Decrypt() decrypt data using a key
* Sign() sign data using a private key that is proof only the owner of the private key could have signed but anybody with the public key can verify it
* Verify() verify a signature with data using a public key
* EncryptAes() encrypt data using the AES algorithm using a pass made from EncGenPass()
* DecryptAes() dencrypt data using the AES algorithm using a pass made from EncGenPass()
* EncryptPass() encrypt (using public key) a pass created from EncGenPass() with a key created from EncGenPass() so the encrypted pass can be sent to the client to decrypt using its private key
* DecryptPass() decrypt (using private key) an encrypted pass created from EncryptPass() so that AES encrypted data can now be decrypted
* EncryptChunk() this combines EncryptPass() and EncryptAes() to bascially encrypt the pass first then encrypt the data with the password then combine the encrypted data and the encrypted password into a single binary chunk to be decrypted later by the end users private key
* DecryptChunk() this simply reverses what EncryptChunk() did and returns the original data
* Added @EncKeyLen macro that shows how many bytes a "key" part of an AES pass should be (should you want to seed your own)
* Added @EncIvLen macro that shows how many bytes a "iv" part of an AES pass should be (should you want to seed your own)

If you wish to help the development of Sputnik (and other UberSoft projects) feel free to donate to UberSoft at
http://ubersoft.org/donate.htm

Contact
uberfox@hotmail.com

Sputnik Wiki (Up to date)
http://hotline.ubersoft.org/Sputnik/wiki/

Sputnik Wiki (Mirror -- may be out of date)
http://ubersoft.org/sputnik/wiki/

Official Hotline Server
hotline.ubersoft.org

Join with Pitbull Pro
http://ubersoft.org/pitbullpro/