# CProjectTemplate

[![Ubuntu](https://github.com/stevengogogo/CProjectTemplate/actions/workflows/ci.yml/badge.svg)](https://github.com/stevengogogo/CProjectTemplate/actions/workflows/ci.yml)[![codecov](https://codecov.io/gh/stevengogogo/CProjectTemplate/branch/main/graph/badge.svg?token=5F6B6C9M1K)](https://codecov.io/gh/stevengogogo/CProjectTemplate)

Project template for C programming. Including debugging in VSCODE, makefile and Unit testing (+ Github CI)

Usage
------

- `make BUILD`
- `make RUN`
- `make TEST`


Features
----------

- Clear structures
    - [Source](src/) and [test](test/) 
    - Header file are organized under [`src/include/`](src/include) 
    - Building with [makfile](makefile)
- Unit testing
     - Organized by  [`runtests.c`](test/runtest.c)
     - Use [`acutest.h`] (test/acutest.h) debugging (Courtesy from [mity/acutest](https://github.com/mity/acutest))
 - Debugger with VScode
     - The configuration of debugger  are supported under  [`.vscode`](.vscode/) 


Prerequist
----------

1. Vscode
2. `build-essentials`
3. Linux

How to use this C template
--------------------------

### Build and Run with `src/main.c`

```make
make BUILD_RUN
```

<img width="977" alt="Screen Shot 2021-02-25 at 3 04 42 PM" src="https://user-images.githubusercontent.com/29009898/109116029-db116d80-777a-11eb-883a-f10f599d5cc5.png">


### Unit testing

```
make TEST
```

<img width="924" alt="Screen Shot 2021-02-25 at 3 04 06 PM" src="https://user-images.githubusercontent.com/29009898/109116100-f7150f00-777a-11eb-9de0-88eaef70a222.png">


### Set workspace to this project 
<img width="400" alt="Workspace" src="https://user-images.githubusercontent.com/29009898/109115183-a5b85000-7779-11eb-97b2-1cde0b306cdb.png">

### Use the debugger icon on  VScode
<img width="2560" alt="GDB usage" src="https://user-images.githubusercontent.com/29009898/109115199-abae3100-7779-11eb-8c21-bc4d98be52a7.png">


