

# LEARNING C

For running and debug, u need to install MinGW Installation Manager
Install the entire instance of GCC
Change the environment variables, in the path, edit and create the folder c:\MinGW\bin
After, go to vscode, press F5, and edit the lauch.json and c_cpp_properties.json
for edit launch.json:
Copy:
{
    // Use o IntelliSense para saber mais sobre os atributos possíveis.
    // Focalizar para exibir as descrições dos atributos existentes.
    // Para obter mais informações, acesse: https://go.microsoft.com/fwlink/?linkid=830387
    "version": "0.2.0",
    "configurations": [
        {
            "name": "(gdb) Iniciar",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}/a.exe", <--change to "${workspaceFolder}/a.exe"-->
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}", <--change to "{workspaceFolder}"-->
            "environment": [],
            "externalConsole": true, <--change to true-->
            "MIMode": "gdb",
            "miDebuggerPath": "C:\\MinGW\\bin\\gdb.exe", <--edit this for "C:\\MinGW\\bin\\gdb.exe", use '\\' for make a dir-->
            "setupCommands": [
                {
                    "description": "Habilitar a reformatação automática para gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ]
        }
    ]
}
for edit c_cpp_properties.json:
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "${workspaceFolder}/**"
            ],
            "defines": [],
            "compilerPath": "C:\\MinGW\\bin\\gcc", <--Change to "C:\\MinGW\\bin\\gcc"-->
            "cStandard": "gnu17",
            "cppStandard": "gnu++14",
            "intelliSenseMode": "linux-gcc-x64"
        }
    ],
    "version": 4
}




