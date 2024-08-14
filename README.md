# CONFIG-MAN

Have you ever spent more then five minutes shuffling around configuration files while solving issues in different projects? Have you ever bumped heads with the frustration of trying to test a feature, only to have a pesky typo in your database server address ruin the whole experience? Well, suffer no more!

Config-Man appears as a simple solution to keep all your different configurations neatly organized. The app runs on electron and locally - we expect the second version will implement distributed access with user roles and authorization - and keeps track of the different configuration files in your projects.

#### Features:
* Workspaces - Config-Man allows you to define workspaces. Thes may have one or more root directories. Config-man scans these directories, and short-circuits the folder structure in order to provide access to your config files in a convenient way.
* Templates - Config-Man allows you to upload custom schemas which describe your configuration files, meaning you can have the app generate instances as needed. These templates are further configurable with Preset Values.
* Preset Values - Config-Man allows you to define preset values to each field of your configuration file. This means you can easily tinker with different blocks of configuration without picking that 200 line credentials file for values.
* Encryption - Config-Man uses a local database in the form of a db.json file - let's be real, there's no need for more in this app. To ensure further security, Config-Man allows you to activate encryption. The App will prompt you for the location of your private and public keys, and use them to encrypt the db.json file into a db.crypt file, which will become the new database file.

#### Going Forward:
* Credential Manager
* Collaborative Workspaces

## Installation

The repository comes with a boot.c file and a Makefile. To easily use the app, simply run 
```
$ make run
$./config-man
```

You can easily configure your bash or wsl to run this binary like any other linux command. Just create a directory in your ~/ and add the path to that directory to the PATH variable. Note that this will be local to the current session. Look up how to permanently modify the PATH variable for your particular distro to make it permanent.

## Workspaces

The App is organized in Workspaces. Each workspace may have one or more root directories. The app acts by scanning these directories for configuration files using regex. You can customize the matching expressions in the Settings menu.

Once the configuration files are found, the app presents them to you in a timely fashion. By ignoring intermediate directories, the UI organizes configuration files by top level files, facilitating access while keeping the top-level architecture of your project in sight.

### Example

Take this file structure:

```Base-File-Structure
project
│   README.md
│   file001.txt    
│
└───folder1
│   |   settings.json
|   |   ...
│   │   
│   └───subfolder1
│       |   db.config
|       |   ...
│   
└───folder2
│   │   
│   └───subfolder1
│   │   └───subfolder1
│   │       |   userconfig.xml
│   │       |   ...       
|   |
│   │   main.cpp
│   │   ...
```

The UI would display this:
``` UI-File-Structure
project   
│
└───folder1
│   │   settings.json
│   └───db.config
│   
└───folder2
    └───userconfig.xml
```

## Git Structure
#### Conventions
* snapshot/MMDDYYYY - these are backup branches. They store the state of the project at the associated date
* epic/* - here you can find the most recent working version of the given epic*
* feature/* - feature branches, to be merged into parent e/pic/*
* release/MAJOR.MINOR.PATCH - release branches

#### Directories
* **/** - root directory
* **/docs/** - documentation
* **/src/** - source code
