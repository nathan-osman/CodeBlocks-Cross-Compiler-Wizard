## Setting Up the Script

In order to use this script, you will need to register it first so that Code::Blocks can find it. This is a relatively straightforward process and consists of the following steps:

1. Copy the contents of this repository (you can omit this README if you wish) to the `templates/wizard/ccwa` subdirectory of Code::Blocks' data directory (this is usually something like `/usr/share/codeblocks`). You will probably need to create the `ccwa` directory.

2. Open the `templates/wizard/config.script` file in your favorite text editor.

3. At the top of the file, at the beginning of `RegisterWizards()`, add the following line:

        RegisterWizard(wizProject, _T("ccwa"), _T("Cross-compiled Windows Application"), _T("GUI"));
   
   The first few lines should look something like this:
   
        function RegisterWizards()
        {
            RegisterWizard( ...
            
            //
            // project wizards
            //

4. Save the file and restart Code::Blocks.
