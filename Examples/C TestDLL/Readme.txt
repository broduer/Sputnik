This Test DLL shows how to create/use C/C++ dlls with Sputnik

make_dll.bat // Compile the test.c into test.dll for use with Sputnik
test.c // The source code the DLL look in here to see how functions are made that get/send values to/from Sputnik.
test.def // Useless ignore this
test.dll // Compiled version of the test.c
test.spk // Sputnik code that will use the test.dll you can see how the test.spk handles everything
test_run.bat // Run the test.spk in Sputnik