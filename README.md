# LEARNING C

## Run and Debug your code


<p>--For running and debug using the Windows OS, you need to install MinGW Installation Manager.</p>
<p>--Install the entire instance of GCC.</p>
<p>--Change the environment variables, in the path, edit and create the folder c:\MinGW\bin.</p>
<p>--After, go to vscode, press F5, and edit the lauch.json and c_cpp_properties.json, maybe you need to create this folder.</p>



### For edit launch.json:


<!--ts-->
* "version": "0.2.0",
* "configurations": 
* "name": "(gdb) Iniciar",
* "type": "cppdbg",
* "request": "launch",
* "program": "insira o nome do programa, por exemplo ${workspaceFolder}/a.out", <--change to "${workspaceFolder}/a.exe"-->
* "args": [],
* "stopAtEntry": false,
* "cwd": "${fileDirname}", <--change to "{workspaceFolder}"-->
* "environment": [],
* "externalConsole": false, <--change to true-->
* "MIMode": "gdb",
* "miDebuggerPath": "/path/to/gdb", <--edit this for "C:\\MinGW\\bin\\gdb.exe", use '\\' for make a dir-->
* "setupCommands": 
                
* "description": "Habilitar a reformatação automática para gdb",
* "text": "-enable-pretty-printing",
* "ignoreFailures": true
                
### For edit c_cpp_properties.json:

* "configurations": 
        
* "name": "Linux",
* "includePath": 
* "${workspaceFolder}/**"

* "defines": [],
* "compilerPath": "/path/to/gdb", <--Change to "C:\\MinGW\\bin\\gcc"-->
* "cStandard": "gnu17",
* "cppStandard": "gnu++14",
* "intelliSenseMode": "linux-gcc-x64"
        
* "version": 4

<!--te-->